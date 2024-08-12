static inline void FUN1(hwaddr VAR1, uint32_t VAR2, enum device_endian VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    hwaddr VAR8 = 4;
    hwaddr VAR9;
    VAR7 = FUN2(&VAR10, VAR1, &VAR9, &VAR8, true);
    if (VAR8 < 4 || !FUN3(VAR7->VAR11) || VAR7->VAR12)
    {
        if (VAR3 == VAR13)
        {
            VAR2 = FUN4(VAR2);
        }
        if (VAR3 == VAR14)
        {
            VAR2 = FUN4(VAR2);
        }
        FUN5(VAR7->VAR11, VAR9, VAR2, 4);
    }
    else
    {
        VAR9 += FUN6(VAR7->VAR11) & VAR15;
        VAR5 = FUN7(VAR9);
        switch (VAR3)
        {
        case VAR13:
            FUN8(VAR5, VAR2);
            break;
        case VAR14:
            FUN9(VAR5, VAR2);
            break;
        default:
            FUN10(VAR5, VAR2);
            break;
        }
        FUN11(VAR9, 4);
    }
}