static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    const char *VAR8 = VAR2->VAR8;
    VAR9 *VAR10 = NULL;
    VAR11 *VAR12 = NULL;
    char *VAR13;
    VAR14 *VAR15, **VAR16;
    VAR17 *VAR18 = FUN2(VAR17, 1);
    int VAR19, VAR20;
    VAR17 *VAR21 = FUN2(VAR17, 1), *VAR22 = FUN2(VAR17, 1);
    hwaddr VAR23, VAR24, VAR25 = 0;
    long VAR26, VAR27;
    VAR28 *VAR29;
    VAR30 *VAR31;
    int VAR32;
    VAR17 *VAR33, *VAR34, *VAR35, *VAR36;
    VAR17 *VAR37 = FUN2(VAR17, 1);
    VAR17 *VAR38[3];
    int VAR39;
    VAR40 *VAR41[VAR42 * VAR43];
    void *VAR44;
    void *VAR45;
    int VAR46;
    VAR19 = (VAR5 != NULL);
    if (VAR4 == NULL)
        VAR4 = "";
    VAR4 = "";
    for (VAR20 = 0; VAR20 < VAR47; VAR20++)
    {
        VAR10 = FUN3(VAR4);
        if (VAR10 == NULL)
        {
            fprintf(VAR48, "");
            FUN4(1);
        }
        VAR12 = &VAR10->VAR12;
        FUN5(VAR12, 100UL * 1000UL * 1000UL);
        FUN6(VAR49, VAR10);
    }
    FUN7(VAR21, "", VAR3);
    FUN8(VAR21);
    FUN9(FUN10(), 0, VAR21);
    FUN7(VAR22, "", VAR50);
    FUN8(VAR22);
    if (VAR51 == NULL)
        VAR51 = VAR52;
    VAR13 = FUN11(VAR53, VAR51);
    FUN12(VAR22, true);
    FUN9(FUN10(), VAR54, VAR22);
    if (VAR13)
    {
        VAR32 = FUN13(VAR13, NULL, NULL, NULL, NULL, NULL, 1, VAR55, 0);
        FUN14(VAR13);
    }
    else
    {
        VAR32 = -1;
    }
    if (VAR32 < 0 || VAR32 > VAR50)
    {
        FUN15("", VAR51);
        FUN4(1);
    }
    if (VAR19)
    {
        uint64_t VAR56 = 0;
        int VAR57;
        VAR57 = 1;
        VAR57 = 0;
        VAR23 = VAR58;
        VAR26 = FUN13(VAR5, VAR59, NULL, NULL, &VAR56, NULL, 1, VAR55, 0);
        if (VAR26 < 0)
            VAR26 = FUN16(VAR5, VAR23, VAR3 - VAR23, VAR57, VAR60);
        if (VAR26 < 0)
            VAR26 = FUN17(VAR5, VAR23, VAR3 - VAR23);
        if (VAR26 < 0)
        {
            FUN15("", VAR5);
            FUN4(1);
        }
        if (VAR7)
        {
            VAR24 = FUN18(VAR23 + VAR26 + VAR61);
            VAR27 = FUN17(VAR7, VAR24, VAR3 - VAR24);
            if (VAR27 < 0)
            {
                FUN15("", VAR7);
                FUN4(1);
            }
            VAR25 = FUN18(VAR24 + VAR27);
        }
        else
        {
            VAR24 = 0;
            VAR27 = 0;
            VAR25 = FUN18(VAR23 + VAR26 + VAR61);
        }
        VAR39 = '';
    }
    else
    {
        VAR23 = 0;
        VAR26 = 0;
        VAR24 = 0;
        VAR27 = 0;
        VAR39 = '';
        for (VAR20 = 0; VAR8[VAR20] != ''; VAR20++)
        {
            if (VAR8[VAR20] >= '' && VAR8[VAR20] <= '')
            {
                VAR39 = VAR8[VAR20];
                break;
            }
        }
        if (VAR39 == '')
        {
            fprintf(VAR48, "");
            FUN4(1);
        }
    }
    FUN19(0xf2000000, 0x00800000);
    FUN20(VAR18, &VAR62, NULL, "", 0x1000);
    FUN9(FUN10(), 0xf8000000, VAR18);
    VAR16 = FUN21(VAR47 * sizeof(VAR14 *));
    VAR16[0] = FUN21(VAR47 * sizeof(VAR14) * VAR63);
    for (VAR20 = 0; VAR20 < VAR47; VAR20++)
    {
        switch (FUN22(VAR12))
        {
        case VAR64:
            VAR16[VAR20] = VAR16[0] + (VAR20 * VAR63);
            VAR16[VAR20][VAR65] = ((VAR14 *)VAR12->VAR66)[VAR67];
            VAR16[VAR20][VAR68] = ((VAR14 *)VAR12->VAR66)[VAR67];
            VAR16[VAR20][VAR69] = ((VAR14 *)VAR12->VAR66)[VAR70];
            VAR16[VAR20][VAR71] = NULL;
            VAR16[VAR20][VAR72] = ((VAR14 *)VAR12->VAR66)[VAR73];
            break;
        case VAR74:
            VAR16[VAR20] = VAR16[0] + (VAR20 * VAR63);
            VAR16[VAR20][VAR65] = ((VAR14 *)VAR12->VAR66)[VAR75];
            VAR16[VAR20][VAR68] = ((VAR14 *)VAR12->VAR66)[VAR75];
            VAR16[VAR20][VAR69] = ((VAR14 *)VAR12->VAR66)[VAR76];
            VAR16[VAR20][VAR71] = NULL;
            VAR16[VAR20][VAR72] = ((VAR14 *)VAR12->VAR66)[VAR77];
            break;
        default:
            FUN15("");
            FUN4(1);
        }
    }
    VAR15 = FUN23(&VAR33, VAR47, VAR16);
    if (FUN22(VAR12) == VAR74)
    {
        VAR29 = FUN24(VAR15, FUN10(), FUN25());
        VAR46 = VAR78;
    }
    else
    {
        VAR29 = FUN26(VAR15, FUN10(), FUN25());
        VAR46 = VAR79;
    }
    FUN27(VAR29);
    VAR36 = FUN28(0, VAR15[0x25], VAR15[0x24], VAR80[0], VAR80[1], VAR81, 4);
    FUN29(VAR37, "", VAR36, 0, FUN30(VAR36));
    for (VAR20 = 0; VAR20 < VAR82; VAR20++)
        FUN31(&VAR83[VAR20], "", NULL);
    FUN32(VAR41, VAR42);
    VAR45 = FUN33(&VAR34);
    VAR38[0] = NULL;
    VAR38[1] = FUN34(VAR41, VAR15[0x0d], VAR45, 0x16, VAR15[0x02]);
    VAR38[2] = FUN34(&VAR41[VAR43], VAR15[0x0e], VAR45, 0x1a, VAR15[0x02]);
    FUN35(&VAR35, VAR15[0x19]);
    FUN36(&VAR84);
    FUN37(&VAR84);
    FUN38(VAR29, VAR85, 0, VAR33, VAR34, VAR35, NULL, 3, VAR38, VAR37);
    if (FUN39(VAR46 == VAR78))
    {
        FUN40(VAR29, -1, "");
        if (VAR46 == VAR78)
        {
            FUN41("");
            FUN41("");
        }
    }
    if (VAR86 != 15 && VAR86 != 32 && VAR86 != 8)
        VAR86 = 15;
    VAR31 = FUN42(0x2000, 1);
    FUN43(VAR31, 0x2000);
    FUN44(VAR31, FUN10(), 0xFFF04000);
    VAR44 = FUN45(0, 0, VAR87, VAR87 + 2);
    FUN46(VAR44, VAR88, 1);
    FUN47(VAR44, VAR89, (VAR90)VAR3);
    FUN48(VAR44, VAR91, VAR46);
    FUN46(VAR44, VAR92, VAR23);
    FUN46(VAR44, VAR93, VAR26);
    if (VAR6)
    {
        FUN46(VAR44, VAR94, VAR25);
        FUN49("", VAR25, VAR60, VAR6);
    }
    else
    {
        FUN46(VAR44, VAR94, 0);
    }
    FUN46(VAR44, VAR95, VAR24);
    FUN46(VAR44, VAR96, VAR27);
    FUN48(VAR44, VAR97, VAR39);
    FUN48(VAR44, VAR98, VAR99);
    FUN48(VAR44, VAR100, VAR101);
    FUN48(VAR44, VAR102, VAR86);
    FUN46(VAR44, VAR103, FUN50());
    if (FUN50())
    {
        VAR104 *VAR105;
        FUN46(VAR44, VAR106, FUN51());
        VAR105 = FUN52(16);
        FUN53(VAR12, VAR105, 16);
        FUN54(VAR44, VAR107, VAR105, 16);
        FUN46(VAR44, VAR108, FUN55());
    }
    else
    {
        FUN46(VAR44, VAR106, FUN56());
    }
    FUN57(VAR109, VAR44);
}