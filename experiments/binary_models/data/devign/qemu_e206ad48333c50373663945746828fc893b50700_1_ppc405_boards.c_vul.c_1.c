static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    char *VAR6;
    VAR7 *VAR8;
    VAR9 *VAR10 = FUN2();
    VAR9 *VAR11;
    VAR9 *VAR12 = FUN3(2 * sizeof(*VAR12));
    hwaddr VAR13[2], VAR14[2];
    long VAR15;
    target_ulong VAR16, VAR17;
    long VAR18, VAR19;
    int VAR20;
    int VAR21, VAR22;
    VAR23 *VAR24;
    FUN4(&VAR12[0], NULL, "", 0x04000000);
    VAR13[0] = 0;
    VAR14[0] = 0x04000000;
    FUN4(&VAR12[1], NULL, "", 0x04000000);
    VAR13[1] = 0x04000000;
    VAR14[1] = 0x04000000;
    VAR3 = 0x08000000;
    FUN5("", VAR25);
    FUN6(VAR10, VAR12, VAR13, VAR14, 33333333, &VAR8, VAR4 == NULL ? 0 : 1);
    FUN5("", VAR25);
    VAR21 = 0;
    VAR24 = FUN7(VAR26, 0, VAR21);
    if (VAR24)
    {
        VAR15 = FUN8(VAR24->VAR27);
        VAR22 = (VAR15 + 65535) >> 16;
        FUN5(""
               "",
               VAR21, VAR15, -VAR15, FUN9(VAR24->VAR27), VAR22);
        FUN10((VAR28)(-VAR15), NULL, "", VAR15, VAR24->VAR27, 65536, VAR22, 1, 4, 0x0001, 0x22DA, 0x0000, 0x0000, 0x555, 0x2AA, 1);
        VAR21++;
    }
    else
    {
        FUN5("");
        if (VAR29 == NULL)
            VAR29 = VAR30;
        VAR11 = FUN11(VAR9, 1);
        FUN4(VAR11, NULL, "", VAR31);
        VAR6 = FUN12(VAR32, VAR29);
        if (VAR6)
        {
            VAR15 = FUN13(VAR6, FUN14(VAR11));
            FUN15(VAR6);
            if (VAR15 < 0 || VAR15 > VAR31)
            {
                FUN16("", VAR29);
                FUN17(1);
            }
            VAR15 = (VAR15 + 0xfff) & ~0xfff;
            FUN18(VAR10, (VAR28)(-VAR15), VAR11);
        }
        else if (!FUN19())
        {
            FUN16("", VAR29);
            FUN17(1);
        }
        FUN20(VAR11, true);
    }
    VAR24 = FUN7(VAR26, 0, VAR21);
    if (VAR24)
    {
        VAR15 = FUN8(VAR24->VAR27);
        VAR15 = 32 * 1024 * 1024;
        VAR22 = (VAR15 + 65535) >> 16;
        FUN5(""
               "" VAR33 "",
               VAR21, VAR15, (VAR34)0xfc000000, FUN9(VAR24->VAR27));
        FUN10(0xfc000000, NULL, "", VAR15, VAR24->VAR27, 65536, VAR22, 1, 4, 0x0001, 0x22DA, 0x0000, 0x0000, 0x555, 0x2AA, 1);
        VAR21++;
    }
    FUN5("", VAR25);
    FUN21(VAR10, 0x50100000);
    VAR20 = (VAR4 != NULL);
    if (VAR20)
    {
        FUN5("", VAR25);
        VAR16 = VAR35;
        VAR18 = FUN22(VAR4, VAR16, VAR3 - VAR16);
        if (VAR18 < 0)
        {
            fprintf(VAR36, "", VAR4);
            FUN17(1);
        }
        if (VAR5)
        {
            VAR17 = VAR37;
            VAR19 = FUN22(VAR5, VAR17, VAR3 - VAR17);
            if (VAR19 < 0)
            {
                fprintf(VAR36, "", VAR5);
                FUN17(1);
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
    FUN5("", VAR25);
}