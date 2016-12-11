#include "Arduino.h"

long int strtol(const char *nptr, char **endptr, int base);
void float2str(float f,char*s,unsigned int fmt);

char * strstr(const char *haystack, const char *needle) {

  if (!*needle)
    return (char *)haystack;

  const char *p1 = haystack;
  const char *p2 = needle;
  const char *p1Adv = haystack;

  while (*++p2)
    p1Adv++;

  while (*p1Adv) {
    const char *p1Begin = p1;
    p2 = needle;
    while (*p1 && *p2 && *p1 == *p2) {
      p1++;
      p2++;
    }
    if (!*p2)
      return (char *)p1Begin;
    p1 = p1Begin + 1;
    p1Adv++;
  }
  return 0;
}

char *strrchr(const char *s, int c) {

  if (!s)
    return 0;

  const char *end = s;
  while (*end)
    end++;
  end--;

  while ((end != s) && (*end != c))
    end--;

  if (*end == c)
    return (char *)end;

  return 0;
}

long atol(const char *nptr) {
  return strtol(nptr, 0, 10);
}

char * dtostrf (float __val, signed char __width,
                unsigned char __prec, char *__s) {
  float2str(__val, __s, 0);
  return __s;
}

int tolower(int c) {
  return toLowerCase(c);
}

int toupper(int c) {
  return toUpperCase(c);
}
