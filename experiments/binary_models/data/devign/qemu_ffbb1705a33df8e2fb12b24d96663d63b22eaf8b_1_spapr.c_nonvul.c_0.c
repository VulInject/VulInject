static void *FUN1(VAR1 *VAR2, hwaddr VAR3, hwaddr VAR4)
{
    VAR5 *VAR6 = FUN2(FUN3());
    VAR7 *VAR8 = FUN4(VAR6);
    VAR9 *VAR10 = FUN5(VAR6);
    int VAR11;
    void *VAR12;
    VAR13 *VAR14;
    char *VAR15;
    VAR12 = FUN6(VAR16);
    FUN7((FUN8(VAR12, VAR16)));
    FUN7(FUN9(VAR12, 0, "", ""));
    FUN7(FUN9(VAR12, 0, "", ""));
    FUN7(FUN9(VAR12, 0, "", ""));
    if (FUN10(&VAR15))
    {
        FUN7(FUN9(VAR12, 0, "", VAR15));
        FUN11(VAR15);
    }
    if (FUN12(&VAR15))
    {
        FUN7(FUN9(VAR12, 0, "", VAR15));
        FUN11(VAR15);
    }
    VAR15 = FUN13(&VAR17);
    FUN7(FUN9(VAR12, 0, "", VAR15));
    if (VAR18)
    {
        FUN7(FUN9(VAR12, 0, "", VAR15));
    }
    FUN11(VAR15);
    if (FUN14())
    {
        FUN7(FUN9(VAR12, 0, "", FUN14()));
    }
    FUN7(FUN15(VAR12, 0, "", 2));
    FUN7(FUN15(VAR12, 0, "", 2));
    FUN16(VAR2->VAR19, VAR12, VAR20);
    VAR11 = FUN17(VAR2, VAR12);
    if (VAR11 < 0)
    {
        FUN18("");
        FUN19(1);
    }
    FUN20(VAR2->VAR21, VAR12);
    if (FUN21("", VAR22, NULL))
    {
        VAR11 = FUN22(VAR12);
        if (VAR11 < 0)
        {
            FUN18("");
            FUN19(1);
        }
    }
    FUN23(VAR14, &VAR2->VAR23, VAR24)
    {
        VAR11 = FUN24(VAR14, VAR20, VAR12);
        if (VAR11 < 0)
        {
            FUN18("");
            FUN19(1);
        }
    }
    FUN25(VAR12, VAR2);
    if (VAR10->VAR25)
    {
        FUN7(FUN26(VAR12, 0, NULL, VAR26));
    }
    if (VAR8->VAR27)
    {
        int VAR28 = FUN27(VAR12, "");
        VAR11 = FUN26(VAR12, VAR28, NULL, VAR29);
        if (VAR11 < 0)
        {
            FUN18("");
            FUN19(1);
        }
    }
    FUN28(VAR2, VAR12);
    FUN29(VAR2, VAR12);
    FUN30(VAR2, VAR12);
    if (FUN31())
    {
        FUN32(VAR2, VAR12);
    }
    if (VAR2->VAR30)
    {
        FUN7((FUN33(VAR12, VAR31, VAR2->VAR30)));
    }
    if (VAR2->VAR32)
    {
        FUN7((FUN33(VAR12, VAR2->VAR33, VAR2->VAR32)));
    }
    VAR11 = FUN34(VAR2, VAR12, VAR2->VAR34);
    if (VAR11 < 0)
    {
        FUN18("");
        FUN19(1);
    }
    return VAR12;
}