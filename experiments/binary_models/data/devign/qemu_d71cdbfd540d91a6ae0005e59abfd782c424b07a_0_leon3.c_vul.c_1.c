static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = FUN2();
    VAR10 *VAR12 = FUN3(VAR10, 1);
    VAR10 *VAR13 = FUN3(VAR10, 1);
    int VAR14;
    char *VAR15;
    VAR16 *VAR17 = NULL;
    int VAR18;
    int VAR19;
    VAR20 *VAR21;
    if (!VAR4)
    {
        VAR4 = "";
    }
    VAR7 = FUN4(VAR4);
    if (VAR7 == NULL)
    {
        fprintf(VAR22, "");
        FUN5(1);
    }
    VAR9 = &VAR7->VAR9;
    FUN6(VAR9, 0);
    VAR21 = FUN7(sizeof(VAR20));
    VAR21->VAR7 = VAR7;
    VAR21->VAR23 = 0x40000000 + VAR3;
    FUN8(VAR24, VAR21);
    FUN9(0x80000200, VAR9, &VAR17, VAR25, &VAR26);
    VAR9->VAR27 = VAR28;
    if ((VAR29)VAR3 > (1UL << 30))
    {
        fprintf(VAR22, "", (unsigned int)(VAR3 / (1024 * 1024)));
        FUN5(1);
    }
    FUN10(VAR12, NULL, "", VAR3, &VAR30);
    FUN11(VAR12);
    FUN12(VAR11, 0x40000000, VAR12);
    VAR19 = 8 * 1024 * 1024;
    FUN10(VAR13, NULL, "", VAR19, &VAR30);
    FUN11(VAR13);
    FUN13(VAR13, true);
    FUN12(VAR11, 0x00000000, VAR13);
    if (VAR31 == NULL)
    {
        VAR31 = VAR32;
    }
    VAR15 = FUN14(VAR33, VAR31);
    VAR18 = FUN15(VAR15);
    if (VAR18 > VAR19)
    {
        fprintf(VAR22, "", VAR15);
        FUN5(1);
    }
    if (VAR18 > 0)
    {
        VAR14 = FUN16(VAR15, 0x00000000, VAR18);
        if (VAR14 < 0 || VAR14 > VAR19)
        {
            fprintf(VAR22, "", VAR15);
            FUN5(1);
        }
    }
    else if (VAR5 == NULL && !FUN17())
    {
        fprintf(VAR22, "", VAR15);
        FUN5(1);
    }
    if (VAR5 != NULL)
    {
        long VAR34;
        uint64_t VAR35;
        VAR34 = FUN18(VAR5, NULL, NULL, &VAR35, NULL, NULL, 1, VAR36, 0);
        if (VAR34 < 0)
        {
            fprintf(VAR22, "", VAR5);
            FUN5(1);
        }
        if (VAR18 <= 0)
        {
            VAR9->VAR37 = VAR35;
            VAR9->VAR38 = VAR35 + 4;
            VAR21->VAR35 = VAR35;
        }
    }
    FUN19(0x80000300, 2, VAR39, VAR17, 6);
    if (VAR40[0])
    {
        FUN20(0x80000100, VAR40[0], VAR17[3]);
    }