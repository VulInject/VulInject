void FUN1(VAR1 *VAR2, vaddr VAR3, int VAR4, int VAR5, uintptr_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR2);
    VAR9 *VAR10 = &VAR8->VAR10;
    int VAR11;
    bool VAR12;
    if (VAR6)
    {
        FUN3(VAR2, VAR6);
    }
    VAR11 = FUN4(VAR10);
    VAR12 = (FUN5(VAR10) == VAR11);
    VAR10->VAR13.VAR14 = VAR3;
    if (FUN6(VAR10, FUN7(VAR10, false)))
    {
        VAR10->VAR13.VAR15 = 0x21;
    }
    else
    {
        VAR10->VAR13.VAR15 = 0x1;
    }
    if (VAR4 == 1 && FUN8(VAR10, VAR16))
    {
        VAR10->VAR13.VAR15 |= (1 << 11);
    }
    FUN9(VAR10, VAR17, FUN10(VAR12, 0, 0, 0, VAR4 == 1, 0x21), VAR11);
}