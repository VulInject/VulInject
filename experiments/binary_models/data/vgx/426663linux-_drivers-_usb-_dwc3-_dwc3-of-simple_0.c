static void FUN1(struct VAR1 *VAR2)
{
FUN2(VAR2->VAR3);

FUN3(VAR2->VAR4, VAR2->VAR5);
FUN4(VAR2->VAR4, VAR2->VAR5);
VAR2->VAR4 = 0;

FUN5(VAR2->VAR6);

FUN6(VAR2->VAR6);

FUN7(VAR2->VAR3);
FUN8(VAR2->VAR3);
FUN9(VAR2->VAR3);
}