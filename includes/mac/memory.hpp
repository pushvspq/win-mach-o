#pragma once

#include <cstdint>

namespace mac {
	inline const void* _memchr( const void* rcx, int character, size_t size ) {
		if ( size > 0 ) {
			const char* data = reinterpret_cast< const char* >( rcx );

			if ( data ) {
				do {
					if ( *data++ == character )
						return ( void* )( data - 1 );
				} while ( --size != 0 );
			}
		}

		return 0;
	}

	inline uint64_t read_uleb128( const uint8_t*& cursor, const uint8_t* end ) {
		uint64_t result{ };
		int bit{ };

		while ( cursor < end ) {
			const uint8_t byte = *cursor++;
			result |= static_cast< uint64_t >( byte & 0x7f ) << bit;

			if ( ( byte & 0x80 ) == 0 )
				return result;

			bit += 7;

			if ( bit > 63 )
				return 0;
		}

		return 0;
	}

	inline int64_t read_sleb128( const uint8_t*& cursor, const uint8_t* end ) {
		int64_t result{ };
		int bit{ };
		uint8_t byte{ };

		while ( cursor < end ) {
			byte = *cursor++;
			result |= static_cast< int64_t >( byte & 0x7f ) << bit;
			bit += 7;

			if ( ( byte & 0x80 ) == 0 )
				break;
		}

		if ( cursor > end )
			return 0;

		if ( ( bit < 64 ) && ( byte & 0x40 ) )
			result |= -1LL << bit;

		return result;
	}

	inline const char* read_cstring( const uint8_t* base, size_t offset, size_t max_size ) {
		if ( offset >= max_size )
			return 0;

		auto str = reinterpret_cast< const char* >( base + offset );
		auto remaining = max_size - offset;
		auto terminator = _memchr( str, '\0', remaining );

		if ( !terminator )
			return 0;

		return str;
	}
} // namespace mac