static void FUN1(struct VAR1 *VAR1)
{
struct VAR2 *VAR2 = (struct VAR2 *) VAR1;

if (FUN2(VAR2->VAR3) ||
FUN2(VAR2->VAR4)) {
FUN3(VAR1, false, false);
FUN4(20);
}

VAR1->VAR5[0] = 1;
VAR1->VAR5[1] = 0;
FUN5(VAR1, 2);
}