static inline VAR1 FUN1(target_phys_addr_t VAR2, enum device_endian VAR3)
{
    VAR4 *VAR5;
    uint64_t VAR6;
    VAR7 *VAR8;
    VAR8 = FUN2(VAR9.VAR10, VAR2 >> VAR11);
    if (!(FUN3(VAR8->VAR12) || FUN4(VAR8->VAR12)))
    {
        VAR2 = FUN5(VAR8, VAR2);
        VAR6 = FUN6(VAR8->VAR12, VAR2, 2);
        if (VAR3 == VAR13)
        {
            VAR6 = FUN7(VAR6);
        }
        if (VAR3 == VAR14)
        {
            VAR6 = FUN7(VAR6);
        }
    }
    else
    {
        VAR5 = FUN8((FUN9(VAR8->VAR12) & VAR15) + FUN5(VAR8, VAR2));
        switch (VAR3)
        {
        case VAR13:
            VAR6 = FUN10(VAR5);
            break;
        case VAR14:
            VAR6 = FUN11(VAR5);
            break;
        default:
            VAR6 = FUN12(VAR5);
            break;
        }
    }
    return VAR6;
}