static int FUN1(VAR1 *VAR2)
{
int VAR3 = 0;
if (VAR2->VAR4 & VAR5) {
VAR2->VAR6 = FUN2(VAR7, VAR2, VAR8, VAR9, &VAR2->VAR10);
if (!VAR2->VAR6) {
VAR2->VAR11 = VAR12;
VAR3 = -1;
}
}
else {
VAR13 = FUN3();
if (!VAR13)
VAR3 = -1;
else
VAR3 = FUN4(VAR13, VAR2);
}

if (VAR3)
FUN5("", VAR14, VAR2->VAR15);

return VAR3;
}