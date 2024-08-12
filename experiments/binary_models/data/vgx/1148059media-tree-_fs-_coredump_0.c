static int FUN1(struct VAR1 *VAR2, int VAR3, int VAR4)
{
struct VAR1 *VAR5;
int VAR6 = 0;


VAR2->signal->VAR4 = VAR7 | VAR4;
VAR2->signal->VAR8 = VAR3;
VAR2->signal->VAR9 = 0;

FUN2(VAR2, VAR5) {
FUN3(VAR5, VAR10);
if (VAR5 != VAR11 && VAR5->VAR12) {
FUN4(&VAR5->VAR13.signal, VAR14);
FUN5(VAR5, 1);
VAR6++;
}
}

return VAR6;
}