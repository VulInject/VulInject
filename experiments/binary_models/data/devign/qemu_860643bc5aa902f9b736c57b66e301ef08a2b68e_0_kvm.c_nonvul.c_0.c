int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = &VAR4->VAR6;
    struct kvm_sregs VAR7;
    struct kvm_regs VAR8;
    int VAR9, VAR10;
    VAR6->VAR11.VAR12 = VAR2->VAR13->VAR14;
    VAR6->VAR11.VAR15 = VAR2->VAR13->VAR16;
    if (VAR17 && VAR2->VAR13->VAR18 & VAR19)
    {
        for (VAR9 = 0; VAR9 < 16; VAR9++)
        {
            VAR6->VAR8[VAR9] = VAR2->VAR13->VAR20.VAR8.VAR21[VAR9];
        }
    }
    else
    {
        VAR10 = FUN3(VAR2, VAR22, &VAR8);
        if (VAR10 < 0)
        {
            return VAR10;
        }
        for (VAR9 = 0; VAR9 < 16; VAR9++)
        {
            VAR6->VAR8[VAR9] = VAR8.VAR21[VAR9];
        }
    }
    if (VAR17 && VAR2->VAR13->VAR18 & VAR23 && VAR2->VAR13->VAR18 & VAR24)
    {
        for (VAR9 = 0; VAR9 < 16; VAR9++)
        {
            VAR6->VAR25[VAR9] = VAR2->VAR13->VAR20.VAR8.VAR26[VAR9];
            VAR6->VAR27[VAR9] = VAR2->VAR13->VAR20.VAR8.VAR28[VAR9];
        }
    }
    else
    {
        VAR10 = FUN3(VAR2, VAR29, &VAR7);
        if (VAR10 < 0)
        {
            return VAR10;
        }
        for (VAR9 = 0; VAR9 < 16; VAR9++)
        {
            VAR6->VAR25[VAR9] = VAR7.VAR26[VAR9];
            VAR6->VAR27[VAR9] = VAR7.VAR28[VAR9];
        }
    }
    if (VAR17 && VAR2->VAR13->VAR18 & VAR30)
    {
        VAR6->VAR31 = VAR2->VAR13->VAR20.VAR8.VAR32;
    }
    FUN4(VAR2, VAR33, &VAR6->VAR34);
    FUN4(VAR2, VAR35, &VAR6->VAR36);
    FUN4(VAR2, VAR37, &VAR6->VAR38);
    if (VAR39)
    {
        VAR10 = FUN4(VAR2, VAR40, &VAR6->VAR41);
        if (VAR10 < 0)
        {
            return VAR10;
        }
        VAR10 = FUN4(VAR2, VAR42, &VAR6->VAR43);
        if (VAR10 < 0)
        {
            return VAR10;
        }
        VAR10 = FUN4(VAR2, VAR44, &VAR6->VAR45);
        if (VAR10 < 0)
        {
            return VAR10;
        }
    }
    return 0;
}