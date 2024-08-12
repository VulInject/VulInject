static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    char *VAR7;
    VAR8 *VAR9;
    ram_addr_t VAR10;
    target_phys_addr_t VAR11[2], VAR12[2];
    long VAR13;
    target_ulong VAR14, VAR15;
    long VAR16, VAR17;
    int VAR18;
    int VAR19, VAR20;
    VAR21 *VAR22;
    VAR11[0] = FUN2(NULL, "", 0x04000000);
    VAR12[0] = 0x04000000;
    VAR11[1] = FUN2(NULL, "", 0x04000000);
    VAR12[1] = 0x04000000;
    VAR1 = 0x08000000;
    FUN3("", VAR23);
    FUN4(VAR11, VAR12, 33333333, &VAR9, VAR3 == NULL ? 0 : 1);
    FUN3("", VAR23);
    VAR19 = 0;
    VAR22 = FUN5(VAR24, 0, VAR19);
    if (VAR22)
    {
        VAR13 = FUN6(VAR22->VAR25);
        VAR20 = (VAR13 + 65535) >> 16;
        VAR10 = FUN2(NULL, "", VAR13);
        FUN3(""
               "",
               VAR19, VAR13, VAR10, -VAR13, FUN7(VAR22->VAR25), VAR20);
        FUN8((VAR26)(-VAR13), VAR10, VAR22->VAR25, 65536, VAR20, 1, 4, 0x0001, 0x22DA, 0x0000, 0x0000, 0x555, 0x2AA, 1);
        VAR19++;
    }
    else
    {
        FUN3("");
        if (VAR27 == NULL)
            VAR27 = VAR28;
        VAR10 = FUN2(NULL, "", VAR29);
        VAR7 = FUN9(VAR30, VAR27);
        if (VAR7)
        {
            VAR13 = FUN10(VAR7, FUN11(VAR10));
        }
        else
        {
            VAR13 = -1;
        }
        if (VAR13 < 0 || VAR13 > VAR29)
        {
            fprintf(VAR31, "", VAR27);
            FUN12(1);
        }
        VAR13 = (VAR13 + 0xfff) & ~0xfff;
        FUN13((VAR26)(-VAR13), VAR13, VAR10 | VAR32);
    }
    VAR22 = FUN5(VAR24, 0, VAR19);
    if (VAR22)
    {
        VAR13 = FUN6(VAR22->VAR25);
        VAR13 = 32 * 1024 * 1024;
        VAR20 = (VAR13 + 65535) >> 16;
        FUN3(""
               "" VAR33 "",
               VAR19, VAR13, VAR10, (VAR34)0xfc000000, FUN7(VAR22->VAR25));
        VAR10 = FUN2(NULL, "", VAR13);
        FUN8(0xfc000000, VAR10, VAR22->VAR25, 65536, VAR20, 1, 4, 0x0001, 0x22DA, 0x0000, 0x0000, 0x555, 0x2AA, 1);
        VAR19++;
    }
    FUN3("", VAR23);
    FUN14(0x50100000);
    VAR18 = (VAR3 != NULL);
    if (VAR18)
    {
        FUN3("", VAR23);
        VAR14 = VAR35;
        VAR16 = FUN15(VAR3, VAR14, VAR1 - VAR14);
        if (VAR16 < 0)
        {
            fprintf(VAR31, "", VAR3);
            FUN12(1);
        }
        if (VAR5)
        {
            VAR15 = VAR36;
            VAR17 = FUN15(VAR5, VAR15, VAR1 - VAR15);
            if (VAR17 < 0)
            {
                fprintf(VAR31, "", VAR5);
                FUN12(1);
            }
        }
        else
        {
            VAR15 = 0;
            VAR17 = 0;
        }
    }
    else
    {
        VAR14 = 0;
        VAR16 = 0;
        VAR15 = 0;
        VAR17 = 0;
    }
    FUN3("", VAR23);