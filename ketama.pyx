
cdef extern from "ketama_lib.h":
    ctypedef  size_t uintptr_t
    ctypedef unsigned int   uint32_t

    uint32_t ketama_server_hash(char *key, size_t key_length, uint32_t alignment)

def ketama_hash(key, alignment=160):
    cdef char *ckey = key
    cdef uint32_t hash
    key_length = len(ckey)
    hash = ketama_server_hash(ckey, key_length, alignment)
    return hash



    
