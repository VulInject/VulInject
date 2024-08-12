static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    const char *VAR8 = VAR2->VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    VAR14 *VAR15;
    int VAR16;
    VAR17 *VAR18 = FUN2();
    VAR17 *VAR19 = FUN3(VAR17, 1);
    VAR17 *VAR20;
    void *VAR21 = NULL;
    hwaddr VAR22;
    hwaddr VAR23 = FUN4();
    uint32_t VAR24 = 0;
    long VAR25 = 0, VAR26 = 0;
    long VAR27, VAR28, VAR29;
    bool VAR30 = false;
    char *VAR31;
    VAR32 = true;
    VAR33 = FUN5(sizeof(*VAR33));
    FUN6(&VAR33->VAR34);
    VAR35 = VAR36;
    VAR22 = FUN7(&VAR21);
    if (VAR22 == -1)
    {
        FUN8("");
        FUN9(1);
    }
    if (VAR22 && (VAR22 < VAR23))
    {
        VAR33->VAR37 = VAR22;
    }
    else
    {
        VAR33->VAR37 = VAR23;
        if (FUN10())
        {
            VAR33->VAR38 = 1;
            VAR33->VAR37 = FUN11(VAR33->VAR37, 0x10000000);
        }
    }
    if (VAR33->VAR37 > VAR23)
    {
        fprintf(VAR39, "" VAR40 "", VAR33->VAR37);
        FUN9(1);
    }
    VAR28 = FUN11(VAR33->VAR37, 0x80000000);
    VAR33->VAR41 = VAR28 - VAR42;
    VAR33->VAR43 = VAR33->VAR41 - VAR44;
    VAR27 = VAR33->VAR43 - VAR45;
    VAR33->VAR46 = 18;
    while (VAR33->VAR46 <= 46)
    {
        if ((1ULL << (VAR33->VAR46 + 7)) >= VAR3)
        {
            break;
        }
        VAR33->VAR46++;
    }
    VAR33->VAR47 = FUN12(VAR48 * FUN13() / VAR49, VAR50);
    if (VAR4 == NULL)
    {
        VAR4 = FUN10() ? "" : "";
    }
    for (VAR16 = 0; VAR16 < VAR48; VAR16++)
    {
        VAR11 = FUN14(VAR4);
        if (VAR11 == NULL)
        {
            fprintf(VAR39, "");
            FUN9(1);
        }
        VAR13 = &VAR11->VAR13;
        FUN15(VAR13, VAR51);
        VAR13->VAR52 &= ~(1 << 6);
        if (FUN10())
        {
            FUN16(VAR11);
        }
        if (VAR11->VAR53)
        {
            if (FUN17(VAR11, VAR11->VAR53) < 0)
            {
                FUN9(1);
            }
        }
        FUN18(VAR33->VAR47, VAR11);
        FUN19(VAR54, VAR11);
    }
    VAR33->VAR55 = VAR3;
    FUN20(VAR19, NULL, "", VAR33->VAR55);
    FUN21(VAR18, 0, VAR19);
    if (VAR22 && VAR21)
    {
        VAR20 = FUN3(VAR17, 1);
        FUN22(VAR20, NULL, "", VAR22, VAR21);
        FUN23(VAR20);
        FUN21(VAR18, 0, VAR20);
    }
    VAR31 = FUN24(VAR56, "");
    VAR33->VAR57 = FUN25(VAR31, VAR33->VAR41, VAR28 - VAR33->VAR41);
    if (VAR33->VAR57 < 0)
    {
        FUN8("", VAR31);
        FUN9(1);
    }
    if (VAR33->VAR57 > VAR42)
    {
        FUN8("", VAR33->VAR57, VAR42);
        FUN9(1);
    }
    FUN26(VAR31);
    FUN27(VAR33);
    VAR33->VAR58 = FUN28();
    for (VAR16 = 0; VAR16 < VAR59; VAR16++)
    {
        if (VAR60[VAR16])
        {
            FUN29(VAR33->VAR58, VAR60[VAR16]);
        }
    }
    FUN30(VAR33);
    FUN31(VAR33, VAR61);
    FUN32();
    VAR15 = FUN33(VAR33, 0);
    for (VAR16 = 0; VAR16 < VAR62; VAR16++)
    {
        VAR63 *VAR64 = &VAR65[VAR16];
        if (!VAR64->VAR66)
        {
            VAR64->VAR66 = FUN34("");
        }
        if (strcmp(VAR64->VAR66, "") == 0)
        {
            FUN35(VAR33->VAR58, VAR64);
        }
        else
        {
            FUN36(&VAR65[VAR16], VAR15->VAR67, VAR64->VAR66, NULL);
        }
    }
    for (VAR16 = 0; VAR16 <= FUN37(VAR68); VAR16++)
    {
        FUN38(VAR33->VAR58);
    }
    if (FUN39(VAR15->VAR67))
    {
        VAR33->VAR69 = true;
    }
    if (FUN40(VAR33->VAR69))
    {
        FUN41(VAR15->VAR67, -1, "");
        if (VAR33->VAR69)
        {
            FUN42("");
            FUN42("");
        }
    }
    if (VAR33->VAR37 < (VAR70 << 20))
    {
        fprintf(VAR39, ""
                        "",
                VAR70);
        FUN9(1);
    }
    if (VAR5)
    {
        uint64_t VAR71 = 0;
        VAR25 = FUN43(VAR5, VAR72, NULL, NULL, &VAR71, NULL, 1, VAR73, 0);
        if (VAR25 == VAR74)
        {
            VAR25 = FUN43(VAR5, VAR72, NULL, NULL, &VAR71, NULL, 0, VAR73, 0);
            VAR30 = VAR25 > 0;
        }
        if (VAR25 < 0)
        {
            fprintf(VAR39, "", VAR5, FUN44(VAR25));
            FUN9(1);
        }
        if (VAR7)
        {
            VAR24 = (VAR75 + VAR25 + 0x1ffff) & ~0xffff;
            VAR26 = FUN25(VAR7, VAR24, VAR27 - VAR24);
            if (VAR26 < 0)
            {
                fprintf(VAR39, "", VAR7);
                FUN9(1);
            }
        }
        else
        {
            VAR24 = 0;
            VAR26 = 0;
        }
    }
    if (VAR76 == NULL)
    {
        VAR76 = VAR77;
    }
    VAR31 = FUN24(VAR56, VAR76);
    VAR29 = FUN25(VAR31, 0, VAR78);
    if (VAR29 < 0)
    {
        FUN8("", VAR31);
        FUN9(1);
    }
    FUN26(VAR31);
    VAR33->VAR79 = 0x100;
    FUN45(NULL, 0, &VAR80, VAR33);
    FUN46(NULL, "", -1, 1, &VAR81, VAR33);
    VAR33->VAR82 = FUN47(VAR24, VAR26, VAR25, VAR30, VAR8, VAR6, VAR33->VAR83);
    assert(VAR33->VAR82 != NULL);
}