static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    FUN2(VAR2);
    FUN3(VAR4, &VAR5, VAR6) { assert(VAR4->VAR7 != VAR2); }
    FUN4(VAR2->VAR8);
    FUN5(VAR2->VAR9);
    FUN5(VAR2->VAR10);