static VAR1 FUN1(
const char **VAR2, VAR3 *VAR4,
const unsigned char *VAR5, apr_size_t VAR6,
const char *VAR7, const char *VAR8)
{
apr_status_t VAR9 = VAR10;
char *VAR11 = NULL, *VAR12;
apr_size_t VAR13, VAR14, VAR15, VAR16;
apr_ssize_t VAR17, VAR18;

if (VAR6 > VAR19) {
VAR9 = VAR20;
goto VAR21;
}
VAR17 = (VAR22)VAR6;
VAR9 = FUN2(NULL, (const char*)VAR5, VAR17, VAR23, &VAR13);
if (VAR10 != VAR9) goto VAR21;
if (VAR13 > VAR19) {
VAR9 = VAR20;
goto VAR21;
}
VAR15 = VAR7? strlen(VAR7) : 0;
VAR16 = VAR8? strlen(VAR8) : 0;
VAR12 = VAR11 = FUN3(VAR4,
+ VAR13 + (VAR6/VAR24) + 1 
+ VAR15 +1 + VAR16 + 1 
+ 1); 
if (VAR7) {
strcpy(VAR12, VAR7);
VAR12 += VAR15;
*VAR12++ = '';
}
for (VAR18 = 0; VAR17 > 0; VAR18 += VAR24, VAR17 -= VAR24) {
VAR9 = FUN2(VAR12,
(const char*)VAR5 + VAR18, VAR17 > VAR24? VAR24 : VAR17,
VAR23, &VAR14);
VAR12 += VAR14;
*VAR12++ = '';
}
if (VAR8) {
strcpy(VAR12, VAR8);
VAR12 += VAR16;
*VAR12++ = '';
}
VAR21:
*VAR2 = (VAR10 == VAR9)? VAR11 : NULL;
return VAR9;
}