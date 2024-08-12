static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    VAR9 *VAR10 = VAR11;
    int VAR12;
    struct kvm_create_device VAR13 = {0};
    int VAR14, VAR15;
    if (!FUN4(VAR10, VAR16))
    {
        FUN5(VAR4, "");
        return;
    }
    switch (VAR8->VAR17)
    {
    case VAR18:
        VAR12 = VAR19;
        break;
    case VAR20:
        VAR12 = VAR21;
        break;
    default:
        FUN5(VAR4, "" VAR22, VAR8->VAR17);
        return;
    }
    VAR13.VAR23 = VAR12;
    VAR14 = FUN6(VAR10, VAR24, &VAR13);
    if (VAR14 < 0)
    {
        FUN5(VAR4, "", VAR13.VAR23, strerror(VAR25));
        return;
    }
    VAR8->VAR26 = VAR13.VAR26;
    FUN7(VAR6, &VAR8->VAR27);
    FUN8(VAR2, VAR28, VAR29);
    VAR8->VAR30.VAR31 = VAR32;
    VAR8->VAR30.VAR33 = VAR34;
    FUN9(&VAR8->VAR30, &VAR35);
    VAR36 = true;
    VAR37 = true;
    VAR38 = true;
    FUN10(VAR11);
    for (VAR15 = 0; VAR15 < 256; ++VAR15)
    {
        FUN11(VAR11, VAR15, 0, VAR15);
    }
    VAR39 = true;
    VAR40 = true;
    FUN12(VAR10);
}