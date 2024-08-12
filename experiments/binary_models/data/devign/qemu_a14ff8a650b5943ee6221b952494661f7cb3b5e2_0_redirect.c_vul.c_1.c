static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR4, VAR2);
    FUN3(VAR4->VAR5);
    FUN4(VAR4->VAR6);
    FUN5(VAR4->VAR7);
    FUN6(VAR4->VAR7);
    FUN7(VAR4);
    if (VAR4->VAR8)
    {
        FUN8(VAR4->VAR8);
    }
    if (VAR4->VAR9)
    {
        FUN9(VAR4->VAR9);
    }
    free(VAR4->VAR10);