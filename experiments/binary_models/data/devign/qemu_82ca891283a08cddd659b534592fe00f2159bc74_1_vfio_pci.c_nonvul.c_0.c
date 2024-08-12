static void FUN1(VAR1 *VAR2)
{
    struct kvm_irqfd VAR3 = {
        .VAR4 = FUN2(&VAR2->VAR5.VAR6),
        .VAR7 = VAR2->VAR5.VAR8.VAR9,
        .VAR10 = VAR11,
    };
    struct VAR12 *VAR13;
    int VAR14, VAR15;
    VAR16 *VAR17;
    if (!VAR18 || !FUN3() || VAR2->VAR5.VAR8.VAR19 != VAR20 || !FUN4(VAR21, VAR22))
    {
        return;
    }
    FUN5(VAR3.VAR4, NULL, NULL, VAR2);
    FUN6(VAR2);
    VAR2->VAR5.VAR23 = false;
    FUN7(VAR2->VAR24.VAR9[VAR2->VAR5.VAR25], 0);
    if (FUN8(&VAR2->VAR5.VAR26, 0))
    {
        FUN9("");
        goto VAR27;
    }
    VAR3.VAR28 = FUN2(&VAR2->VAR5.VAR26);
    if (FUN10(VAR21, VAR29, &VAR3))
    {
        FUN9("");
        goto VAR30;
    }
    VAR15 = sizeof(*VAR13) + sizeof(*VAR17);
    VAR13 = FUN11(VAR15);
    VAR13->VAR15 = VAR15;
    VAR13->VAR10 = VAR31 | VAR32;
    VAR13->VAR33 = VAR34;
    VAR13->VAR35 = 0;
    VAR13->VAR36 = 1;
    VAR17 = (VAR16 *)&VAR13->VAR37;
    *VAR17 = VAR3.VAR28;
    VAR14 = FUN12(VAR2->VAR4, VAR38, VAR13);
    FUN13(VAR13);
    if (VAR14)
    {
        FUN9("");
        goto VAR39;
    }
    FUN14(VAR2);
    VAR2->VAR5.VAR40 = true;
    FUN15("", VAR41, VAR2->VAR42.VAR43, VAR2->VAR42.VAR44, VAR2->VAR42.VAR45, VAR2->VAR42.VAR46);
    return;
VAR39:
    VAR3.VAR10 = VAR47;
    FUN10(VAR21, VAR29, &VAR3);
VAR30:
    FUN16(&VAR2->VAR5.VAR26);
VAR27:
    FUN5(VAR3.VAR4, VAR48, NULL, VAR2);
    FUN14(VAR2);
}