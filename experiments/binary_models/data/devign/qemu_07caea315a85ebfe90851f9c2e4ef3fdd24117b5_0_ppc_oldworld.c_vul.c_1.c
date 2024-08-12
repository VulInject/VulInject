static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8 = NULL, *VAR9[VAR10];
    char *VAR11;
    VAR12 *VAR13, **VAR14;
    int VAR15, VAR16;
    ram_addr_t VAR17, VAR18, VAR19;
    uint32_t VAR20, VAR21;
    int32_t VAR22, VAR23;
    VAR24 *VAR25;
    VAR26 *VAR27;
    int VAR28, VAR29;
    int VAR30, VAR31, VAR32, VAR33;
    int VAR34, VAR35[2];
    uint16_t VAR36;
    VAR37 *VAR38[VAR39 * VAR40];
    void *VAR41;
    void *VAR42;
    VAR43 *VAR44;
    VAR15 = (VAR3 != NULL);
    if (VAR6 == NULL)
        VAR6 = "";
    for (VAR16 = 0; VAR16 < VAR45; VAR16++)
    {
        VAR8 = FUN2(VAR6);
        if (!VAR8)
        {
            fprintf(VAR46, "");
            FUN3(1);
        }
        FUN4(VAR8, 16600000UL);
        VAR8->VAR47 = VAR48;
        FUN5(&VAR49, VAR8);
        VAR9[VAR16] = VAR8;
    }
    if (VAR1 > (2047 << 20))
    {
        fprintf(VAR46, "", ((unsigned int)VAR1 / (1 << 20)));
        FUN3(1);
    }
    VAR17 = FUN6(VAR1);
    FUN7(0, VAR1, VAR17);
    VAR18 = FUN6(VAR50);
    if (VAR51 == NULL)
        VAR51 = VAR52;
    VAR11 = FUN8(VAR53, VAR51);
    FUN7(VAR54, VAR50, VAR18 | VAR55);
    if (VAR11)
    {
        VAR29 = FUN9(VAR11, 0, NULL, NULL, NULL, 1, VAR56, 0);
        FUN10(VAR11);
    }
    else
    {
        VAR29 = -1;
    }
    if (VAR29 < 0 || VAR29 > VAR50)
    {
        FUN11("", VAR51);
        FUN3(1);
    }
    VAR19 = FUN6(VAR57);
    VAR44 = FUN12(VAR19);
    VAR11 = FUN8(VAR53, VAR58);
    if (VAR11)
    {
        VAR28 = FUN13(VAR11, VAR44 + 8);
        FUN10(VAR11);
    }
    else
    {
        VAR28 = -1;
    }
    if (VAR28 < 0)
    {
        fprintf(VAR46, "", VAR58);
        VAR28 = 0;
    }
    else
    {
        VAR44[0] = '';
        VAR44[1] = '';
        VAR44[2] = '';
        VAR44[3] = '';
        FUN14((VAR59 *)(VAR44 + 4), VAR28);
        VAR28 += 8;
        VAR28 = (VAR28 + VAR60 - 1) & VAR61;
    }
    if (VAR15)
    {
        uint64_t VAR62 = 0;
        int VAR63;
        VAR63 = 1;
        VAR63 = 0;
        VAR20 = VAR64;
        VAR22 = FUN9(VAR3, VAR20, NULL, &VAR62, NULL, 1, VAR56, 0);
        if (VAR22 > 0 && VAR62 != VAR64)
        {
            VAR22 = FUN9(VAR3, (2 * VAR20) - VAR62, NULL, NULL, NULL, 1, VAR56, 0);
        }
        if (VAR22 < 0)
            VAR22 = FUN15(VAR3, VAR20, VAR1 - VAR20, VAR63, VAR60);
        if (VAR22 < 0)
            VAR22 = FUN16(VAR3, VAR20, VAR1 - VAR20);
        if (VAR22 < 0)
        {
            FUN11("", VAR3);
            FUN3(1);
        }
        if (VAR5)
        {
            VAR21 = VAR65;
            VAR23 = FUN16(VAR5, VAR21, VAR1 - VAR21);
            if (VAR23 < 0)
            {
                FUN11("", VAR5);
                FUN3(1);
            }
        }
        else
        {
            VAR21 = 0;
            VAR23 = 0;
        }
        VAR36 = '';
    }
    else
    {
        VAR20 = 0;
        VAR22 = 0;
        VAR21 = 0;
        VAR23 = 0;
        VAR36 = '';
        for (VAR16 = 0; VAR2[VAR16] != ''; VAR16++)
        {
            if (VAR2[VAR16] >= '' && VAR2[VAR16] <= '')
            {
                VAR36 = VAR2[VAR16];
                break;
            }
            if (VAR2[VAR16] >= '' && VAR2[VAR16] <= '')
            {
                VAR36 = VAR2[VAR16];
                break;
            }
        }
        if (VAR36 == '')
        {
            fprintf(VAR46, "");
            FUN3(1);
        }
    }
    VAR66 = 0x80000000;
    FUN17(0xfe000000, 0x00200000);
    VAR14 = FUN18(VAR45 * sizeof(VAR12 *));
    VAR14[0] = FUN18(VAR45 * sizeof(VAR12) * 1);
    for (VAR16 = 0; VAR16 < VAR45; VAR16++)
    {
        switch (FUN19(VAR8))
        {
        case VAR67:
            VAR14[VAR16] = VAR14[0] + (VAR16 * 1);
            VAR14[VAR16][0] = ((VAR12 *)VAR8->VAR68)[VAR69];
            break;
        default:
            FUN11("");
        }
    }
    if (FUN19(VAR8) != VAR67)
    {
        FUN11("");
    }
    VAR13 = FUN20(&VAR30, 1, VAR14);
    VAR25 = FUN21(0xfec00000, VAR13);
    FUN22(VAR25, VAR19, VAR28);
    VAR34 = FUN23(0x80013000, VAR13[0x0f], VAR13[0x10], VAR70[0], VAR70[1], VAR71, 4);
    for (VAR16 = 0; VAR16 < VAR72; VAR16++)
        FUN24(&VAR73[VAR16], "", NULL);
    if (FUN25(VAR74) >= VAR39)
    {
        fprintf(VAR46, "");
        FUN3(1);
    }
    VAR38[0] = FUN26(VAR74, 0, 0);
    VAR38[1] = FUN26(VAR74, 0, 1);
    VAR42 = FUN27(&VAR32);
    VAR35[0] = -1;
    VAR35[1] = FUN28(VAR38, VAR13[0x0D], VAR42, 0x16, VAR13[0x02]);
    VAR38[0] = FUN26(VAR74, 1, 0);
    VAR38[1] = FUN26(VAR74, 1, 1);
    VAR38[3] = VAR38[2] = NULL;
    FUN29(VAR25, VAR38, 0);
    FUN30(&VAR33, VAR13[0x12]);
    FUN31(&VAR75);
    FUN32(&VAR75);
    VAR27 = FUN33(&VAR31, 0x2000, 4);
    FUN34(VAR27, 0x2000);
    FUN35(VAR25, VAR76, 1, VAR30, VAR32, VAR33, VAR27, 2, VAR35, VAR34);
    if (VAR77)
    {
        FUN36(VAR25, -1);
    }
    if (VAR78 != 15 && VAR78 != 32 && VAR78 != 8)
        VAR78 = 15;
    VAR41 = FUN37(0, 0, VAR79, VAR79 + 2);
    FUN38(VAR41, VAR80, 1);
    FUN39(VAR41, VAR81, (VAR82)VAR1);
    FUN40(VAR41, VAR83, VAR84);
    FUN38(VAR41, VAR85, VAR20);
    FUN38(VAR41, VAR86, VAR22);
    if (VAR4)
    {
        FUN38(VAR41, VAR87, VAR88);
        FUN41(VAR88, VAR60, VAR4);
    }
    else
    {
        FUN38(VAR41, VAR87, 0);
    }
    FUN38(VAR41, VAR89, VAR21);
    FUN38(VAR41, VAR90, VAR23);
    FUN40(VAR41, VAR91, VAR36);
    FUN40(VAR41, VAR92, VAR93);
    FUN40(VAR41, VAR94, VAR95);
    FUN40(VAR41, VAR96, VAR78);
    FUN42(VAR97, VAR41);
}