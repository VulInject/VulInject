static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    char *VAR7;
    ppc4xx_bd_info_t VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    ram_addr_t VAR13, VAR14, VAR15;
    VAR16 *VAR17 = FUN2(2 * sizeof(*VAR17));
    target_phys_addr_t VAR18[2], VAR19[2];
    target_ulong VAR20;
    long VAR21;
    target_ulong VAR22, VAR23;
    long VAR24, VAR25;
    int VAR26;
    int VAR27, VAR28, VAR29;
    VAR30 *VAR31;
    FUN3(&VAR17[0], NULL, "", 0x08000000);
    VAR18[0] = 0;
    VAR19[0] = 0x08000000;
    FUN4(&VAR17[1], "", 0);
    VAR18[1] = 0x00000000;
    VAR19[1] = 0x00000000;
    VAR1 = 128 * 1024 * 1024;
    FUN5("", VAR32);
    VAR10 = FUN6(VAR17, VAR18, VAR19, 33333333, &VAR12, VAR3 == NULL ? 0 : 1);
    VAR20 = 512 * 1024;
    VAR13 = FUN7(NULL, "", VAR20);
    FUN5("", VAR32, VAR13);
    FUN8(0xFFF00000, VAR20, VAR13 | VAR33);
    FUN5("", VAR32);
    VAR27 = 0;
    VAR31 = FUN9(VAR34, 0, VAR27);
    if (VAR31)
    {
        VAR21 = FUN10(VAR31->VAR35);
        VAR14 = FUN7(NULL, "", VAR21);
        VAR28 = (VAR21 + 65535) >> 16;
        FUN5(""
               "",
               VAR27, VAR21, VAR14, -VAR21, FUN11(VAR31->VAR35), VAR28);
        FUN12((VAR36)(-VAR21), VAR14, VAR31->VAR35, 65536, VAR28, 1, 2, 0x0001, 0x22DA, 0x0000, 0x0000, 0x555, 0x2AA, 1);
        VAR27++;
    }
    else
    {
        FUN5("");
        VAR14 = FUN7(NULL, "", VAR37);
        if (VAR38 == NULL)
            VAR38 = VAR39;
        VAR7 = FUN13(VAR40, VAR38);
        if (VAR7)
        {
            VAR21 = FUN14(VAR7, FUN15(VAR14));
            FUN16(VAR7);
        }
        else
        {
            VAR21 = -1;
        }
        if (VAR21 < 0 || VAR21 > VAR37)
        {
            fprintf(VAR41, "", VAR38);
            FUN17(1);
        }
        VAR21 = (VAR21 + 0xfff) & ~0xfff;
        FUN8((VAR36)(-VAR21), VAR21, VAR14 | VAR42);
    }
    FUN5("", VAR32);
    FUN18(0xF0300000);
    FUN5("", VAR32);
    FUN19(NULL, 0xF0000000, 0, 8192, 8);
    VAR26 = (VAR3 != NULL);
    if (VAR26)
    {
        FUN5("", VAR32);
        memset(&VAR8, 0, sizeof(VAR8));
        VAR8.VAR43 = 0x00000000;
        VAR8.VAR44 = VAR1;
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
        VAR15 = FUN20(VAR10, &VAR8, 0x00000001);
        VAR10->VAR60[3] = VAR15;
        VAR22 = VAR61;
        VAR24 = FUN21(VAR3, VAR22, VAR1 - VAR22);
        if (VAR24 < 0)
        {
            fprintf(VAR41, "", VAR3);
            FUN17(1);
        }
        FUN5("" VAR62, VAR24, VAR22);
        if (VAR5)
        {
            VAR23 = VAR63;
            VAR25 = FUN21(VAR5, VAR23, VAR1 - VAR23);
            if (VAR25 < 0)
            {
                fprintf(VAR41, "", VAR5);
                FUN17(1);
            }
        }
        else
        {
            VAR23 = 0;
            VAR25 = 0;
        }
        VAR10->VAR60[4] = VAR23;
        VAR10->VAR60[5] = VAR25;
        if (VAR4 != NULL)
        {
            VAR29 = strlen(VAR4);
            VAR15 -= ((VAR29 + 255) & ~255);
            FUN22(VAR15, (void *)VAR4, VAR29 + 1);
            VAR10->VAR60[6] = VAR15;
            VAR10->VAR60[7] = VAR15 + VAR29;
        }
        else
        {
            VAR10->VAR60[6] = 0;
            VAR10->VAR60[7] = 0;
        }
        VAR10->VAR64 = VAR61;
    }
    else
    {
        VAR22 = 0;
        VAR24 = 0;
        VAR23 = 0;
        VAR25 = 0;
        VAR15 = 0;
    }
    FUN5("", VAR32);
    FUN5("", (unsigned long)VAR15);
}