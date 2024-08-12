int FUN1(struct VAR1 *VAR2, struct VAR1 *VAR3, int VAR4, char *VAR5[])
{
char*        VAR6;
char*        VAR7;
const char*  VAR8;
unsigned int VAR9;

assert(0 != VAR2);
assert(VAR2 == VAR3);

if (FUN2(VAR2))
return FUN3(VAR2, VAR2, &VAR10, "");

if (VAR4 < 5)
return FUN4(VAR3, "");


if (!FUN5(VAR5[1])) {
if ((VAR6 = strchr(VAR5[1], '')))
*VAR6 = '';
VAR6 = VAR5[1];
}
else
VAR6 = "";

if ((VAR9 = FUN6(VAR5[2], &VAR7, 10)) != 0
&& VAR7 != NULL && *VAR7 == '')
{
char *VAR11[4] = { NULL, NULL, "", NULL };
char *VAR12[4] = { NULL, NULL, "" , NULL };

if (VAR9 & 8)
FUN7(VAR2, VAR3, 3, VAR11, VAR13);
if (VAR9 & 4)
FUN7(VAR2, VAR3, 3, VAR12, VAR13);
}
else if (VAR5[2][0] == '')
{
char *VAR14[4];
VAR14[0] = NULL;
VAR14[1] = NULL;
VAR14[2] = VAR5[2];
VAR14[3] = NULL;
FUN7(VAR2, VAR3, 3, VAR14, VAR13);
}

VAR8     = (FUN5(VAR5[4])) ? "" : VAR5[4];

return FUN8(FUN9(VAR2), VAR6, VAR5[2], VAR5[3], VAR8);
}