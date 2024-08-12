FUN1(VAR1 *VAR2)
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
    VAR9 *VAR13 = FUN3(VAR9, 1);
    VAR14 *VAR15;
    VAR16 *VAR17;
    VAR18 *VAR19;
    int VAR20;
    if (VAR4 == NULL)
    {
        VAR4 = "";
        VAR4 = "";
    }
    VAR15 = FUN4(VAR4);
    if (VAR15 == NULL)
    {
        fprintf(VAR21, "");
        FUN5(1);
    }
    VAR17 = &VAR15->VAR17;
    VAR19 = FUN6(sizeof(VAR18));
    VAR19->VAR15 = VAR15;
    VAR19->VAR22 = VAR17->VAR23.VAR24;
    FUN7(VAR25, VAR19);
    FUN8(VAR12, NULL, "", VAR3);
    FUN9(VAR13, NULL, "", VAR26, &VAR27);
    FUN10(VAR13);
    FUN11(VAR13, true);
    FUN12(VAR10, 0, VAR12);
    FUN12(VAR10, 0x1fc00000LL, VAR13);
    if (VAR28 == NULL)
        VAR28 = VAR29;
    VAR8 = FUN13(VAR30, VAR28);
    if (VAR8)
    {
        VAR20 = FUN14(VAR8, 0x1fc00000LL, VAR26);
        FUN15(VAR8);
    }
    else
    {
        VAR20 = -1;
    }
    if ((VAR20 < 0 || VAR20 > VAR26) && !VAR5 && !FUN16())
    {
        FUN17(""
                     "",
                     VAR28);
        FUN5(1);
    }
    else
    {
        VAR17->VAR23.VAR24 = (VAR31)(VAR32)0xbfc00000;
    }
    if (VAR5)
    {
        VAR33.VAR3 = VAR3;
        VAR33.VAR5 = VAR5;
        VAR33.VAR6 = VAR6;
        VAR33.VAR7 = VAR7;
        VAR19->VAR22 = FUN18();
    }
    FUN19(VAR17);
    FUN20(VAR17);
    FUN21(VAR11, NULL, "", FUN22(), 0, 0x00010000);
    FUN12(FUN2(), 0x1fd00000, VAR11);
    if (VAR34[0])
        FUN23(0x3f8, VAR17->VAR35[4], 115200, VAR34[0], FUN22());
    if (VAR36[0].VAR37)
        FUN24(0x4200, VAR17->VAR35[2], &VAR36[0]);
}