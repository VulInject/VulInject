static void FUN1(VAR1 *VAR2)
{
    static struct kvm_ppc_smmu_info VAR3;
    static bool VAR4;
    VAR5 *VAR6 = &VAR2->VAR6;
    long VAR7;
    int VAR8, VAR9, VAR10, VAR11;
    if (!(VAR6->VAR12 & VAR13))
    {
        return;
    }
    if (!VAR4)
    {
        FUN2(VAR2, &VAR3);
        VAR4 = true;
    }
    VAR7 = FUN3();
    memset(&VAR6->VAR14, 0, sizeof(VAR6->VAR14));
    for (VAR9 = VAR8 = 0; VAR9 < VAR15; VAR9++)
    {
        struct VAR16 *VAR17 = &VAR6->VAR14.VAR14[VAR8];
        struct VAR18 *VAR19 = &VAR3.VAR14[VAR9];
        if (!FUN4(VAR3.VAR20, VAR7, VAR19->VAR21))
        {
            continue;
        }
        VAR17->VAR21 = VAR19->VAR21;
        VAR17->VAR22 = VAR19->VAR22;
        for (VAR11 = VAR10 = 0; VAR11 < VAR15; VAR11++)
        {
            if (!FUN4(VAR3.VAR20, VAR7, VAR19->VAR23[VAR11].VAR21))
            {
                continue;
            }
            VAR17->VAR23[VAR10].VAR21 = VAR19->VAR23[VAR11].VAR21;
            VAR17->VAR23[VAR10].VAR24 = VAR19->VAR23[VAR11].VAR24;
            if (++VAR10 >= VAR25)
            {
                break;
            }
        }
        if (++VAR8 >= VAR25)
        {
            break;
        }
    }
    VAR6->VAR26 = VAR3.VAR27;
    if (!(VAR3.VAR20 & VAR28))
    {
        VAR6->VAR12 &= ~VAR29;
    }
}