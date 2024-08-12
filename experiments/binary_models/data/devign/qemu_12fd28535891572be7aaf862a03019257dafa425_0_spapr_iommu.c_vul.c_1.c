static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    if (FUN3())
    {
        VAR4->VAR5 = FUN4(VAR4->VAR6, VAR4->VAR7 << VAR4->VAR8, &VAR4->VAR9, VAR4->VAR10);
    }
    if (!VAR4->VAR5)
    {
        size_t VAR11 = VAR4->VAR7 * sizeof(VAR12);
        VAR4->VAR5 = FUN5(VAR11);
    }
    FUN6(VAR4->VAR6, VAR4, VAR4->VAR5, VAR4->VAR9);
    FUN7(&VAR4->VAR13, FUN8(VAR2), &VAR14, "", (VAR12)VAR4->VAR7 << VAR4->VAR8);
    FUN9(&VAR15, VAR4, VAR16);
    FUN10(FUN11(VAR4), VAR4->VAR6, &VAR17, VAR4);
    return 0;
}