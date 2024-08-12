static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4, struct VAR5 *VAR6, unsigned VAR7)
{
    VAR8 *VAR9 = FUN2(FUN3(FUN4(VAR4)));
    VAR10 *VAR11 = FUN5(VAR9);
    VAR12 *VAR13 = FUN6(VAR11);
    hwaddr VAR14, VAR15, VAR16;
    int VAR17;
    int VAR18 = VAR2->VAR19->FUN7(VAR2, VAR7);
    struct vhost_vring_file VAR20 = {.VAR21 = VAR18};
    struct vhost_vring_state VAR22 = {.VAR21 = VAR18};
    struct VAR23 *VAR24 = FUN8(VAR4, VAR7);
    VAR6->VAR25 = VAR22.VAR25 = FUN9(VAR4, VAR7);
    VAR17 = VAR2->VAR19->FUN10(VAR2, &VAR22);
    if (VAR17)
    {
        FUN11("");
        return -VAR26;
    }
    VAR22.VAR25 = FUN12(VAR4, VAR7);
    VAR17 = VAR2->VAR19->FUN13(VAR2, &VAR22);
    if (VAR17)
    {
        FUN11("");
        return -VAR26;
    }
    if (FUN14(VAR4))
    {
        VAR17 = FUN15(VAR2, FUN16(VAR4), VAR18);
        if (VAR17)
        {
            return -VAR26;
        }
    }
    VAR14 = VAR15 = FUN17(VAR4, VAR7);
    VAR16 = FUN18(VAR4, VAR7);
    VAR6->VAR27 = FUN19(VAR16, &VAR15, 0);
    if (!VAR6->VAR27 || VAR15 != VAR14)
    {
        VAR17 = -VAR28;
        goto VAR29;
    }
    VAR14 = VAR15 = FUN20(VAR4, VAR7);
    VAR16 = FUN21(VAR4, VAR7);
    VAR6->VAR30 = FUN19(VAR16, &VAR15, 0);
    if (!VAR6->VAR30 || VAR15 != VAR14)
    {
        VAR17 = -VAR28;
        goto VAR31;
    }
    VAR6->VAR32 = VAR14 = VAR15 = FUN22(VAR4, VAR7);
    VAR6->VAR33 = VAR16 = FUN23(VAR4, VAR7);
    VAR6->VAR34 = FUN19(VAR16, &VAR15, 1);
    if (!VAR6->VAR34 || VAR15 != VAR14)
    {
        VAR17 = -VAR28;
        goto VAR35;
    }
    VAR6->VAR36 = VAR14 = VAR15 = FUN24(VAR4, VAR7);
    VAR6->VAR37 = VAR16 = FUN25(VAR4, VAR7);
    VAR6->VAR38 = FUN19(VAR16, &VAR15, 1);
    if (!VAR6->VAR38 || VAR15 != VAR14)
    {
        VAR17 = -VAR28;
        goto VAR39;
    }
    VAR17 = FUN26(VAR2, VAR6, VAR18, VAR2->VAR40);
    if (VAR17 < 0)
    {
        VAR17 = -VAR26;
        goto VAR41;
    }
    VAR20.VAR42 = FUN27(FUN28(VAR24));
    VAR17 = VAR2->VAR19->FUN29(VAR2, &VAR20);
    if (VAR17)
    {
        FUN11("");
        VAR17 = -VAR26;
        goto VAR43;
    }
    FUN30(&VAR6->VAR44);
    if (!VAR4->VAR45)
    {
        FUN31(VAR2, VAR4, VAR7, false);
    }
    if (VAR13->VAR46 && VAR13->FUN32(VAR9->VAR47) && FUN33(VAR4, VAR7) == VAR48)
    {
        VAR20.VAR42 = -1;
        VAR17 = VAR2->VAR19->FUN34(VAR2, &VAR20);
        if (VAR17)
        {
            goto VAR49;
        }
    }
    return 0;
VAR49:
VAR43:
VAR41:
    FUN35(VAR6->VAR38, FUN24(VAR4, VAR7), 0, 0);
VAR39:
    FUN35(VAR6->VAR34, FUN22(VAR4, VAR7), 0, 0);
VAR35:
    FUN35(VAR6->VAR30, FUN20(VAR4, VAR7), 0, 0);
VAR31:
    FUN35(VAR6->VAR27, FUN17(VAR4, VAR7), 0, 0);
VAR29:
    return VAR17;
}