static void FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = FUN2(VAR2);

FUN3(2, "");

FUN4(VAR2->VAR5->VAR6);
VAR2->VAR5->VAR6 = NULL;
VAR2->VAR5->VAR7 = 0;
}