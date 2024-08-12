static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4;
unsigned long VAR5;

if (FUN2(&VAR2->VAR6)) {
FUN3(&VAR2->VAR7);
} else {
VAR4 = FUN4(VAR2->VAR6.VAR8,
struct VAR3,
VAR9);

if (FUN5(VAR2->VAR10,
VAR4->VAR10)) {
VAR2->VAR10 = VAR4->VAR10;
VAR5 = VAR4->VAR10 - VAR11;
if ((long)VAR5 <= 0)
VAR5 = 1;
FUN6(VAR2->VAR12->VAR13->VAR14,
&VAR2->VAR7, VAR5);
}
}
}