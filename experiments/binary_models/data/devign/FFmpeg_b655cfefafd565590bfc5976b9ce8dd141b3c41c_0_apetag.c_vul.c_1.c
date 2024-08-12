VAR1 FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = VAR3->VAR5;
    int VAR6 = FUN2(VAR5);
    uint32_t VAR7, VAR8, VAR9;
    uint8_t VAR10[8];
    int64_t VAR11;
    int VAR12;
    if (VAR6 < VAR13)
        return 0;
    FUN3(VAR5, VAR6 - VAR13, VAR14);
    FUN4(VAR5, VAR10, 8);
    if (FUN5(VAR10, "", 8))
    {
        return 0;
    }
    VAR7 = FUN6(VAR5);
    if (VAR7 > VAR15)
    {
        FUN7(VAR3, VAR16, "", VAR15);
        return 0;
    }
    VAR9 = FUN6(VAR5);
    if (VAR9 - VAR13 > (1024 * 1024 * 16))
    {
        FUN7(VAR3, VAR16, "");
        return 0;
    }
    VAR11 = VAR6 - VAR9 - VAR13;
    if (VAR11 < 0)
    {
        FUN7(VAR3, VAR16, "", VAR9);
        return 0;
    }
    VAR8 = FUN6(VAR5);
    if (VAR8 > 65536)
    {
        FUN7(VAR3, VAR16, "", VAR8);
        return 0;
    }
    VAR7 = FUN6(VAR5);
    if (VAR7 & VAR17)
    {
        FUN7(VAR3, VAR16, "");
        return 0;
    }
    FUN3(VAR5, VAR6 - VAR9, VAR14);
    for (VAR12 = 0; VAR12 < VAR8; VAR12++)
        if (FUN8(VAR3) < 0)
            break;
    return VAR11;
}