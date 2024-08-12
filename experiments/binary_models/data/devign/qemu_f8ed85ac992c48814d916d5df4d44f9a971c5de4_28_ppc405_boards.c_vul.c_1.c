static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    char *VAR7;
    ppc4xx_bd_info_t VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    VAR13 *VAR15 = FUN2(VAR13, 1);
    ram_addr_t VAR16;
    VAR13 *VAR17 = FUN3(2 * sizeof(*VAR17));
    hwaddr VAR18[2], VAR19[2];
    target_ulong VAR20;
    long VAR21;
    target_ulong VAR22, VAR23;
    long VAR24, VAR25;
    int VAR26;
    int VAR27, VAR28, VAR29;
    VAR30 *VAR31;
    VAR13 *VAR32 = FUN4();
    FUN5(&VAR17[0], NULL, "", 0x08000000);
    VAR18[0] = 0;
    VAR19[0] = 0x08000000;
    FUN6(&VAR17[1], NULL, "", 0);
    VAR18[1] = 0x00000000;
    VAR19[1] = 0x00000000;
    VAR3 = 128 * 1024 * 1024;
    FUN7("", VAR33);
    VAR10 = FUN8(VAR32, VAR17, VAR18, VAR19, 33333333, &VAR12, VAR4 == NULL ? 0 : 1);
    VAR20 = 512 * 1024;
    FUN9(VAR15, NULL, "", VAR20, &VAR34);
    FUN10(VAR15);
    FUN11(VAR32, 0xFFF00000, VAR15);
    FUN7("", VAR33);
    VAR27 = 0;
    VAR31 = FUN12(VAR35, 0, VAR27);
    if (VAR31)
    {
        VAR36 *VAR37 = FUN13(VAR31);
        VAR21 = FUN14(VAR37);
        VAR28 = (VAR21 + 65535) >> 16;
        FUN7(""
               "",
               VAR27, VAR21, -VAR21, FUN15(VAR37), VAR28);
        FUN16((VAR38)(-VAR21), NULL, "", VAR21, VAR37, 65536, VAR28, 1, 2, 0x0001, 0x22DA, 0x0000, 0x0000, 0x555, 0x2AA, 1);
        VAR27++;
    }
    else
    {
        FUN7("");
        VAR14 = FUN2(VAR13, 1);
        FUN9(VAR14, NULL, "", VAR39, &VAR34);
        FUN10(VAR14);
        if (VAR40 == NULL)
            VAR40 = VAR41;
        VAR7 = FUN17(VAR42, VAR40);
        if (VAR7)
        {
            VAR21 = FUN18(VAR7, FUN19(VAR14));
            FUN20(VAR7);
            if (VAR21 < 0 || VAR21 > VAR39)
            {
                FUN21("", VAR40);
                FUN22(1);
            }
            VAR21 = (VAR21 + 0xfff) & ~0xfff;
            FUN11(VAR32, (VAR38)(-VAR21), VAR14);
        }
        else if (!FUN23() || VAR4 != NULL)
        {
            FUN21("", VAR40);
            FUN22(1);
        }
        else
        {
            VAR21 = -1;
        }
        FUN24(VAR14, true);
    }
    FUN7("", VAR33);
    FUN25(VAR32, 0xF0300000);
    FUN7("", VAR33);
    FUN26(NULL, 0xF0000000, 0, 8192, 1968, 8);
    VAR26 = (VAR4 != NULL);
    if (VAR26)
    {
        FUN7("", VAR33);
        memset(&VAR8, 0, sizeof(VAR8));
        VAR8.VAR43 = 0x00000000;
        VAR8.VAR44 = VAR3;
        VAR8.VAR45 = -VAR21;
        VAR8.VAR46 = -VAR21;
        VAR8.VAR47 = 0;
        VAR8.VAR48 = 0xFFF00000;
        VAR8.VAR49 = VAR20;
        VAR8.VAR50 = 0;
        VAR8.VAR51 = 133333333;
        VAR8.VAR52 = 33333333;
        VAR8.VAR53 = 115200;
        VAR8.VAR54[0] = '';
        VAR8.VAR54[1] = '';
        VAR8.VAR54[2] = '';
        VAR8.VAR54[3] = '';
        VAR8.VAR55[0] = '';
        VAR8.VAR55[1] = '';
        VAR8.VAR55[2] = '';
        VAR8.VAR55[3] = '';
        VAR8.VAR55[4] = '';
        VAR8.VAR56 = 133333333;
        VAR8.VAR57 = 33333333;
        VAR8.VAR58 = 33333333;
        VAR8.VAR59 = 33333333;
        VAR16 = FUN27(VAR10, &VAR8, 0x00000001);
        VAR10->VAR60[3] = VAR16;
        VAR22 = VAR61;
        VAR24 = FUN28(VAR4, VAR22, VAR3 - VAR22);
        if (VAR24 < 0)
        {
            fprintf(VAR62, "", VAR4);
            FUN22(1);
        }
        FUN7("" VAR63, VAR24, VAR22);
        if (VAR6)
        {
            VAR23 = VAR64;
            VAR25 = FUN28(VAR6, VAR23, VAR3 - VAR23);
            if (VAR25 < 0)
            {
                fprintf(VAR62, "", VAR6);
                FUN22(1);
            }
        }
        else
        {
            VAR23 = 0;
            VAR25 = 0;
        }
        VAR10->VAR60[4] = VAR23;
        VAR10->VAR60[5] = VAR25;
        if (VAR5 != NULL)
        {
            VAR29 = strlen(VAR5);
            VAR16 -= ((VAR29 + 255) & ~255);
            FUN29(VAR16, VAR5, VAR29 + 1);
            VAR10->VAR60[6] = VAR16;
            VAR10->VAR60[7] = VAR16 + VAR29;
        }
        else
        {
            VAR10->VAR60[6] = 0;
            VAR10->VAR60[7] = 0;
        }
        VAR10->VAR65 = VAR61;
    }
    else
    {
        VAR22 = 0;
        VAR24 = 0;
        VAR23 = 0;
        VAR25 = 0;
        VAR16 = 0;
    }
    FUN7("" VAR66 "", VAR16);
    FUN7("", VAR33);
}