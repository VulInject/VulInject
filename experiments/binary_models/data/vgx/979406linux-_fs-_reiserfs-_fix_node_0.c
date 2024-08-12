static int FUN1(struct VAR1 *VAR2)
{
int VAR3 = 0;
int VAR4;
char *VAR5;

VAR4 = FUN2(VAR2->VAR6, FUN3(VAR2->VAR7));


if (VAR4 > VAR2->VAR8) {
if (VAR2->VAR9) {

FUN4(VAR2->VAR9);

VAR3 = 1;
}


VAR2->VAR8 = VAR4;


VAR5 = FUN5(VAR4, VAR10 | VAR11);
if (!VAR5) {

FUN6(VAR2);
VAR5 = FUN5(VAR4, VAR12);
if (!VAR5) {
VAR2->VAR8 = 0;
}
VAR2->VAR9 = VAR5;
FUN7();
return VAR13;
}

VAR2->VAR9 = VAR5;
}

if (VAR3 && FUN8(VAR2))
return VAR13;

return VAR14;
}