void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    char *VAR8;
    VAR9 *VAR10 = FUN2();
    VAR9 *VAR11 = FUN3(VAR9, 1);
    VAR9 *VAR12;
    VAR9 *VAR13 = FUN3(VAR9, 1);
    VAR9 *VAR14 = FUN3(VAR9, 1);
    VAR9 *VAR15 = FUN3(VAR9, 1);
    int VAR16;
    VAR17 *VAR18;
    VAR19 *VAR20;
    VAR21 *VAR22;
    int VAR23;
    VAR24 *VAR25;
    VAR26 *VAR27;
    VAR28 *VAR29[VAR30 * VAR31];
    VAR28 *VAR32;
    int VAR33;
    if (VAR4 == NULL)
    {
        VAR4 = "";
        VAR4 = "";
    }
    VAR18 = FUN4(VAR4);
    if (VAR18 == NULL)
    {
        fprintf(VAR34, "");
        FUN5(1);
    }
    VAR20 = &VAR18->VAR20;
    VAR22 = FUN6(sizeof(VAR21));
    VAR22->VAR18 = VAR18;
    VAR22->VAR35 = VAR20->VAR36.VAR37;
    FUN7(VAR38, VAR22);
    if (VAR3 > (256 << 20))
    {
        fprintf(VAR34, "", ((unsigned int)VAR3 / (1 << 20)));
        FUN5(1);
    }
    FUN8(VAR11, NULL, "", VAR3);
    FUN9(VAR10, 0, VAR11);
    FUN10(VAR13, NULL, &VAR39, NULL, "", 0x10000);
    FUN9(VAR10, 0x1fbf0000, VAR13);
    if (VAR40 == NULL)
        VAR40 = VAR41;
    VAR8 = FUN11(VAR42, VAR40);
    if (VAR8)
    {
        VAR16 = FUN12(VAR8);
    }
    else
    {
        VAR16 = -1;
    }
    VAR33 = 1;
    VAR33 = 0;
    if ((VAR16 > 0) && (VAR16 <= VAR43))
    {
        VAR12 = FUN3(VAR9, 1);
        FUN13(VAR12, NULL, "", VAR43, &VAR44);
        FUN14(VAR12, true);
        FUN9(FUN2(), 0x1fc00000, VAR12);
        FUN15(VAR8, 0x1fc00000, VAR43);
    }
    else if ((VAR32 = FUN16(VAR45, 0, 0)) != NULL)
    {
        uint32_t VAR46 = 0x00400000;
        if (!FUN17(0x1fc00000, NULL, "", VAR46, FUN18(VAR32), VAR47, VAR46 / VAR47, 4, 0, 0, 0, 0, VAR33))
        {
            fprintf(VAR34, "");
        }
    }
    else if (!FUN19())
    {
        FUN20("", VAR40);
    }
    FUN21(VAR8);
    if (VAR5)
    {
        VAR48.VAR3 = VAR3;
        VAR48.VAR5 = VAR5;
        VAR48.VAR6 = VAR6;
        VAR48.VAR7 = VAR7;
        VAR22->VAR35 = FUN22();
    }
    FUN23(VAR18);
    FUN24(VAR18);
    FUN25(VAR14, NULL, "", FUN26(), 0, 0x00010000);
    FUN27(VAR15, NULL, "", 0x01000000);
    FUN9(FUN2(), 0x14000000, VAR14);
    FUN9(FUN2(), 0x10000000, VAR15);
    VAR27 = FUN28(NULL, VAR15, FUN26(), &VAR49);
    VAR25 = FUN29(VAR27, VAR20->VAR50[2]);
    FUN30(VAR27, VAR25);
    FUN31(VAR27, 2000, NULL);
    VAR51 = FUN32(VAR27, 0x40, 0, NULL);
    FUN33(VAR27, 0, VAR52);
    FUN34(VAR27);
    if (VAR53[0].VAR54)
        FUN35(VAR27, 0x300, 9, &VAR53[0]);
    FUN36(VAR29, FUN37(VAR29));
    for (VAR23 = 0; VAR23 < VAR30; VAR23++)
        FUN38(VAR27, VAR55[VAR23], VAR56[VAR23], VAR57[VAR23], VAR29[VAR31 * VAR23], VAR29[VAR31 * VAR23 + 1]);
    FUN39(VAR27, "");
}