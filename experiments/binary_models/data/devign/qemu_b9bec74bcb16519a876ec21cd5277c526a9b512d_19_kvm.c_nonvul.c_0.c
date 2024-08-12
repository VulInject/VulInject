static int FUN1(VAR1 *VAR2, int VAR3)
{
    struct
    {
        struct kvm_msrs VAR4;
        struct kvm_msr_entry VAR5[100];
    } VAR6;
    struct VAR7 *VAR8 = VAR6.VAR5;
    int VAR9 = 0;
    FUN2(&VAR8[VAR9++], VAR10, VAR2->VAR11);
    FUN2(&VAR8[VAR9++], VAR12, VAR2->VAR13);
    FUN2(&VAR8[VAR9++], VAR14, VAR2->VAR15);
    if (FUN3(VAR2))
    {
        FUN2(&VAR8[VAR9++], VAR16, VAR2->VAR17);
    }
    if (FUN4(VAR2))
    {
        FUN2(&VAR8[VAR9++], VAR18, VAR2->VAR19);
    }
    if (VAR20)
    {
        FUN2(&VAR8[VAR9++], VAR21, VAR2->VAR22);
        FUN2(&VAR8[VAR9++], VAR23, VAR2->VAR24);
        FUN2(&VAR8[VAR9++], VAR25, VAR2->VAR26);
        FUN2(&VAR8[VAR9++], VAR27, VAR2->VAR28);
    }
    if (VAR3 == VAR29)
    {
        if (VAR30 == 1 || VAR2->VAR31 != 0)
        {
            FUN2(&VAR8[VAR9++], VAR32, VAR2->VAR31);
        }
        FUN2(&VAR8[VAR9++], VAR33, VAR2->VAR34);
        FUN2(&VAR8[VAR9++], VAR35, VAR2->VAR36);
        FUN2(&VAR8[VAR9++], VAR37, VAR2->VAR38);
    }
    if (VAR2->VAR39)
    {
        int VAR40;
        if (VAR3 == VAR41)
        {
            FUN2(&VAR8[VAR9++], VAR42, VAR2->VAR43);
        }
        else if (VAR3 == VAR29)
        {
            FUN2(&VAR8[VAR9++], VAR42, VAR2->VAR43);
            FUN2(&VAR8[VAR9++], VAR44, VAR2->VAR45);
            for (VAR40 = 0; VAR40 < (VAR2->VAR39 & 0xff) * 4; VAR40++)
            {
                FUN2(&VAR8[VAR9++], VAR46 + VAR40, VAR2->VAR47[VAR40]);
            }
        }
    }
    VAR6.VAR4.VAR48 = VAR9;
    return FUN5(VAR2, VAR49, &VAR6);
}