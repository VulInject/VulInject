static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    char *VAR7;
    unsigned long VAR8, VAR9;
    long VAR10;
    int64_t VAR11;
    VAR12 *VAR13;
    VAR12 *VAR14;
    int VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    VAR20 *VAR21;
    int VAR22;
    VAR23 *VAR24[VAR25 * VAR26];
    VAR27 *VAR28;
    VAR29 *VAR30;
    if (VAR6 == NULL)
    {
        VAR6 = "";
    }
    VAR30 = FUN2(VAR6);
    if (!VAR30)
    {
        fprintf(VAR31, "");
        FUN3(1);
    }
    FUN4(NULL, "", 0, 3, VAR32, VAR33, VAR30);
    FUN5(VAR34, VAR30);
    VAR1 = 256 * 1024 * 1024;
    VAR10 = 1024 * 1024;
    VAR8 = FUN6(NULL, "", VAR1);
    VAR9 = FUN6(NULL, "", VAR10);
    FUN7(0, VAR1, VAR8);
    FUN7(0x1fc00000LL, VAR10, VAR9 | VAR35);
    if (VAR3)
    {
        VAR36.VAR1 = VAR1;
        VAR36.VAR3 = VAR3;
        VAR36.VAR4 = VAR4;
        VAR36.VAR5 = VAR5;
        VAR11 = FUN8(VAR30);
        FUN9(VAR30, FUN10(VAR9), VAR11);
    }
    else
    {
        if (VAR37 == NULL)
        {
            VAR37 = VAR38;
        }
        VAR7 = FUN11(VAR39, VAR37);
        if (VAR7)
        {
            VAR10 = FUN12(VAR7, 0x1fc00000LL, VAR40);
            FUN13(VAR7);
        }
        else
        {
            VAR10 = -1;
        }
        if ((VAR10 < 0 || VAR10 > VAR40) && !VAR3)
        {
            fprintf(VAR31, "", VAR37);
            FUN3(1);
        }
    }
    FUN14(VAR30);
    FUN15(VAR30);
    VAR13 = FUN16(VAR30->VAR41[5]);
    VAR17 = FUN17((VAR12 *)&(VAR30->VAR41[2]));
    if (FUN18(VAR42) >= VAR25)
    {
        fprintf(VAR31, "");
        FUN3(1);
    }
    for (VAR22 = 0; VAR22 < VAR25 * VAR26; VAR22++)
    {
        VAR24[VAR22] = FUN19(VAR42, VAR22 / VAR26, VAR22 % VAR26);
    }
    VAR15 = FUN20(VAR17, FUN21(VAR43, 0));
    if (VAR15 < 0)
    {
        fprintf(VAR31, "");
        FUN3(1);
    }
    FUN22(VAR13);
    FUN23(VAR17, VAR24, FUN21(VAR43, 1));
    FUN24(VAR17, FUN21(VAR43, 2));
    FUN24(VAR17, FUN21(VAR43, 3));
    VAR21 = FUN25(VAR17, FUN21(VAR43, 4), 0xeee1, NULL);
    VAR19 = FUN26(8 * 256);
    memcpy(VAR19, VAR44, sizeof(VAR44));
    VAR28 = FUN27((VAR45 *)VAR21, "");
    FUN28(VAR28, "", 0x50);
    FUN29(VAR28, "", VAR19);
    FUN30(VAR28);
    VAR46 = FUN31(0x40, 0);
    VAR14 = FUN32(VAR47, NULL, 1);
    FUN33(0, VAR14);
    FUN34("");
    FUN35(2000, NULL);
    for (VAR22 = 0; VAR22 < VAR48; VAR22++)
    {
        if (VAR49[VAR22])
        {
            FUN36(VAR22, VAR49[VAR22]);
        }
    }
    if (VAR50[0])
    {
        FUN37(0, VAR50[0]);
    }
    FUN38(VAR17);
    FUN39();
}