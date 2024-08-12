void
FUN1(VAR1 *VAR2, char *VAR3, ...)
{
va_list	VAR4;
size_t		VAR5 = 0;
char		VAR6[1];
char		*VAR7 = (char *)NULL;



assert(VAR3 != (char *)NULL);
assert(*VAR3 != '');
assert(FUN2(VAR2));





FUN3(VAR4, VAR3);
VAR5 = vsnprintf(VAR6, 1, VAR3, VAR4);
FUN4(VAR4);

assert(VAR5 > 0);



VAR7 = (char *)calloc(1, VAR5+2);
assert(VAR7 != (char *)NULL);



FUN3(VAR4, VAR3);
VAR5 = vsnprintf(VAR7, VAR5+1, VAR3, VAR4);
FUN4(VAR4);

assert(VAR5 > 0);
assert(*VAR7 != '');

FUN5(VAR8, "", VAR7);
free(VAR7);



VAR7 = FUN6(VAR2);
if (VAR7 != (char *)NULL) {
FUN5(VAR8, VAR9, VAR2->VAR10,
strlen(VAR7), VAR7);
}
free(VAR7);
}