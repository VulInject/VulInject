const char *
FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
const unsigned int VAR5 = 8;
u_int VAR6;
char *VAR7;
struct VAR8 *VAR9;
char VAR10[VAR11];

VAR9 = FUN2(VAR2, VAR4, VAR5);
if (VAR9->VAR12)
return (VAR9->VAR12);

VAR7 = VAR10;
for (VAR6 = VAR5; VAR6 > 0 ; --VAR6) {
VAR7 = FUN3(VAR7, *(VAR4 + VAR6 - 1));
*VAR7++ = '';
}
VAR7 --;

*VAR7 = '';

VAR9->VAR12 = strdup(VAR10);
if (VAR9->VAR12 == NULL)
(*VAR2->VAR13)(VAR2, VAR14,
"", VAR15);

return (VAR9->VAR12);
}