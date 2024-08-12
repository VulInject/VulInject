static inline VAR1 FUN1(hwaddr VAR2, enum device_endian VAR3)
{
    VAR4 *VAR5;
    uint64_t VAR6;
    VAR7 *VAR8;
    hwaddr VAR9 = 8;
    hwaddr VAR10;
    VAR8 = FUN2(&VAR11, VAR2, &VAR10, &VAR9, false);
    if (VAR9 < 8 || !(FUN3(VAR8->VAR12) || FUN4(VAR8->VAR12)))
    {
        VAR6 = FUN5(VAR8->VAR12, VAR10, 4) << 32;
        VAR6 |= FUN5(VAR8->VAR12, VAR10 + 4, 4);
        VAR6 = FUN5(VAR8->VAR12, VAR10, 4);
        VAR6 |= FUN5(VAR8->VAR12, VAR10 + 4, 4) << 32;
    }
    else
    {
        VAR5 = FUN6((FUN7(VAR8->VAR12) & VAR13) + VAR10);
        switch (VAR3)
        {
        case VAR14:
            VAR6 = FUN8(VAR5);
            break;
        case VAR15:
            VAR6 = FUN9(VAR5);
            break;
        default:
            VAR6 = FUN10(VAR5);
            break;
        }
    }
    return VAR6;
}