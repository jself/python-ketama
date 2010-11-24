/* LibMemcached
 * Copyright (C) 2006-2010 Brian Aker
 * All rights reserved.
 *
 * Use and distribution licensed under the BSD license.  See
 * the COPYING file in the parent directory for full text.
 *
 * Summary: 
 *
 */
#ifndef __KETAMA_LIB_H__
#define __KETAMA_LIB_H__

#include <string.h>
#include <sys/types.h>
#include <stdint.h>

//typedef unsigned long int uint32_t;

uint32_t ketama_server_hash(const char *key, size_t key_length, uint32_t alignment);
void md5_signature(const unsigned char *key, unsigned int length, unsigned char *result);

#endif
