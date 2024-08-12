void FUN1(VAR1 *VAR2, bool VAR3, bool VAR4)
{
    VAR5 *VAR6 = FUN2(sizeof(*VAR6));
    char *VAR7;
    FUN3(NULL, NULL);
    VAR6->VAR8 = FUN4(VAR9);
    VAR6->VAR10 = FUN5(VAR11, 0);
    VAR6->VAR10 = FUN6(VAR12, 0);
    VAR6->VAR13 = FUN7();
    VAR6->VAR14 = FUN8();
    VAR6->VAR15 = VAR12;
    FUN9(VAR16, "");
    FUN10("", VAR17);
    FUN11("");
    VAR6->VAR18 = FUN12(VAR19);
    VAR6->VAR20.VAR21 = VAR22;
    FUN13(&VAR6->VAR20);
    FUN14(VAR23, VAR6);
    VAR7 = FUN15(VAR24, "");
    if (VAR7)
    {
        VAR25 *VAR26 = NULL;
        VAR27 *VAR28 = FUN16(VAR7, &VAR26);
        if (VAR28)
        {
            FUN17(FUN18(VAR6->VAR8), VAR28);
        }
        else
        {
            FUN19(VAR26);
        }
        FUN20(VAR7);
    }
    FUN21(VAR6);
    FUN22(VAR6);
    FUN23(FUN24(VAR6->VAR13), VAR12);
    FUN25(FUN24(VAR6->VAR13), VAR12);
    FUN26(VAR6);
    FUN27(FUN28(VAR6->VAR10), VAR6->VAR14, VAR12, VAR29, 0);
    FUN27(FUN28(VAR6->VAR10), VAR6->VAR13, VAR29, VAR29, 0);
    FUN29(FUN30(VAR6->VAR8), VAR6->VAR10);
    FUN31(VAR6->VAR8);
    {
        VAR30 *VAR31 = FUN32(VAR6);
        int VAR32;
        for (VAR32 = 0; VAR32 < VAR6->VAR33; VAR32++)
        {
            VAR30 *VAR34 = &VAR6->VAR34[VAR32];
            if (VAR34 && VAR34->VAR35 == VAR36 && VAR34 != VAR31)
            {
                FUN33(VAR34->VAR37.VAR38);
            }
        }
        FUN34(VAR31);
    }
    if (VAR3)
    {
        FUN35(FUN36(VAR6->VAR39));
    }
    if (VAR4)
    {
        FUN35(FUN36(VAR6->VAR40));
    }
    FUN37(VAR6);
}