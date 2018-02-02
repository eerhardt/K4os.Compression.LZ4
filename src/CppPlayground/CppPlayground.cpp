// CppPlayground.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "lz4.h"
#include <stdlib.h>

typedef char byte;

int main()
{
	byte src[] = {
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
		0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	};
	int src_len = sizeof(src) / sizeof(char);
	int dst_len = LZ4_compressBound(30);
	byte* dst = (byte*)malloc(dst_len);
	int cmp_len = LZ4_compress_fast(src, dst, src_len, dst_len, 1);
}

