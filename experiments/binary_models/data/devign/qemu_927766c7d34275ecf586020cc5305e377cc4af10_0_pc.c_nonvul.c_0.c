static void FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, hwaddr VAR6)
{
    uint16_t VAR7;
    int VAR8, VAR9, VAR10 = 0, VAR11;
    uint32_t VAR12;
    uint8_t VAR13[8192], *VAR14, *VAR15, *VAR16;
    hwaddr VAR17, VAR18, VAR19, VAR20 = 0;
    VAR21 *VAR22;
    char *VAR23;
    VAR11 = (strlen(VAR5) + 16) & ~15;
    VAR22 = fopen(VAR3, "");
    if (!VAR22 || !(VAR9 = FUN2(VAR22)) || fread(VAR13, 1, FUN3(FUN4(VAR13), VAR9), VAR22) != FUN3(FUN4(VAR13), VAR9))
    {
        fprintf(VAR24, "", VAR3, strerror(VAR25));
        FUN5(1);
    }
    fprintf(VAR24, "", FUN6(VAR13 + 0x202));
    if (FUN6(VAR13 + 0x202) == 0x53726448)
    {
        VAR7 = FUN7(VAR13 + 0x206);
    }
    else
    {
        if (FUN8(VAR2, VAR22, VAR3, VAR4, VAR5, VAR9, VAR13))
        {
            return;
        }
        VAR7 = 0;
    }
    if (VAR7 < 0x200 || !(VAR13[0x211] & 0x01))
    {
        VAR17 = 0x90000;
        VAR19 = 0x9a000 - VAR11;
        VAR18 = 0x10000;
    }
    else if (VAR7 < 0x202)
    {
        VAR17 = 0x90000;
        VAR19 = 0x9a000 - VAR11;
        VAR18 = 0x100000;
    }
    else
    {
        VAR17 = 0x10000;
        VAR19 = 0x20000;
        VAR18 = 0x100000;
    }
    fprintf(VAR24, "" VAR26 ""
                    "" VAR26 ""
                    "" VAR26 "",
            VAR17, VAR19, VAR18);
    if (VAR7 >= 0x203)
    {
        VAR12 = FUN6(VAR13 + 0x22c);
    }
    else
    {
        VAR12 = 0x37ffffff;
    }
    if (VAR12 >= VAR6 - VAR27)
    {
        VAR12 = VAR6 - VAR27 - 1;
    }
    FUN9(VAR2, VAR28, VAR19);
    FUN9(VAR2, VAR29, strlen(VAR5) + 1);
    FUN10(VAR2, VAR30, VAR5);
    if (VAR7 >= 0x202)
    {
        FUN11(VAR13 + 0x228, VAR19);
    }
    else
    {
        FUN12(VAR13 + 0x20, 0xA33F);
        FUN12(VAR13 + 0x22, VAR19 - VAR17);
    }
    VAR23 = strstr(VAR5, "");
    if (VAR23)
    {
        unsigned int VAR31;
        VAR23 += 4;
        if (!FUN13(VAR23, "", 6))
        {
            VAR31 = 0xffff;
        }
        else if (!FUN13(VAR23, "", 3))
        {
            VAR31 = 0xfffe;
        }
        else if (!FUN13(VAR23, "", 3))
        {
            VAR31 = 0xfffd;
        }
        else
        {
            VAR31 = FUN14(VAR23, NULL, 0);
        }
        FUN12(VAR13 + 0x1fa, VAR31);
    }
    if (VAR7 >= 0x200)
    {
        VAR13[0x210] = 0xB0;
    }
    if (VAR7 >= 0x201)
    {
        VAR13[0x211] |= 0x80;
        FUN12(VAR13 + 0x224, VAR19 - VAR17 - 0x200);
    }
    if (VAR4)
    {
        if (VAR7 < 0x200)
        {
            fprintf(VAR24, "");
            FUN5(1);
        }
        VAR10 = FUN15(VAR4);
        if (VAR10 < 0)
        {
            fprintf(VAR24, "", VAR4, strerror(VAR25));
            FUN5(1);
        }
        VAR20 = (VAR12 - VAR10) & ~4095;
        VAR16 = FUN16(VAR10);
        FUN17(VAR4, VAR16);
        FUN9(VAR2, VAR32, VAR20);
        FUN9(VAR2, VAR33, VAR10);
        FUN18(VAR2, VAR34, VAR16, VAR10);
        FUN11(VAR13 + 0x218, VAR20);
        FUN11(VAR13 + 0x21c, VAR10);
    }
    VAR8 = VAR13[0x1f1];
    if (VAR8 == 0)
    {
        VAR8 = 4;
    }
    VAR8 = (VAR8 + 1) * 512;
    VAR9 -= VAR8;
    VAR14 = FUN16(VAR8);
    VAR15 = FUN16(VAR9);
    FUN19(VAR22, 0, VAR35);
    if (fread(VAR14, 1, VAR8, VAR22) != VAR8)
    {
        fprintf(VAR24, "");
        FUN5(1);
    }
    if (fread(VAR15, 1, VAR9, VAR22) != VAR9)
    {
        fprintf(VAR24, "");
        FUN5(1);
    }
    fclose(VAR22);
    memcpy(VAR14, VAR13, FUN3(sizeof(VAR13), VAR8));
    FUN9(VAR2, VAR36, VAR18);
    FUN9(VAR2, VAR37, VAR9);
    FUN18(VAR2, VAR38, VAR15, VAR9);
    FUN9(VAR2, VAR39, VAR17);
    FUN9(VAR2, VAR40, VAR8);
    FUN18(VAR2, VAR41, VAR14, VAR8);
    VAR42[VAR43].VAR44 = "";
    VAR42[VAR43].VAR45 = 0;
    VAR43++;
}