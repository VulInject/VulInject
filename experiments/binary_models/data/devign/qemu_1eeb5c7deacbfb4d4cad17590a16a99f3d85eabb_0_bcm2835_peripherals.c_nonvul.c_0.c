static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    VAR7 *VAR8;
    VAR9 *VAR10;
    VAR3 *VAR11 = NULL;
    uint32_t VAR12, VAR13;
    int VAR14;
    VAR8 = FUN3(FUN4(VAR2), "", &VAR11);
    if (VAR8 == NULL)
    {
        FUN5(VAR4, "", VAR15, FUN6(VAR11));
        return;
    }
    VAR10 = FUN7(VAR8);
    VAR12 = FUN8(VAR10);
    FUN9(&VAR6->VAR16, FUN4(VAR6), "", &VAR6->VAR17, 0, FUN8(&VAR6->VAR17));
    FUN10(&VAR6->VAR18, VAR19, &VAR6->VAR16, 1);
    for (VAR14 = 0; VAR14 < 4; VAR14++)
    {
        FUN9(&VAR6->VAR20[VAR14], FUN4(VAR6), "", VAR10, 0, VAR12);
        FUN10(&VAR6->VAR18, (VAR21)VAR14 << 30, &VAR6->VAR20[VAR14], 0);
    }
    FUN11(FUN4(&VAR6->VAR22), true, "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN13(&VAR6->VAR17, VAR23, FUN14(FUN15(&VAR6->VAR22), 0));
    FUN16(FUN15(VAR6), FUN15(&VAR6->VAR22));
    FUN17(FUN18(VAR6->VAR24), "", VAR25[0]);
    FUN11(FUN4(VAR6->VAR24), true, "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN13(&VAR6->VAR17, VAR26, FUN14(VAR6->VAR24, 0));
    FUN19(VAR6->VAR24, 0, FUN20(FUN18(&VAR6->VAR22), VAR27, VAR28));
    FUN17(FUN18(&VAR6->VAR29), "", VAR25[1]);
    FUN11(FUN4(&VAR6->VAR29), true, "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN13(&VAR6->VAR17, VAR30, FUN14(FUN15(&VAR6->VAR29), 0));
    FUN19(FUN15(&VAR6->VAR29), 0, FUN20(FUN18(&VAR6->VAR22), VAR27, VAR31));
    FUN11(FUN4(&VAR6->VAR32), true, "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN13(&VAR6->VAR17, VAR33, FUN14(FUN15(&VAR6->VAR32), 0));
    FUN19(FUN15(&VAR6->VAR32), 0, FUN20(FUN18(&VAR6->VAR22), VAR34, VAR35));
    VAR13 = (VAR36)FUN21(FUN4(VAR6), "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN22(FUN4(&VAR6->VAR37), VAR12 - VAR13, "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN11(FUN4(&VAR6->VAR37), true, "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN13(&VAR6->VAR38, VAR39 << VAR40, FUN14(FUN15(&VAR6->VAR37), 0));
    FUN19(FUN15(&VAR6->VAR37), 0, FUN23(FUN18(&VAR6->VAR32), VAR39));
    FUN11(FUN4(&VAR6->VAR41), true, "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN13(&VAR6->VAR38, VAR42 << VAR40, FUN14(FUN15(&VAR6->VAR41), 0));
    FUN19(FUN15(&VAR6->VAR41), 0, FUN23(FUN18(&VAR6->VAR32), VAR42));
    FUN11(FUN4(&VAR6->VAR43), true, "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN13(&VAR6->VAR17, VAR44, FUN14(FUN15(&VAR6->VAR43), 0));
    FUN22(FUN4(&VAR6->VAR45), VAR46, "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN11(FUN4(&VAR6->VAR45), true, "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN11(FUN4(&VAR6->VAR45), true, "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN13(&VAR6->VAR17, VAR47, FUN14(FUN15(&VAR6->VAR45), 0));
    FUN19(FUN15(&VAR6->VAR45), 0, FUN20(FUN18(&VAR6->VAR22), VAR27, VAR48));
    FUN11(FUN4(&VAR6->VAR49), true, "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN13(&VAR6->VAR17, VAR50, FUN14(FUN15(&VAR6->VAR49), 0));
    FUN19(FUN15(&VAR6->VAR49), 0, FUN20(FUN18(&VAR6->VAR22), VAR27, VAR51));
    FUN11(FUN4(&VAR6->VAR52), true, "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN13(&VAR6->VAR17, VAR53, FUN14(FUN15(&VAR6->VAR52), 0));
    FUN13(&VAR6->VAR17, VAR54, FUN14(FUN15(&VAR6->VAR52), 1));
    for (VAR14 = 0; VAR14 <= 12; VAR14++)
    {
        FUN19(FUN15(&VAR6->VAR52), VAR14, FUN20(FUN18(&VAR6->VAR22), VAR27, VAR55 + VAR14));
    }
    FUN11(FUN4(&VAR6->VAR56), true, "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
    FUN13(&VAR6->VAR17, VAR57, FUN14(FUN15(&VAR6->VAR56), 0));
    FUN24(FUN4(VAR6), "", FUN4(&VAR6->VAR56), "", &VAR11);
    if (VAR11)
    {
        FUN12(VAR4, VAR11);
        return;
    }
}