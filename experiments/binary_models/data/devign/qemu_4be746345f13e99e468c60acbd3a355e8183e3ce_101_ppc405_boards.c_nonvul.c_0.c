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
    VAR9 *VAR13 = FUN4(sizeof(*VAR13));
    hwaddr VAR14[2], VAR15[2];
    long VAR16;
    target_ulong VAR17, VAR18;
    long VAR19, VAR20;
    int VAR21;
    int VAR22, VAR23;
    VAR24 *VAR25;
    VAR3 = 0x08000000;
    FUN5(VAR13, NULL, "", VAR3);
    VAR14[0] = 0;
    VAR15[0] = 0x04000000;
    FUN6(&VAR12[0], NULL, "", VAR13, VAR14[0], VAR15[0]);
    VAR14[1] = 0x04000000;
    VAR15[1] = 0x04000000;
    FUN6(&VAR12[1], NULL, "", VAR13, VAR14[1], VAR15[1]);
    FUN7("", VAR26);
    FUN8(VAR10, VAR12, VAR14, VAR15, 33333333, &VAR8, VAR4 == NULL ? 0 : 1);
    FUN7("", VAR26);
    VAR22 = 0;
    VAR25 = FUN9(VAR27, 0, VAR22);
    if (VAR25)
    {
        VAR28 *VAR29 = FUN10(VAR25);
        VAR16 = FUN11(VAR29);
        VAR23 = (VAR16 + 65535) >> 16;
        FUN7(""
               "",
               VAR22, VAR16, -VAR16, FUN12(VAR29), VAR23);
        FUN13((VAR30)(-VAR16), NULL, "", VAR16, VAR29, 65536, VAR23, 1, 4, 0x0001, 0x22DA, 0x0000, 0x0000, 0x555, 0x2AA, 1);
        VAR22++;
    }
    else
    {
        FUN7("");
        if (VAR31 == NULL)
            VAR31 = VAR32;
        VAR11 = FUN14(VAR9, 1);
        FUN15(VAR11, NULL, "", VAR33, &VAR34);
        FUN16(VAR11);
        VAR6 = FUN17(VAR35, VAR31);
        if (VAR6)
        {
            VAR16 = FUN18(VAR6, FUN19(VAR11));
            FUN20(VAR6);
            if (VAR16 < 0 || VAR16 > VAR33)
            {
                FUN21("", VAR31);
                FUN22(1);
            }
            VAR16 = (VAR16 + 0xfff) & ~0xfff;
            FUN23(VAR10, (VAR30)(-VAR16), VAR11);
        }
        else if (!FUN24())
        {
            FUN21("", VAR31);
            FUN22(1);
        }
        FUN25(VAR11, true);
    }
    VAR25 = FUN9(VAR27, 0, VAR22);
    if (VAR25)
    {
        VAR28 *VAR29 = FUN10(VAR25);
        VAR16 = FUN11(VAR29);
        VAR16 = 32 * 1024 * 1024;
        VAR23 = (VAR16 + 65535) >> 16;
        FUN7(""
               "" VAR36 "",
               VAR22, VAR16, (VAR37)0xfc000000, FUN12(VAR29));
        FUN13(0xfc000000, NULL, "", VAR16, VAR29, 65536, VAR23, 1, 4, 0x0001, 0x22DA, 0x0000, 0x0000, 0x555, 0x2AA, 1);
        VAR22++;
    }
    FUN7("", VAR26);
    FUN26(VAR10, 0x50100000);
    VAR21 = (VAR4 != NULL);
    if (VAR21)
    {
        FUN7("", VAR26);
        VAR17 = VAR38;
        VAR19 = FUN27(VAR4, VAR17, VAR3 - VAR17);
        if (VAR19 < 0)
        {
            fprintf(VAR39, "", VAR4);
            FUN22(1);
        }
        if (VAR5)
        {
            VAR18 = VAR40;
            VAR20 = FUN27(VAR5, VAR18, VAR3 - VAR18);
            if (VAR20 < 0)
            {
                fprintf(VAR39, "", VAR5);
                FUN22(1);
            }
        }
        else
        {
            VAR18 = 0;
            VAR20 = 0;
        }
    }
    else
    {
        VAR17 = 0;
        VAR19 = 0;
        VAR18 = 0;
        VAR20 = 0;
    }
    FUN7("", VAR26);
}