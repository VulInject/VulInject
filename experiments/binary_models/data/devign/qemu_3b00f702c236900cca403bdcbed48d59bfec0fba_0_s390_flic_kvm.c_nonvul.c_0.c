static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    struct kvm_create_device VAR7 = {0};
    struct kvm_device_attr VAR8 = {0};
    int VAR9;
    VAR3 *VAR10 = NULL;
    FUN3(VAR2)->FUN4(VAR2, &VAR10);
    if (VAR10)
    {
        goto VAR11;
    }
    VAR6->VAR12 = -1;
    if (!FUN5(VAR13, VAR14))
    {
        FUN6(&VAR10, VAR15, ""
                                             "");
        FUN7(VAR15);
        goto VAR11;
    }
    VAR7.VAR16 = VAR17;
    VAR9 = FUN8(VAR13, VAR18, &VAR7);
    if (VAR9 < 0)
    {
        FUN6(&VAR10, VAR15, "");
        FUN9(VAR15);
        goto VAR11;
    }
    VAR6->VAR12 = VAR7.VAR12;
    VAR8.VAR19 = VAR20;
    VAR6->VAR21 = !FUN10(VAR6->VAR12, VAR22, VAR8);
    return;
VAR11:
    FUN11(VAR4, VAR10);
}