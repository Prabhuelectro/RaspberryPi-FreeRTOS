#ifndef MEM_H
#define MEM_H

void* malloc(unsigned nSize);
void free(void* pBlock);
void *memset(void *s, int c, size_t n);
void *memmove(void *dest, const void *src, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
int memcmp(const void* s1, const void* s2, size_t n);
char *strcpy(char *dest, const char* src);
char *strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *s);
int rand();

#endif