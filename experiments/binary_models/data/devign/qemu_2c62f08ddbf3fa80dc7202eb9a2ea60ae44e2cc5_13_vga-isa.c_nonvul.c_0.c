static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = &VAR4->VAR7;
    VAR8 *VAR9;
    const VAR10 *VAR11, *VAR12;
    FUN3(VAR6);
    VAR6->VAR13 = FUN4(VAR2);
    VAR9 = FUN5(VAR6, &VAR11, &VAR12);
    FUN6(VAR2, 0x3b0, VAR11, VAR6, "");
    if (VAR12)
    {
        FUN6(VAR2, 0x1ce, VAR12, VAR6, "");
    }
    FUN7(FUN4(VAR2), VAR14 + 0x000a0000, VAR9, 1);
    FUN8(VAR9);
    VAR6->VAR15 = FUN9(VAR6->update, VAR6->VAR16, VAR6->VAR17, VAR6);
    FUN10(VAR6, FUN4(VAR2));
    FUN11(VAR18);
    return 0;
}