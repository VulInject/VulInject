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
    VAR15 *VAR17;
    VAR18 *VAR19;
    VAR20 *VAR21;
    VAR22 *VAR23;
    int VAR24;
    VAR25 *VAR26[VAR27 * VAR28];
    VAR29 *VAR30;
    VAR31 *VAR32;
    if (VAR4 == NULL)
    {
        VAR4 = "";
    }
    VAR30 = FUN4(VAR4);
    if (VAR30 == NULL)
    {
        fprintf(VAR33, "");
        FUN5(1);
    }
    VAR32 = &VAR30->VAR32;
    FUN6(VAR34, VAR30);
    VAR3 = 256 * 1024 * 1024;
    VAR13 = 1024 * 1024;
    FUN7(VAR11, NULL, "", VAR3, &VAR35);
    FUN8(VAR11);
    FUN7(VAR12, NULL, "", VAR13, &VAR35);
    FUN8(VAR12);
    FUN9(VAR12, true);
    FUN10(VAR10, 0, VAR11);
    FUN10(VAR10, 0x1fc00000LL, VAR12);
    if (VAR5)
    {
        VAR36.VAR3 = VAR3;
        VAR36.VAR5 = VAR5;
        VAR36.VAR6 = VAR6;
        VAR36.VAR7 = VAR7;
        VAR14 = FUN11(VAR32);
        FUN12(VAR32, FUN13(VAR12), VAR14);
    }
    else
    {
        if (VAR37 == NULL)
        {
            VAR37 = VAR38;
        }
        VAR8 = FUN14(VAR39, VAR37);
        if (VAR8)
        {
            VAR13 = FUN15(VAR8, 0x1fc00000LL, VAR40);
            FUN16(VAR8);
        }
        else
        {
            VAR13 = -1;
        }
        if ((VAR13 < 0 || VAR13 > VAR40) && !VAR5 && !FUN17())
        {
            FUN18("", VAR37);
            FUN5(1);
        }
    }
    FUN19(VAR32);
    FUN20(VAR32);
    VAR19 = FUN21((VAR15 *)&(VAR32->VAR41[2]));
    FUN22(VAR26, VAR27);
    VAR21 = FUN23(VAR19, FUN24(VAR42, 0));
    if (!VAR21)
    {
        fprintf(VAR33, "");
        FUN5(1);
    }
    VAR16 = FUN25(VAR21, VAR32->VAR41[5]);
    FUN26(VAR21, VAR16);
    FUN27(VAR19, VAR26, FUN24(VAR42, 1));
    FUN28(VAR19, FUN24(VAR42, 2), "");
    FUN28(VAR19, FUN24(VAR42, 3), "");
    VAR23 = FUN29(VAR19, FUN24(VAR42, 4), 0xeee1, NULL);
    FUN30(VAR23, 1, VAR43, sizeof(VAR43));
    VAR44 = FUN31(VAR21, 0x40, 0, NULL);
    VAR17 = FUN32(VAR45, NULL, 1);
    FUN33(0, VAR17);
    FUN34(VAR21, "");
    FUN35(VAR21, 2000, NULL);
    for (VAR24 = 0; VAR24 < VAR46; VAR24++)
    {
        if (VAR47[VAR24])
        {
            FUN36(VAR21, VAR24, VAR47[VAR24]);
        }
    }
    if (VAR48[0])
    {
        FUN37(VAR21, 0, VAR48[0]);
    }
    FUN38(VAR19);
    FUN39(VAR19);
}