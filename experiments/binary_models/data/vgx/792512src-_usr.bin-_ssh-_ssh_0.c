static int
FUN1(int VAR1, char **VAR2, const char *VAR3)
{
int VAR4;
struct VAR5 *VAR6;

if (*VAR3 == '' || !FUN2(&VAR7) ||
strcmp(*VAR2, VAR3) == 0)
return 0;
if (VAR7.VAR8 == VAR9)
return 0;

if (!VAR1 &&
VAR7.VAR8 != VAR10)
return 0;
FUN3(""%VAR11\""%VAR11\"", *VAR2, VAR3);
for (VAR4 = 0; VAR4 < VAR7.VAR12; VAR4++) {
VAR6 = VAR7.VAR13 + VAR4;
if (FUN4(*VAR2, VAR6->VAR14, 1) != 1 ||
FUN4(VAR3, VAR6->VAR15, 1) != 1)
continue;
FUN5(""
""%VAR11\""%VAR11\"", *VAR2, VAR3);
free(*VAR2);
*VAR2 = xstrdup(VAR3);
return 1;
}
return 0;
}