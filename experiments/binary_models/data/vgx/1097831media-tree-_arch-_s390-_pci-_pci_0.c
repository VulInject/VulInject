static int FUN1(struct VAR1 *VAR2)
{
if (VAR3) {
VAR2->VAR4 = (VAR5) VAR2->VAR6;
return 0;
}

FUN2(&VAR7);
VAR2->VAR4 = FUN3(VAR8, VAR9);
if (VAR2->VAR4 == VAR9) {
FUN4(&VAR7);
return -VAR10;
}
FUN5(VAR2->VAR4, VAR8);
FUN4(&VAR7);
return 0;
}