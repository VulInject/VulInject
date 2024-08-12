static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8;
    int VAR9;
    VAR10 *VAR11 = FUN2();
    VAR10 *VAR12 = FUN3(VAR10, 1);
    target_phys_addr_t VAR13, VAR14;
    uint32_t VAR15;
    long VAR16, VAR17, VAR18;
    long VAR19 = 17;
    char *VAR20;
    VAR21 = FUN4(sizeof(*VAR21));
    FUN5(&VAR21->VAR22);
    VAR23 = VAR24;
    VAR13 = FUN6("", VAR11);
    if (VAR13 == -1)
    {
        FUN7("");
        FUN8(1);
    }
    if (VAR13 && (VAR13 < VAR1))
    {
        VAR14 = VAR13;
    }
    else
    {
        VAR14 = VAR1;
    }
    VAR21->VAR25 = FUN9(VAR14, 0x80000000) - VAR26;
    VAR21->VAR27 = VAR21->VAR25 - VAR28;
    if (VAR6 == NULL)
    {
        VAR6 = FUN10() ? "" : "";
    }
    for (VAR9 = 0; VAR9 < VAR29; VAR9++)
    {
        VAR8 = FUN11(VAR6);
        if (!VAR8)
        {
            fprintf(VAR30, "");
            FUN8(1);
        }
        FUN12(VAR8, VAR31);
        FUN13((VAR32 *)&VAR33, VAR8);
        VAR8->VAR34 = 0x60;
        VAR8->VAR35 = 0;
        VAR8->VAR36[3] = VAR8->VAR37;
    }
    VAR21->VAR38 = VAR1;
    if (VAR21->VAR38 > VAR13)
    {
        ram_addr_t VAR39 = VAR13;
        ram_addr_t VAR40 = VAR21->VAR38 - VAR13;
        FUN14(VAR12, NULL, "", VAR40);
        FUN15(VAR11, VAR39, VAR12);
    }
    VAR21->VAR41 = 1ULL << (VAR19 + 7);
    VAR21->VAR42 = FUN16(VAR21->VAR41, VAR21->VAR41);
    for (VAR8 = VAR43; VAR8 != NULL; VAR8 = VAR8->VAR44)
    {
        VAR8->VAR45 = VAR21->VAR42;
        VAR8->VAR46 = -1;
        VAR8->VAR47 = VAR21->VAR41 - 1;
        VAR8->VAR48[VAR49] = (unsigned long)VAR21->VAR42 | ((VAR19 + 7) - 18);
        VAR8->VAR48[VAR50] = 0;
        if (FUN10())
        {
            FUN17(VAR8);
        }
    }
    VAR20 = FUN18(VAR51, "");
    VAR21->VAR52 = FUN19(VAR20, VAR21->VAR27, VAR1 - VAR21->VAR27);
    if (VAR21->VAR52 < 0)
    {
        FUN7("", VAR20);
        FUN8(1);
    }
    FUN20(VAR20);
    VAR21->VAR53 = FUN21(VAR54);
    VAR21->VAR55 = 16;
    VAR21->VAR56 = FUN22();
    for (VAR9 = 0; VAR9 < VAR57; VAR9++)
    {
        if (VAR58[VAR9])
        {
            FUN23(VAR21->VAR56, VAR59 + VAR9, VAR58[VAR9]);
        }
    }
    FUN24(VAR21, "", VAR60, VAR61, VAR62, VAR63);
    for (VAR9 = 0; VAR9 < VAR64; VAR9++)
    {
        VAR65 *VAR66 = &VAR67[VAR9];
        if (!VAR66->VAR68)
        {
            VAR66->VAR68 = FUN25("");
        }
        if (strcmp(VAR66->VAR68, "") == 0)
        {
            FUN26(VAR21->VAR56, 0x1000 + VAR9, VAR66);
        }
        else
        {
            FUN27(&VAR67[VAR9], VAR66->VAR68, NULL);
        }
    }
    for (VAR9 = 0; VAR9 <= FUN28(VAR69); VAR9++)
    {
        FUN29(VAR21->VAR56, 0x2000 + VAR9);
    }
    if (VAR3)
    {
        uint64_t VAR70 = 0;
        VAR16 = FUN30(VAR3, VAR71, NULL, NULL, &VAR70, NULL, 1, VAR72, 0);
        if (VAR16 < 0)
        {
            VAR16 = FUN19(VAR3, VAR73, VAR1 - VAR73);
        }
        if (VAR16 < 0)
        {
            fprintf(VAR30, "", VAR3);
            FUN8(1);
        }
        if (VAR5)
        {
            VAR15 = VAR74;
            VAR17 = FUN19(VAR5, VAR15, VAR1 - VAR15);
            if (VAR17 < 0)
            {
                fprintf(VAR30, "", VAR5);
                FUN8(1);
            }
        }
        else
        {
            VAR15 = 0;
            VAR17 = 0;
        }
        VAR21->VAR75 = VAR73;
    }
    else
    {
        if (VAR14 < (VAR76 << 20))
        {
            fprintf(VAR30, ""
                            "",
                    VAR76);
            FUN8(1);
        }
        VAR20 = FUN18(VAR51, VAR77);
        VAR18 = FUN19(VAR20, 0, VAR78);
        if (VAR18 < 0)
        {
            FUN7("", VAR20);
            FUN8(1);
        }
        FUN20(VAR20);
        VAR21->VAR75 = 0x100;
        VAR15 = 0;
        VAR17 = 0;
        for (VAR8 = VAR43; VAR8 != NULL; VAR8 = VAR8->VAR44)
        {
            VAR8->VAR79 = 1;
        }
    }
    VAR21->VAR80 = FUN31(VAR6, VAR14, VAR15, VAR17, VAR2, VAR4, VAR19 + 7);
    assert(VAR21->VAR80 != NULL);
    FUN13(VAR81, VAR21);
}