static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR5, VAR7);
    VAR8 *VAR9 = VAR6->VAR10;
    uint8_t VAR11 = FUN3(VAR6->VAR12);
    VTDContextEntry VAR13;
    FUN4(VAR6, VAR4);
    if (FUN5(VAR9, VAR11, VAR6->VAR14, &VAR13) == 0)
    {
        FUN6(VAR11, FUN7(VAR6->VAR14), FUN8(VAR6->VAR14), FUN9(VAR13.VAR15), VAR13.VAR15, VAR13.VAR16);
        FUN10(&VAR13, 0, ~0ULL, VAR17, (void *)VAR4, false, VAR9->VAR18);
    }
    else
    {
        FUN11(VAR11, FUN7(VAR6->VAR14), FUN8(VAR6->VAR14));
    }
    return;
}