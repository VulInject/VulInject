void FUN1(const VAR1 *VAR2, VAR3 **VAR4)
{
    struct kvm_s390_vm_cpu_processor VAR5 = {
        .VAR6 = {0},
    };
    struct kvm_device_attr VAR7 = {
        .VAR8 = VAR9,
        .VAR7 = VAR10,
        .VAR11 = (VAR12)&VAR5,
    };
    int VAR13;
    if (!VAR2)
    {
        if (FUN2())
        {
            FUN3();
        }
        return;
    }
    if (!FUN4())
    {
        FUN5(VAR4, "");
        return;
    }
    VAR5.VAR14 = FUN6(VAR2);
    VAR5.VAR15 = FUN7(VAR2);
    FUN8(VAR2->VAR16, VAR17, (VAR18 *)VAR5.VAR6);
    VAR13 = FUN9(VAR19, VAR20, &VAR7);
    if (VAR13)
    {
        FUN5(VAR4, "", VAR13);
        return;
    }
    VAR13 = FUN10(VAR2->VAR16);
    if (VAR13)
    {
        FUN5(VAR4, "", VAR13);
        return;
    }
    VAR13 = FUN11(VAR2->VAR16);
    if (VAR13)
    {
        FUN5(VAR4, "", VAR13);
        return;
    }
    if (FUN12(VAR21, VAR2->VAR16))
    {
        FUN3();
    }
}