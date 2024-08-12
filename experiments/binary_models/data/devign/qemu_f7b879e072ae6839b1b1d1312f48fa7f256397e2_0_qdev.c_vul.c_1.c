static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6;
    if (VAR4->VAR7)
    {
        FUN3(VAR2, false, "", NULL);
    }
    while (VAR4->VAR8)
    {
        VAR6 = FUN4(&VAR4->VAR9);
        FUN5(FUN6(VAR6));
    }
    if (VAR4->VAR10)
    {
        FUN7(VAR4->VAR10, VAR4);
        FUN8(FUN6(VAR4->VAR10));
        VAR4->VAR10 = NULL;
    }
    if (VAR4->VAR11)
    {
        FUN9(VAR4->VAR12);
        FUN10(!!VAR4->VAR13, VAR4->VAR13, VAR4->VAR12, &VAR14);
        FUN11(VAR4->VAR12);
        VAR4->VAR12 = NULL;
    }
}