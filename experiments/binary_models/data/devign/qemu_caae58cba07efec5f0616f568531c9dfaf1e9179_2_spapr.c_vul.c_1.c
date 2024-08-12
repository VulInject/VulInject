static void FUN1(VAR1 *VAR2)
{
    ram_addr_t VAR3 = VAR2->VAR3;
    const char *VAR4 = VAR2->VAR4;
    const char *VAR5 = VAR2->VAR5;
    const char *VAR6 = VAR2->VAR6;
    const char *VAR7 = VAR2->VAR7;
    const char *VAR8 = VAR2->VAR8;
    VAR9 *VAR10;
    VAR11 *VAR12;
    VAR13 *VAR14;
    int VAR15;
    VAR16 *VAR17 = FUN2();
    VAR16 *VAR18 = FUN3(VAR16, 1);
    hwaddr VAR19;
    uint32_t VAR20 = 0;
    long VAR21 = 0, VAR22 = 0;
    long VAR23, VAR24, VAR25;
    char *VAR26;
    VAR27 = true;
    VAR28 = FUN4(sizeof(*VAR28));
    FUN5(&VAR28->VAR29);
    VAR30 = VAR31;
    VAR19 = FUN6("", VAR17);
    if (VAR19 == -1)
    {
        FUN7("");
        FUN8(1);
    }
    if (VAR19 && (VAR19 < VAR3))
    {
        VAR28->VAR32 = VAR19;
    }
    else
    {
        VAR28->VAR32 = VAR3;
        if (FUN9())
        {
            VAR28->VAR33 = 1;
            VAR28->VAR32 = FUN10(VAR28->VAR32, 0x10000000);
        }
    }
    VAR24 = FUN10(VAR28->VAR32, 0x80000000);
    VAR28->VAR34 = VAR24 - VAR35;
    VAR28->VAR36 = VAR28->VAR34 - VAR37;
    VAR23 = VAR28->VAR36 - VAR38;
    VAR28->VAR39 = 18;
    while (VAR28->VAR39 <= 46)
    {
        if ((1ULL << (VAR28->VAR39 + 7)) >= VAR3)
        {
            break;
        }
        VAR28->VAR39++;
    }
    if (VAR4 == NULL)
    {
        VAR4 = FUN9() ? "" : "";
    }
    for (VAR15 = 0; VAR15 < VAR40; VAR15++)
    {
        VAR10 = FUN11(VAR4);
        if (VAR10 == NULL)
        {
            fprintf(VAR41, "");
            FUN8(1);
        }
        VAR12 = &VAR10->VAR12;
        FUN12(VAR12, VAR42);
        VAR12->VAR43 = 0;
        if (FUN9())
        {
            FUN13(VAR10);
        }
        FUN14(VAR44, VAR10);
    }
    VAR28->VAR45 = VAR3;
    if (VAR28->VAR45 > VAR19)
    {
        ram_addr_t VAR46 = VAR19;
        ram_addr_t VAR47 = VAR28->VAR45 - VAR19;
        FUN15(VAR18, "", VAR47);
        FUN16(VAR18);
        FUN17(VAR17, VAR46, VAR18);
    }
    VAR26 = FUN18(VAR48, "");
    VAR28->VAR49 = FUN19(VAR26, VAR28->VAR34, VAR24 - VAR28->VAR34);
    if (VAR28->VAR49 < 0)
    {
        FUN7("", VAR26);
        FUN8(1);
    }
    if (VAR28->VAR49 > VAR35)
    {
        FUN7("", VAR28->VAR49, VAR35);
        FUN8(1);
    }
    FUN20(VAR26);
    VAR28->VAR50 = FUN21(VAR51);
    VAR28->VAR52 = VAR53;
    FUN22(VAR28);
    FUN23();
    VAR28->VAR54 = FUN24();
    for (VAR15 = 0; VAR15 < VAR55; VAR15++)
    {
        if (VAR56[VAR15])
        {
            FUN25(VAR28->VAR54, VAR56[VAR15]);
        }
    }
    FUN26(VAR28);
    FUN27();
    FUN28(VAR28, "", VAR57, VAR58, VAR59, VAR60, VAR61);
    VAR14 = FUN29(FUN30(&VAR28->VAR29));
    for (VAR15 = 0; VAR15 < VAR62; VAR15++)
    {
        VAR63 *VAR64 = &VAR65[VAR15];
        if (!VAR64->VAR66)
        {
            VAR64->VAR66 = FUN31("");
        }
        if (strcmp(VAR64->VAR66, "") == 0)
        {
            FUN32(VAR28->VAR54, VAR64);
        }
        else
        {
            FUN33(&VAR65[VAR15], VAR64->VAR66, NULL);
        }
    }
    for (VAR15 = 0; VAR15 <= FUN34(VAR67); VAR15++)
    {
        FUN35(VAR28->VAR54);
    }
    if (FUN36(VAR14->VAR68))
    {
        VAR28->VAR69 = true;
    }
    if (FUN37(VAR28->VAR69))
    {
        FUN38(VAR14->VAR68, -1, "");
        if (VAR28->VAR69)
        {
            FUN39("");
            FUN39("");
        }
    }
    if (VAR28->VAR32 < (VAR70 << 20))
    {
        fprintf(VAR41, ""
                        "",
                VAR70);
        FUN8(1);
    }
    if (VAR5)
    {
        uint64_t VAR71 = 0;
        VAR21 = FUN40(VAR5, VAR72, NULL, NULL, &VAR71, NULL, 1, VAR73, 0);
        if (VAR21 < 0)
        {
            VAR21 = FUN19(VAR5, VAR74, VAR23 - VAR74);
        }
        if (VAR21 < 0)
        {
            fprintf(VAR41, "", VAR5);
            FUN8(1);
        }
        if (VAR7)
        {
            VAR20 = (VAR74 + VAR21 + 0x1ffff) & ~0xffff;
            VAR22 = FUN19(VAR7, VAR20, VAR23 - VAR20);
            if (VAR22 < 0)
            {
                fprintf(VAR41, "", VAR7);
                FUN8(1);
            }
        }
        else
        {
            VAR20 = 0;
            VAR22 = 0;
        }
    }
    VAR26 = FUN18(VAR48, VAR75);
    VAR25 = FUN19(VAR26, 0, VAR76);
    if (VAR25 < 0)
    {
        FUN7("", VAR26);
        FUN8(1);
    }
    FUN20(VAR26);
    VAR28->VAR77 = 0x100;
    VAR28->VAR78 = FUN41(VAR4, VAR20, VAR22, VAR21, VAR8, VAR6, VAR28->VAR79);
    assert(VAR28->VAR78 != NULL);
}