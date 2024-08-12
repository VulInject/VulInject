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
    hwaddr VAR20;
    uint32_t VAR21 = 0;
    long VAR22 = 0, VAR23 = 0;
    long VAR24, VAR25, VAR26;
    bool VAR27 = false;
    char *VAR28;
    VAR29 = true;
    VAR30 = FUN4(sizeof(*VAR30));
    FUN5(&VAR30->VAR31);
    VAR32 = VAR33;
    VAR20 = FUN6("", VAR18);
    if (VAR20 == -1)
    {
        FUN7("");
        FUN8(1);
    }
    if (VAR20 && (VAR20 < VAR3))
    {
        VAR30->VAR34 = VAR20;
    }
    else
    {
        VAR30->VAR34 = VAR3;
        if (FUN9())
        {
            VAR30->VAR35 = 1;
            VAR30->VAR34 = FUN10(VAR30->VAR34, 0x10000000);
        }
    }
    VAR25 = FUN10(VAR30->VAR34, 0x80000000);
    VAR30->VAR36 = VAR25 - VAR37;
    VAR30->VAR38 = VAR30->VAR36 - VAR39;
    VAR24 = VAR30->VAR38 - VAR40;
    VAR30->VAR41 = 18;
    while (VAR30->VAR41 <= 46)
    {
        if ((1ULL << (VAR30->VAR41 + 7)) >= VAR3)
        {
            break;
        }
        VAR30->VAR41++;
    }
    VAR30->VAR42 = FUN11(VAR43 * FUN12() / VAR44, VAR45);
    VAR30->VAR46 = VAR47;
    if (VAR4 == NULL)
    {
        VAR4 = FUN9() ? "" : "";
    }
    for (VAR16 = 0; VAR16 < VAR43; VAR16++)
    {
        VAR11 = FUN13(VAR4);
        if (VAR11 == NULL)
        {
            fprintf(VAR48, "");
            FUN8(1);
        }
        VAR13 = &VAR11->VAR13;
        FUN14(VAR13, VAR49);
        VAR13->VAR50 &= ~(1 << 6);
        if (FUN9())
        {
            FUN15(VAR11);
        }
        FUN16(VAR30->VAR42, VAR11);
        FUN17(VAR51, VAR11);
    }
    VAR30->VAR52 = VAR3;
    if (VAR30->VAR52 > VAR20)
    {
        ram_addr_t VAR53 = VAR20;
        ram_addr_t VAR54 = VAR30->VAR52 - VAR20;
        FUN18(VAR19, NULL, "", VAR54);
        FUN19(VAR19);
        FUN20(VAR18, VAR53, VAR19);
    }
    VAR28 = FUN21(VAR55, "");
    VAR30->VAR56 = FUN22(VAR28, VAR30->VAR36, VAR25 - VAR30->VAR36);
    if (VAR30->VAR56 < 0)
    {
        FUN7("", VAR28);
        FUN8(1);
    }
    if (VAR30->VAR56 > VAR37)
    {
        FUN7("", VAR30->VAR56, VAR37);
        FUN8(1);
    }
    FUN23(VAR28);
    FUN24(VAR30);
    VAR30->VAR57 = FUN25();
    for (VAR16 = 0; VAR16 < VAR58; VAR16++)
    {
        if (VAR59[VAR16])
        {
            FUN26(VAR30->VAR57, VAR59[VAR16]);
        }
    }
    FUN27(VAR30);
    FUN28(VAR30, VAR60);
    FUN29();
    VAR15 = FUN30(VAR30, 0);
    for (VAR16 = 0; VAR16 < VAR61; VAR16++)
    {
        VAR62 *VAR63 = &VAR64[VAR16];
        if (!VAR63->VAR65)
        {
            VAR63->VAR65 = FUN31("");
        }
        if (strcmp(VAR63->VAR65, "") == 0)
        {
            FUN32(VAR30->VAR57, VAR63);
        }
        else
        {
            FUN33(&VAR64[VAR16], VAR15->VAR66, VAR63->VAR65, NULL);
        }
    }
    for (VAR16 = 0; VAR16 <= FUN34(VAR67); VAR16++)
    {
        FUN35(VAR30->VAR57);
    }
    if (FUN36(VAR15->VAR66))
    {
        VAR30->VAR68 = true;
    }
    if (FUN37(VAR30->VAR68))
    {
        FUN38(VAR15->VAR66, -1, "");
        if (VAR30->VAR68)
        {
            FUN39("");
            FUN39("");
        }
    }
    if (VAR30->VAR34 < (VAR69 << 20))
    {
        fprintf(VAR48, ""
                        "",
                VAR69);
        FUN8(1);
    }
    if (VAR5)
    {
        uint64_t VAR70 = 0;
        VAR22 = FUN40(VAR5, VAR71, NULL, NULL, &VAR70, NULL, 1, VAR72, 0);
        if (VAR22 < 0)
        {
            VAR22 = FUN40(VAR5, VAR71, NULL, NULL, &VAR70, NULL, 0, VAR72, 0);
            VAR27 = VAR22 > 0;
        }
        if (VAR22 < 0)
        {
            VAR22 = FUN22(VAR5, VAR73, VAR24 - VAR73);
        }
        if (VAR22 < 0)
        {
            fprintf(VAR48, "", VAR5);
            FUN8(1);
        }
        if (VAR7)
        {
            VAR21 = (VAR73 + VAR22 + 0x1ffff) & ~0xffff;
            VAR23 = FUN22(VAR7, VAR21, VAR24 - VAR21);
            if (VAR23 < 0)
            {
                fprintf(VAR48, "", VAR7);
                FUN8(1);
            }
        }
        else
        {
            VAR21 = 0;
            VAR23 = 0;
        }
    }
    if (VAR74 == NULL)
    {
        VAR74 = VAR75;
    }
    VAR28 = FUN21(VAR55, VAR74);
    VAR26 = FUN22(VAR28, 0, VAR76);
    if (VAR26 < 0)
    {
        FUN7("", VAR28);
        FUN8(1);
    }
    FUN23(VAR28);
    VAR30->VAR77 = 0x100;
    FUN41(NULL, 0, &VAR78, VAR30);
    FUN42(NULL, "", -1, 1, &VAR79, VAR30);
    VAR30->VAR80 = FUN43(VAR4, VAR21, VAR23, VAR22, VAR27, VAR8, VAR6, VAR30->VAR81);
    assert(VAR30->VAR80 != NULL);
}