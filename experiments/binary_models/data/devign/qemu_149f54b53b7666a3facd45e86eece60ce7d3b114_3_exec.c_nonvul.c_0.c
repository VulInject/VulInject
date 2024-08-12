static inline VAR1 FUN1(hwaddr VAR2, enum device_endian VAR3)
{
    VAR4 *VAR5;
    uint64_t VAR6;
    VAR7 *VAR8;
    hwaddr VAR9 = 2;
    hwaddr VAR10;
    VAR8 = FUN2(&VAR11, VAR2, &VAR10, &VAR9, false);
    if (VAR9 < 2 || !(FUN3(VAR8->VAR12) || FUN4(VAR8->VAR12)))
    {
        VAR6 = FUN5(VAR8->VAR12, VAR10, 2);
        if (VAR3 == VAR13)
        {
            VAR6 = FUN6(VAR6);
        }
        if (VAR3 == VAR14)
        {
            VAR6 = FUN6(VAR6);
        }
    }
    else
    {
        VAR5 = FUN7((FUN8(VAR8->VAR12) & VAR15) + VAR10);
        switch (VAR3)
        {
        case VAR13:
            VAR6 = FUN9(VAR5);
            break;
        case VAR14:
            VAR6 = FUN10(VAR5);
            break;
        default:
            VAR6 = FUN11(VAR5);
            break;
        }
    }
    return VAR6;
}