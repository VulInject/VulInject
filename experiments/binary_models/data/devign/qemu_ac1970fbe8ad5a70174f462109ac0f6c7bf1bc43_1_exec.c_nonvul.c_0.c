static inline void FUN1(target_phys_addr_t VAR1, uint32_t VAR2, enum device_endian VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR7 = FUN2(VAR8.VAR9, VAR1 >> VAR10);
    if (!FUN3(VAR7->VAR11) || VAR7->VAR12)
    {
        VAR1 = FUN4(VAR7, VAR1);
        if (FUN3(VAR7->VAR11))
        {
            VAR7 = &VAR13[VAR14];
        }
        if (VAR3 == VAR15)
        {
            VAR2 = FUN5(VAR2);
        }
        if (VAR3 == VAR16)
        {
            VAR2 = FUN5(VAR2);
        }
        FUN6(VAR7->VAR11, VAR1, VAR2, 2);
    }
    else
    {
        unsigned long VAR17;
        VAR17 = (FUN7(VAR7->VAR11) & VAR18) + FUN4(VAR7, VAR1);
        VAR5 = FUN8(VAR17);
        switch (VAR3)
        {
        case VAR15:
            FUN9(VAR5, VAR2);
            break;
        case VAR16:
            FUN10(VAR5, VAR2);
            break;
        default:
            FUN11(VAR5, VAR2);
            break;
        }
        FUN12(VAR17, 2);
    }
}