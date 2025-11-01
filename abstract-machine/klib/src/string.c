#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>
#include <string.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t len=0;
  //if(s == NULL) return 0;
  while(s[len] != '\0'){
    len++;
  }
  return len;
}

char *strcpy(char *dst, const char *src) {
  //if(dst==NULL && src==NULL) return dst;
  char *p=dst;
  while((*p = *src) != '\0'){
    p++;
    src++;
  }
  return dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  if(n==0) return dst;
  char *p=dst;
  size_t i=0;
  while(i<n && *src != '\0'){
    *p = *src;
    i++;
    p++;
    src++;
  }
  for(;i<n;i++){
    *p = '\0';
    p++;
  }
  return dst;
}

char *strcat(char *dst, const char *src) {
  //if(dst==NULL && src==NULL) return dst;
  char *p = dst;
  while(*p != '\0'){
    p++;
  }
  while((*p = *src) != '\0'){
    p++;
    src++;
  }
  return dst;
}

int strcmp(const char *s1, const char *s2) {
  //if(s1==NULL && s2==NULL) return 0;
  //if(s1==NULL) return -1;
  //if(s2==NULL) return 1;
  while(*s1 !='\0' && *s2!='\0' && *s1==*s2){
    s1++;
    s2++;
  }
  return (int)(*s1-*s2);
}

int strncmp(const char *s1, const char *s2, size_t n) {
  // if (s1 == NULL && s2 == NULL) return 0;
  // if (s1 == NULL) return -1;
  // if (s2 == NULL) return 1;
  if (n == 0) return 0;
    
  size_t i;
  for (i = 0; i < n - 1 && *s1 != '\0' && *s2 != '\0' && *s1 == *s2; i++) {
      s1++;
      s2++;
  }
  return (int)(*s1 - *s2);
}

void *memset(void *s, int c, size_t n) {
  //if(s == NULL || n==0)return s;
  unsigned char *p=(unsigned char *)s;
  unsigned char value = (unsigned char)c;
  while(n-- >0){
    *p++ = value;
  }
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  //if(dst==NULL ||src==NULL||n==0) return dst;
  unsigned char *d = (unsigned char *)dst;
  const unsigned char *s = (const unsigned char *)src;
  if(d>s && d<s+n){
    s += n;
    d += n;
    while(n-->0){
      *--d = *--s;
    }
  }
  else{
    while(n-->0){
      *d++ = *s++;
    }
  }
  return dst;
}

void *memcpy(void *out, const void *in, size_t n) {
  //if (out == NULL || in == NULL || n == 0) return out;
    
    unsigned char *d = (unsigned char *)out;
    const unsigned char *s = (const unsigned char *)in;
    
    while (n-- > 0) {
        *d++ = *s++;
    }
    return out;
}

int memcmp(const void *s1, const void *s2, size_t n) {
  // if (s1 == NULL && s2 == NULL) return 0;
  //   if (s1 == NULL) return -1;
  //   if (s2 == NULL) return 1;
    if (n == 0) return 0;
    
    const unsigned char *p1 = (const unsigned char *)s1;
    const unsigned char *p2 = (const unsigned char *)s2;
    
    size_t i;
    for (i = 0; i < n; i++) {
        if (p1[i] != p2[i]) {
            return (int)(p1[i] - p2[i]);
        }
    }
    return 0;
}

#endif
