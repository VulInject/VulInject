static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8 = FUN3(VAR2);
    int VAR9, VAR10;
    VAR3 *VAR11 = NULL;
    struct kvm_create_device VAR12 = {
        .VAR13 = VAR14,
        .VAR15 = 0,
    };
    if (!FUN4() || !FUN5(VAR16, VAR17))
    {
        FUN6(VAR4, "");
        goto VAR18;
    }
    FUN7(VAR19, "", VAR20);
    FUN7(VAR21, "", VAR20);
    FUN7(VAR22, "", VAR20);
    FUN7(VAR23, "", VAR20);
    VAR10 = FUN8(VAR19, "");
    if (VAR10 < 0)
    {
        FUN6(VAR4, "");
        goto VAR18;
    }
    VAR10 = FUN8(VAR21, "");
    if (VAR10 < 0)
    {
        FUN6(VAR4, "");
        goto VAR18;
    }
    VAR10 = FUN8(VAR23, "");
    if (VAR10 < 0)
    {
        FUN6(VAR4, "");
        goto VAR18;
    }
    VAR10 = FUN8(VAR22, "");
    if (VAR10 < 0)
    {
        FUN6(VAR4, "");
        goto VAR18;
    }
    VAR10 = FUN9(VAR16, VAR24, &VAR12);
    if (VAR10 < 0)
    {
        FUN10(VAR4, -VAR10, "");
        goto VAR18;
    }
    VAR6->VAR25 = VAR12.VAR26;
    FUN11(FUN12(VAR8->VAR27), true, "", &VAR11);
    if (VAR11)
    {
        FUN13(VAR4, VAR11);
        goto VAR18;
    }
    assert(VAR8->VAR28);
    for (VAR9 = 0; VAR9 < VAR8->VAR28; VAR9++)
    {
        FUN11(FUN12(&VAR8->VAR29[VAR9]), true, "", &VAR11);
        if (VAR11)
        {
            FUN13(VAR4, VAR11);
            goto VAR18;
        }
    }
    VAR30 = true;
    VAR31 = true;
    VAR32 = true;
    return;
VAR18:
    FUN8(0, "");
    FUN8(0, "");
    FUN8(0, "");
    FUN8(0, "");
}