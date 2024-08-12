static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    char *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    ram_addr_t VAR12;
    target_phys_addr_t VAR13[2], VAR14[2];
    long VAR15;
    target_ulong VAR16, VAR17;
    long VAR18, VAR19;
    int VAR20;
    int VAR21, VAR22;
    VAR23 *VAR24;
    VAR13[0] = FUN2(NULL, "", 0x04000000);
    VAR14[0] = 0x04000000;
    VAR13[1] = FUN2(NULL, "", 0x04000000);
    VAR14[1] = 0x04000000;
    VAR1 = 0x08000000;
    FUN3("", VAR25);
    VAR9 = FUN4(VAR13, VAR14, 33333333, &VAR11, VAR3 == NULL ? 0 : 1);
    FUN3("", VAR25);
    VAR21 = 0;
    VAR24 = FUN5(VAR26, 0, VAR21);
    if (VAR24)
    {
        VAR15 = FUN6(VAR24->VAR27);
        VAR22 = (VAR15 + 65535) >> 16;
        VAR12 = FUN2(NULL, "", VAR15);
        FUN3(""
               "",
               VAR21, VAR15, VAR12, -VAR15, FUN7(VAR24->VAR27), VAR22);
        FUN8((VAR28)(-VAR15), VAR12, VAR24->VAR27, 65536, VAR22, 1, 4, 0x0001, 0x22DA, 0x0000, 0x0000, 0x555, 0x2AA, 1);
        VAR21++;
    }
    else
    {
        FUN3("");
        if (VAR29 == NULL)
            VAR29 = VAR30;
        VAR12 = FUN2(NULL, "", VAR31);
        VAR7 = FUN9(VAR32, VAR29);
        if (VAR7)
        {
            VAR15 = FUN10(VAR7, FUN11(VAR12));
        }
        else
        {
            VAR15 = -1;
        }
        if (VAR15 < 0 || VAR15 > VAR31)
        {
            fprintf(VAR33, "", VAR29);
            FUN12(1);
        }
        VAR15 = (VAR15 + 0xfff) & ~0xfff;
        FUN13((VAR28)(-VAR15), VAR15, VAR12 | VAR34);
    }
    VAR24 = FUN5(VAR26, 0, VAR21);
    if (VAR24)
    {
        VAR15 = FUN6(VAR24->VAR27);
        VAR15 = 32 * 1024 * 1024;
        VAR22 = (VAR15 + 65535) >> 16;
        FUN3(""
               "" VAR35 "",
               VAR21, VAR15, VAR12, (VAR36)0xfc000000, FUN7(VAR24->VAR27));
        VAR12 = FUN2(NULL, "", VAR15);
        FUN8(0xfc000000, VAR12, VAR24->VAR27, 65536, VAR22, 1, 4, 0x0001, 0x22DA, 0x0000, 0x0000, 0x555, 0x2AA, 1);
        VAR21++;
    }
    FUN3("", VAR25);
    FUN14(0x50100000);
    VAR20 = (VAR3 != NULL);
    if (VAR20)
    {
        FUN3("", VAR25);
        VAR16 = VAR37;
        VAR18 = FUN15(VAR3, VAR16, VAR1 - VAR16);
        if (VAR18 < 0)
        {
            fprintf(VAR33, "", VAR3);
            FUN12(1);
        }
        if (VAR5)
        {
            VAR17 = VAR38;
            VAR19 = FUN15(VAR5, VAR17, VAR1 - VAR17);
            if (VAR19 < 0)
            {
                fprintf(VAR33, "", VAR5);
                FUN12(1);
            }
        }
        else
        {
            VAR17 = 0;
            VAR19 = 0;
        }
    }
    else
    {
        VAR16 = 0;
        VAR18 = 0;
        VAR17 = 0;
        VAR19 = 0;
    }
    FUN3("", VAR25);
}