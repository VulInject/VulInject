static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = &VAR8->VAR11;
    VAR3 *VAR12 = NULL;
    FUN4(VAR6, VAR8->VAR13, VAR14, VAR10, "");
    FUN5(VAR6, &VAR10->VAR15, VAR8->VAR15);
    VAR10->VAR16 = VAR8->VAR17;
    if (VAR10->VAR16 != -1)
    {
        VAR10->VAR17 = FUN6(FUN7(VAR6), VAR8->VAR17);
        assert(VAR10->VAR17);
    }
    FUN8(VAR2, VAR8->VAR13, 2);
    FUN9(VAR10, &VAR12);
    if (VAR12 != NULL)
    {
        FUN10(VAR4, VAR12);
        return;
    }
}