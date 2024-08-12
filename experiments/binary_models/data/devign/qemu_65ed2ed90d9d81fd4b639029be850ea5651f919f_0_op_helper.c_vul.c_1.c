void FUN1(VAR1 *VAR2, target_ulong VAR3, MMUAccessType VAR4, int VAR5, uintptr_t VAR6)
{
    bool VAR7;
    uint32_t VAR8 = 0;
    ARMMMUFaultInfo VAR9 = {};
    VAR7 = FUN2(VAR2, VAR3, VAR4, VAR5, &VAR8, &VAR9);
    if (FUN3(VAR7))
    {
        VAR10 *VAR11 = FUN4(VAR2);
        VAR12 *VAR13 = &VAR11->VAR13;
        uint32_t VAR14, VAR15;
        unsigned int VAR16;
        bool VAR17;
        if (VAR6)
        {
            FUN5(VAR2, VAR6);
        }
        VAR16 = FUN6(VAR13);
        if (VAR9.VAR18)
        {
            VAR16 = 2;
            VAR13->VAR19.VAR20 = FUN7(VAR9.VAR21, 12, 47) << 4;
        }
        VAR17 = FUN8(VAR13) == VAR16;
        VAR14 = VAR8 & ~(1 << 9);
        if (VAR4 == VAR22)
        {
            VAR14 = FUN9(VAR17, 0, VAR9.VAR23, VAR14);
            VAR15 = VAR24;
        }
        else
        {
            VAR14 = FUN10(VAR13->VAR25.VAR26, VAR16, VAR17, VAR9.VAR23, VAR4 == VAR27, VAR14);
            if (VAR4 == VAR27 && FUN11(VAR13, VAR28))
            {
                VAR8 |= (1 << 11);
            }
            VAR15 = VAR29;
        }
        VAR13->VAR25.VAR30 = VAR3;
        VAR13->VAR25.VAR8 = VAR8;
        FUN12(VAR13, VAR15, VAR14, VAR16);
    }
}