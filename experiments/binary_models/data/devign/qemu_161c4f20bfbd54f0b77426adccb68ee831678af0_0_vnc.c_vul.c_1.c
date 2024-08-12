static void FUN1(VAR1 *VAR2)
{
    FUN2(VAR2, VAR3);
    FUN3(&VAR2->VAR4);
    FUN3(&VAR2->VAR5);
    FUN4(VAR2->VAR6);
    FUN5(VAR2);
    FUN6(VAR2);
    FUN7(VAR2);
    FUN8(&VAR2->VAR7->VAR8, VAR2, VAR9);
    if (FUN9(&VAR2->VAR7->VAR8))
    {
        VAR10->VAR11 = 1;
    }
    FUN10(&VAR2->VAR12);
    FUN11(VAR2->VAR7);
    if (VAR2->VAR7->VAR13)
        FUN12(VAR2->VAR14);
    FUN13(VAR2);