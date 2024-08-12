int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7;
    VAR8 *VAR9 = FUN2(VAR4->VAR10);
    unsigned VAR11 = FUN3(VAR9);
    unsigned VAR12, VAR13;
    struct vfio_iommu_spapr_tce_create VAR14 = {.VAR15 = sizeof(VAR14)};
    VAR14.VAR16 = FUN4(VAR4->VAR17);
    VAR14.VAR18 = FUN5(VAR11);
    VAR12 = VAR14.VAR16 >> VAR14.VAR18;
    VAR13 = FUN6((VAR12 * sizeof(VAR19)) / FUN7(), 1);
    VAR13 = FUN6(FUN8(VAR13), 1);
    VAR14.VAR20 = FUN5(VAR13) / 6 + 1;
    VAR7 = FUN9(VAR2->VAR21, VAR22, &VAR14);
    if (VAR7)
    {
        FUN10("", VAR7);
        return -VAR23;
    }
    if (VAR14.VAR24 != VAR4->VAR25)
    {
        FUN11(VAR2, VAR14.VAR24);
        FUN10("" VAR26 "" VAR27, VAR4->VAR25, (VAR19)VAR14.VAR24);
        return -VAR28;
    }
    FUN12(VAR14.VAR18, VAR14.VAR16, VAR14.VAR24);
    *VAR6 = VAR11;
    return 0;
}