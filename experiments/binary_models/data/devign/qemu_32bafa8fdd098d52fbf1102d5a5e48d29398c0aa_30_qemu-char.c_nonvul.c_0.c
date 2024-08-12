static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = NULL;
    if (VAR4->VAR10)
    {
        VAR7 = FUN2(VAR4->VAR11, VAR4->VAR12, NULL, &VAR9);
    }
    else
    {
        VAR7 = FUN3(VAR4->VAR11, VAR4->VAR12, VAR4->VAR13->VAR14.VAR15.VAR16->VAR17, &VAR9);
    }
    if (VAR7 == NULL)
    {
        FUN4(VAR9);
        FUN5(VAR2);
    }
    FUN6(FUN7(VAR4->VAR11));
    VAR4->VAR11 = FUN8(VAR7);
    FUN9(VAR7, VAR18, VAR2, NULL);
}