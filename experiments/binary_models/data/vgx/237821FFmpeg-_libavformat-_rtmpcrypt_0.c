static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
VAR6 *VAR7 = VAR2->VAR8;
int VAR9;

if (VAR7->VAR10) {

FUN2(&VAR7->VAR11, (VAR3 *)VAR4, VAR4, VAR5, NULL, 1);
}

if ((VAR9 = FUN3(VAR7->VAR12, VAR4, VAR5)) < 0)
return VAR9;

return VAR5;
}


static const AVOption VAR13[] = {
{"", "", FUN4(VAR14), VAR15, {.VAR16 = 0}, 0, 1, VAR17},
{ NULL },
};