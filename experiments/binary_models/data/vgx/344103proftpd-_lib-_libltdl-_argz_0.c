FUN1 (char **VAR1, VAR2 *VAR3, char *VAR4, const char *VAR5)
{
assert (VAR1);
assert (VAR3);
assert (VAR5 && *VAR5);


if (!VAR4)
return FUN2 (VAR1, VAR3, VAR5, 1+ strlen (VAR5));


while ((VAR4 > *VAR1) && (VAR4[-1] != VAR6))
--VAR4;

{
size_t VAR7	= 1+ strlen (VAR5);
size_t VAR8	= *VAR3 + VAR7;
size_t VAR9	= VAR4 - *VAR1;
char   *VAR10	= (char *) realloc (*VAR1, VAR8);

if (!VAR10)
return VAR11;


VAR4 = VAR10 + VAR9;


memmove (VAR4 + VAR7, VAR4, *VAR3 - VAR9);
memcpy  (VAR4, VAR5, VAR7);


*VAR1 = VAR10;
*VAR3 = VAR8;
}

return 0;
}