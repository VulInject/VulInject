int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2);
    VAR6 *VAR7 = &VAR5->VAR7;
    struct kvm_sregs VAR8;
    struct kvm_regs VAR9;
    struct kvm_fpu VAR10 = {};
    int VAR11;
    int VAR12;
    VAR2->VAR13->VAR14 = VAR7->VAR15.VAR16;
    VAR2->VAR13->VAR17 = VAR7->VAR15.VAR18;
    if (VAR19 && VAR2->VAR13->VAR20 & VAR21)
    {
        for (VAR12 = 0; VAR12 < 16; VAR12++)
        {
            VAR2->VAR13->VAR22.VAR9.VAR23[VAR12] = VAR7->VAR9[VAR12];
            VAR2->VAR13->VAR24 |= VAR21;
        }
    }
    else
    {
        for (VAR12 = 0; VAR12 < 16; VAR12++)
        {
            VAR9.VAR23[VAR12] = VAR7->VAR9[VAR12];
        }
        VAR11 = FUN3(VAR2, VAR25, &VAR9);
        if (VAR11 < 0)
        {
            return VAR11;
        }
    }
    for (VAR12 = 0; VAR12 < 16; VAR12++)
    {
        VAR10.VAR26[VAR12] = VAR7->VAR27[VAR12].VAR28;
    }
    VAR10.VAR29 = VAR7->VAR29;
    VAR11 = FUN3(VAR2, VAR30, &VAR10);
    if (VAR11 < 0)
    {
        return VAR11;
    }
    if (VAR3 == VAR31)
    {
        return 0;
    }
    FUN4(VAR2, VAR32, &VAR7->VAR33);
    FUN4(VAR2, VAR34, &VAR7->VAR35);
    FUN4(VAR2, VAR36, &VAR7->VAR37);
    FUN4(VAR2, VAR38, &VAR7->VAR39);
    FUN4(VAR2, VAR40, &VAR7->VAR41);
    if (VAR42)
    {
        VAR11 = FUN4(VAR2, VAR43, &VAR7->VAR44);
        if (VAR11 < 0)
        {
            return VAR11;
        }
        VAR11 = FUN4(VAR2, VAR45, &VAR7->VAR46);
        if (VAR11 < 0)
        {
            return VAR11;
        }
        VAR11 = FUN4(VAR2, VAR47, &VAR7->VAR48);
        if (VAR11 < 0)
        {
            return VAR11;
        }
    }
    if (VAR19 && VAR2->VAR13->VAR20 & VAR49 && VAR2->VAR13->VAR20 & VAR50)
    {
        for (VAR12 = 0; VAR12 < 16; VAR12++)
        {
            VAR2->VAR13->VAR22.VAR9.VAR51[VAR12] = VAR7->VAR52[VAR12];
            VAR2->VAR13->VAR22.VAR9.VAR53[VAR12] = VAR7->VAR54[VAR12];
        }
        VAR2->VAR13->VAR24 |= VAR49;
        VAR2->VAR13->VAR24 |= VAR50;
    }
    else
    {
        for (VAR12 = 0; VAR12 < 16; VAR12++)
        {
            VAR8.VAR51[VAR12] = VAR7->VAR52[VAR12];
            VAR8.VAR53[VAR12] = VAR7->VAR54[VAR12];
        }
        VAR11 = FUN3(VAR2, VAR55, &VAR8);
        if (VAR11 < 0)
        {
            return VAR11;
        }
    }
    if (VAR19 && VAR2->VAR13->VAR20 & VAR56)
    {
        VAR2->VAR13->VAR22.VAR9.VAR57 = VAR7->VAR58;
        VAR2->VAR13->VAR24 |= VAR56;
    }
    else
    {
    }
    return 0;
}