static void FUN1(void)
{
    VAR1 *VAR2;
    VAR3 *VAR4;
    FUN2();
    FUN3();
    FUN4();
    while ((VAR2 = FUN5(&VAR5.VAR6)) != NULL)
    {
        FUN6(&VAR5.VAR6, VAR7);
        FUN7(VAR2->VAR8, VAR2->VAR9);
        FUN8(VAR2->VAR9);
        FUN9(VAR2->VAR8);
        FUN10(VAR2->VAR10);
        FUN10(VAR2);
    }
    while ((VAR4 = FUN5(&VAR5.VAR11)) != NULL)
    {
        FUN6(&VAR5.VAR11, VAR7);
        FUN10(VAR4->VAR12);
        FUN10(VAR4);
    }
    FUN11();
}