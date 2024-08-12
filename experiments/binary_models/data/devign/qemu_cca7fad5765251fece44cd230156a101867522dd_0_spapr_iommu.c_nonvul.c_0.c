static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    if (FUN3())
    {
        VAR4->VAR5 = FUN4(VAR4->VAR6, VAR4->VAR7, &VAR4->VAR8);
    }
    if (!VAR4->VAR5)
    {
        size_t VAR9 = (VAR4->VAR7 >> VAR10) * sizeof(VAR11);
        VAR4->VAR5 = FUN5(VAR9);
    }
    VAR4->VAR12 = VAR4->VAR7 >> VAR10;
    FUN6(VAR4->VAR6, VAR4, VAR4->VAR5, VAR4->VAR8);
    FUN7(&VAR4->VAR13, FUN8(VAR2), &VAR14, "", VAR15);
    FUN9(&VAR16, VAR4, VAR17);
    FUN10(FUN11(VAR4), VAR4->VAR6, &VAR18, VAR4);
    return 0;
}