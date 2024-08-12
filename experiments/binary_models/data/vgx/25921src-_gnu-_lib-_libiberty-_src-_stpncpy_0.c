then return @VAR1{VAR2} + @VAR1{VAR3}, otherwise VAR4 @VAR1{VAR2} +
strlen(@VAR1{VAR5}).

@end VAR6



extern size_t strlen (const char *);
extern char *strncpy (char *, const char *, VAR7);

char *
FUN1 (char *VAR2, const char *VAR5, size_t VAR3)
{
size_t VAR8 = strlen (VAR5);
if (VAR8 > VAR3)
VAR8 = VAR3;
return strncpy (VAR2, VAR5, VAR3) + VAR8;
}