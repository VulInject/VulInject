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
    if (VAR2->VAR18 || !FUN3() || VAR2->VAR5.VAR8.VAR19 != VAR20 || !FUN4())
    {
        return;
    }
    FUN5(VAR3.VAR4, NULL, NULL, VAR2);
    FUN6(&VAR2->VAR21, VAR22);
    VAR2->VAR5.VAR23 = false;
    FUN7(&VAR2->VAR24);
    if (FUN8(&VAR2->VAR5.VAR25, 0))
    {
        FUN9("");
        goto VAR26;
    }
    VAR3.VAR27 = FUN2(&VAR2->VAR5.VAR25);
    if (FUN10(VAR28, VAR29, &VAR3))
    {
        FUN9("");
        goto VAR30;
    }
    VAR15 = sizeof(*VAR13) + sizeof(*VAR17);
    VAR13 = FUN11(VAR15);
    VAR13->VAR15 = VAR15;
    VAR13->VAR10 = VAR31 | VAR32;
    VAR13->VAR33 = VAR22;
    VAR13->VAR34 = 0;
    VAR13->VAR35 = 1;
    VAR17 = (VAR16 *)&VAR13->VAR36;
    *VAR17 = VAR3.VAR27;
    VAR14 = FUN12(VAR2->VAR21.VAR4, VAR37, VAR13);
    FUN13(VAR13);
    if (VAR14)
    {
        FUN9("");
        goto VAR38;
    }
    FUN14(&VAR2->VAR21, VAR22);
    VAR2->VAR5.VAR39 = true;
    FUN15(VAR2->VAR21.VAR40);
    return;
VAR38:
    VAR3.VAR10 = VAR41;
    FUN10(VAR28, VAR29, &VAR3);
VAR30:
    FUN16(&VAR2->VAR5.VAR25);
VAR26:
    FUN5(VAR3.VAR4, VAR42, NULL, VAR2);
    FUN14(&VAR2->VAR21, VAR22);
}