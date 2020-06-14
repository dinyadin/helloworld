index 7da2992..bc864ed 100644
--- a/string.c
+++ b/string.c
30Git Tutorials
@@ -9,9 +9,20 @@ size_t my_strlen(char *s)
return (p -s );
}
+char *my_strcpy(char *t, char *s)
+
{
   +
   char *p = t;
   +
   + while (*t++ = *s++)
   + ;
   +
   +
   return p;
   +
}
+
int main(void)
{
   int i; 
   +
   char p1[32];
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
      @@ -20,5 +31,7 @@ int main(void)
      for (i = 0; i < 2; ++i)
      printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));
      +
      printf("%s\n", my_strcpy(p1, "Hello, World !!!"));
      +
      return 0;
   }
}}
