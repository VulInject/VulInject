static void FUN1(void *VAR1, const char *VAR2, const char *VAR3, const char *VAR4, target_phys_addr_t VAR5)
{
    uint16_t VAR6;
    uint32_t VAR7[8];
    uint16_t VAR8[6];
    uint16_t VAR9;
    int VAR10, VAR11, VAR12 = 0, VAR13;
    uint32_t VAR14;
    uint8_t VAR15[8192], *VAR16, *VAR17;
    target_phys_addr_t VAR18, VAR19, VAR20, VAR21 = 0;
    VAR22 *VAR23;
    char *VAR24;
    VAR13 = (strlen(VAR4) + 16) & ~15;
    VAR23 = fopen(VAR2, "");
    if (!VAR23 || !(VAR11 = FUN2(VAR23)) || fread(VAR15, 1, FUN3(FUN4(VAR15), VAR11), VAR23) != FUN3(FUN4(VAR15), VAR11))
    {
        fprintf(VAR25, "", VAR2, strerror(VAR26));
        FUN5(1);
    }
    fprintf(VAR25, "", FUN6(VAR15 + 0x202));
    if (FUN6(VAR15 + 0x202) == 0x53726448)
        VAR6 = FUN7(VAR15 + 0x206);
    else
    {
        if (FUN8(VAR1, VAR23, VAR2, VAR3, VAR4, VAR15))
            return;
        VAR6 = 0;
    }
    if (VAR6 < 0x200 || !(VAR15[0x211] & 0x01))
    {
        VAR18 = 0x90000;
        VAR20 = 0x9a000 - VAR13;
        VAR19 = 0x10000;
    }
    else if (VAR6 < 0x202)
    {
        VAR18 = 0x90000;
        VAR20 = 0x9a000 - VAR13;
        VAR19 = 0x100000;
    }
    else
    {
        VAR18 = 0x10000;
        VAR20 = 0x20000;
        VAR19 = 0x100000;
    }
    fprintf(VAR25, "" VAR27 ""
                    "" VAR27 ""
                    "" VAR27 "",
            VAR18, VAR20, VAR19);
    if (VAR6 >= 0x203)
        VAR14 = FUN6(VAR15 + 0x22c);
    else
        VAR14 = 0x37ffffff;
    if (VAR14 >= VAR5 - VAR28)
        VAR14 = VAR5 - VAR28 - 1;
    FUN9("", VAR4, strlen(VAR4) + 1, VAR20);
    if (VAR6 >= 0x202)
    {
        FUN10(VAR15 + 0x228, VAR20);
    }
    else
    {
        FUN11(VAR15 + 0x20, 0xA33F);
        FUN11(VAR15 + 0x22, VAR20 - VAR18);
    }
    VAR24 = strstr(VAR4, "");
    if (VAR24)
    {
        unsigned int VAR29;
        VAR24 += 4;
        if (!FUN12(VAR24, "", 6))
        {
            VAR29 = 0xffff;
        }
        else if (!FUN12(VAR24, "", 3))
        {
            VAR29 = 0xfffe;
        }
        else if (!FUN12(VAR24, "", 3))
        {
            VAR29 = 0xfffd;
        }
        else
        {
            VAR29 = FUN13(VAR24, NULL, 0);
        }
        FUN11(VAR15 + 0x1fa, VAR29);
    }
    if (VAR6 >= 0x200)
        VAR15[0x210] = 0xB0;
    if (VAR6 >= 0x201)
    {
        VAR15[0x211] |= 0x80;
        FUN11(VAR15 + 0x224, VAR20 - VAR18 - 0x200);
    }
    if (VAR3)
    {
        if (VAR6 < 0x200)
        {
            fprintf(VAR25, "");
            FUN5(1);
        }
        VAR12 = FUN14(VAR3);
        VAR21 = (VAR14 - VAR12) & ~4095;
        FUN15(VAR3, VAR21);
        FUN10(VAR15 + 0x218, VAR21);
        FUN10(VAR15 + 0x21c, VAR12);
    }
    VAR10 = VAR15[0x1f1];
    if (VAR10 == 0)
        VAR10 = 4;
    VAR10 = (VAR10 + 1) * 512;
    VAR11 -= VAR10;
    VAR16 = FUN16(VAR10);
    VAR17 = FUN16(VAR11);
    FUN17(VAR23, 0, VAR30);
    fread(VAR16, 1, VAR10, VAR23);
    fread(VAR17, 1, VAR11, VAR23);
    fclose(VAR23);
    memcpy(VAR16, VAR15, FUN3(sizeof(VAR15), VAR10));
    FUN9("", VAR16, VAR10, VAR18);
    FUN9(VAR2, VAR17, VAR11, VAR19);
    FUN18(VAR16);
    FUN18(VAR17);
    VAR9 = VAR18 >> 4;
    VAR8[0] = VAR8[2] = VAR8[3] = VAR8[4] = VAR8[4] = VAR9;
    VAR8[1] = VAR9 + 0x20;
    memset(VAR7, 0, sizeof VAR7);
    VAR7[4] = VAR20 - VAR18 - 16;
    FUN19(VAR7, VAR8, 0);
}