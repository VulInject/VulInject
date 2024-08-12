static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    char *VAR8;
    VAR9 *VAR10 = FUN2();
    VAR9 *VAR11 = FUN3(VAR9, 1);
    VAR9 *VAR12 = FUN3(VAR9, 1);
    long VAR13;
    int64_t VAR14;
    VAR15 *VAR16;
    VAR17 *VAR18;
    VAR19 *VAR20;
    VAR21 *VAR22;
    VAR23 *VAR24[VAR25 * VAR26];
    VAR27 *VAR28;
    VAR29 *VAR30;
    if (VAR4 == NULL)
    {
        VAR4 = "";
    }
    VAR28 = FUN4(VAR4);
    if (VAR28 == NULL)
    {
        fprintf(VAR31, "");
        FUN5(1);
    }
    VAR30 = &VAR28->VAR30;
    FUN6(VAR32, VAR28);
    VAR3 = 256 * 1024 * 1024;
    VAR13 = 1024 * 1024;
    FUN7(VAR11, NULL, "", VAR3);
    FUN8(VAR12, NULL, "", VAR13, &VAR33);
    FUN9(VAR12);
    FUN10(VAR12, true);
    FUN11(VAR10, 0, VAR11);
    FUN11(VAR10, 0x1fc00000LL, VAR12);
    if (VAR5)
    {
        VAR34.VAR3 = VAR3;
        VAR34.VAR5 = VAR5;
        VAR34.VAR6 = VAR6;
        VAR34.VAR7 = VAR7;
        VAR14 = FUN12(VAR30);
        FUN13(VAR30, FUN14(VAR12), VAR14);
    }
    else
    {
        if (VAR35 == NULL)
        {
            VAR35 = VAR36;
        }
        VAR8 = FUN15(VAR37, VAR35);
        if (VAR8)
        {
            VAR13 = FUN16(VAR8, 0x1fc00000LL, VAR38);
            FUN17(VAR8);
        }
        else
        {
            VAR13 = -1;
        }
        if ((VAR13 < 0 || VAR13 > VAR38) && !VAR5 && !FUN18())
        {
            FUN19("", VAR35);
            FUN5(1);
        }
    }
    FUN20(VAR30);
    FUN21(VAR30);
    VAR18 = FUN22((VAR15 *)&(VAR30->VAR39[2]));
    FUN23(VAR24, FUN24(VAR24));
    VAR20 = FUN25(VAR18, FUN26(VAR40, 0));
    if (!VAR20)
    {
        fprintf(VAR31, "");
        FUN5(1);
    }
    VAR16 = FUN27(VAR20, VAR30->VAR39[5]);
    FUN28(VAR20, VAR16);
    FUN29(VAR18, VAR24, FUN26(VAR40, 1));
    FUN30(VAR18, FUN26(VAR40, 2), "");
    FUN30(VAR18, FUN26(VAR40, 3), "");
    VAR22 = FUN31(VAR18, FUN26(VAR40, 4), 0xeee1, NULL);
    FUN32(VAR22, 1, VAR41, sizeof(VAR41));
    VAR42 = FUN33(VAR20, 0x40, 0, NULL);
    FUN34(0);
    FUN35(VAR20, "");
    FUN36(VAR20, 2000, NULL);
    FUN37(VAR20, VAR43);
    FUN38(VAR20, 1);
    FUN39(VAR18);
    FUN40(VAR18);
}