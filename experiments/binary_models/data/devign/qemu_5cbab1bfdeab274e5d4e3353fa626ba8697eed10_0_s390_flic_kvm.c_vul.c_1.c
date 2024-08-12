static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    struct kvm_create_device VAR7 = {0};
    struct kvm_device_attr VAR8 = {0};
    int VAR9;
    VAR3 *VAR10 = NULL;
    VAR6->VAR11 = -1;
    if (!FUN3(VAR12, VAR13))
    {
        FUN4(&VAR10, VAR14, ""
                                             "");
        FUN5(VAR14);
        VAR7.VAR15 = VAR16;
        VAR9 = FUN6(VAR12, VAR17, &VAR7);
        if (VAR9 < 0)
        {
            FUN4(&VAR10, VAR14, "");
            FUN7(VAR14);
            VAR6->VAR11 = VAR7.VAR11;
            VAR8.VAR18 = VAR19;
            VAR6->VAR20 = !FUN8(VAR6->VAR11, VAR21, VAR8);
            return;
        VAR22:
            FUN9(VAR4, VAR10);