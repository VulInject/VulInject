static int FUN1(struct VAR1 *VAR2, char *VAR3)
{
struct VAR4 *VAR5 = NULL;
int VAR6 = 9600;
int VAR7 = 8;
int VAR8 = '';
int VAR9 = '';

if (VAR2->VAR10 >= 0 && VAR2->VAR10 < VAR11)
VAR5 = VAR12 + VAR2->VAR10;


if (!VAR5 || !VAR5->VAR13) {
FUN2("", VAR2->VAR10);
return -VAR14;
}

VAR15 = VAR5;


if (!VAR5->VAR16) {
if (FUN3(VAR5))
return -VAR14;
}

if (VAR3)
FUN4(VAR3, &VAR6, &VAR8, &VAR7, &VAR9);

return FUN5(VAR5, VAR2, VAR6, VAR8, VAR7, VAR9);
}