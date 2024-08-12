static void FUN1(ram_addr_t VAR1, const char *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, const char *VAR6)
{
    VAR7 *VAR8;
    VAR9 *VAR10;
    int VAR11;
    VAR12 *VAR13 = FUN2();
    VAR12 *VAR14 = FUN3(VAR12, 1);
    target_phys_addr_t VAR15, VAR16;
    uint32_t VAR17 = 0;
    long VAR18 = 0, VAR19 = 0;
    long VAR20, VAR21, VAR22;
    long VAR23 = 17;
    char *VAR24;
    VAR25 = FUN4(sizeof(*VAR25));
    FUN5(&VAR25->VAR26);
    VAR27 = VAR28;
    VAR15 = FUN6("", VAR13);
    if (VAR15 == -1)
    {
        FUN7("");
        FUN8(1);
    }
    if (VAR15 && (VAR15 < VAR1))
    {
        VAR16 = VAR15;
    }
    else
    {
        VAR16 = VAR1;
    }
    VAR21 = FUN9(VAR16, 0x80000000);
    VAR25->VAR29 = VAR21 - VAR30;
    VAR25->VAR31 = VAR25->VAR29 - VAR32;
    VAR20 = VAR25->VAR31 - VAR33;
    if (VAR6 == NULL)
    {
        VAR6 = FUN10() ? "" : "";
    }
    for (VAR11 = 0; VAR11 < VAR34; VAR11++)
    {
        VAR8 = FUN11(VAR6);
        if (VAR8 == NULL)
        {
            fprintf(VAR35, "");
            FUN8(1);
        }
        VAR10 = &VAR8->VAR10;
        FUN12(VAR10, VAR36);
        FUN13(VAR37, VAR8);
        VAR10->VAR38 = 0x60;
        VAR10->VAR39 = 0;
        VAR10->VAR40[3] = VAR10->VAR41;
    }
    VAR25->VAR42 = VAR1;
    if (VAR25->VAR42 > VAR15)
    {
        ram_addr_t VAR43 = VAR15;
        ram_addr_t VAR44 = VAR25->VAR42 - VAR15;
        FUN14(VAR14, "", VAR44);
        FUN15(VAR14);
        FUN16(VAR13, VAR43, VAR14);
    }
    VAR25->VAR45 = 1ULL << (VAR23 + 7);
    VAR25->VAR46 = FUN17(VAR25->VAR45, VAR25->VAR45);
    for (VAR10 = VAR47; VAR10 != NULL; VAR10 = VAR10->VAR48)
    {
        VAR10->VAR49 = VAR25->VAR46;
        VAR10->VAR50 = -1;
        VAR10->VAR51 = VAR25->VAR45 - 1;
        VAR10->VAR52[VAR53] = (unsigned long)VAR25->VAR46 | ((VAR23 + 7) - 18);
        VAR10->VAR52[VAR54] = 0;
        if (FUN10())
        {
            FUN18(VAR10);
        }
    }
    VAR24 = FUN19(VAR55, "");
    VAR25->VAR56 = FUN20(VAR24, VAR25->VAR29, VAR21 - VAR25->VAR29);
    if (VAR25->VAR56 < 0)
    {
        FUN7("", VAR24);
        FUN8(1);
    }
    if (VAR25->VAR56 > VAR30)
    {
        FUN7("", VAR25->VAR56, VAR30);
        FUN8(1);
    }
    FUN21(VAR24);
    VAR25->VAR57 = FUN22(VAR58);
    VAR25->VAR59 = 16;
    VAR25->VAR60 = FUN23();
    for (VAR11 = 0; VAR11 < VAR61; VAR11++)
    {
        if (VAR62[VAR11])
        {
            FUN24(VAR25->VAR60, VAR62[VAR11]);
        }
    }
    FUN25(VAR25, "", VAR63, VAR64, VAR65, VAR66);
    for (VAR11 = 0; VAR11 < VAR67; VAR11++)
    {
        VAR68 *VAR69 = &VAR70[VAR11];
        if (!VAR69->VAR71)
        {
            VAR69->VAR71 = FUN26("");
        }
        if (strcmp(VAR69->VAR71, "") == 0)
        {
            FUN27(VAR25->VAR60, VAR69);
        }
        else
        {
            FUN28(&VAR70[VAR11], VAR69->VAR71, NULL);
        }
    }
    for (VAR11 = 0; VAR11 <= FUN29(VAR72); VAR11++)
    {
        FUN30(VAR25->VAR60);
    }
    if (VAR16 < (VAR73 << 20))
    {
        fprintf(VAR35, ""
                        "",
                VAR73);
        FUN8(1);
    }
    fprintf(VAR35, "");
    fprintf(VAR35, "", (unsigned long)VAR25->VAR29, (unsigned long)(VAR25->VAR29 + VAR25->VAR56 - 1));
    fprintf(VAR35, "", (unsigned long)VAR25->VAR31, (unsigned long)(VAR25->VAR31 + VAR32 - 1));
    if (VAR3)
    {
        uint64_t VAR74 = 0;
        VAR18 = FUN31(VAR3, VAR75, NULL, NULL, &VAR74, NULL, 1, VAR76, 0);
        if (VAR18 < 0)
        {
            VAR18 = FUN20(VAR3, VAR77, VAR20 - VAR77);
        }
        if (VAR18 < 0)
        {
            fprintf(VAR35, "", VAR3);
            FUN8(1);
        }
        fprintf(VAR35, "", VAR77, VAR77 + VAR18 - 1);
        if (VAR5)
        {
            VAR17 = (VAR77 + VAR18 + 0x1ffff) & ~0xffff;
            VAR19 = FUN20(VAR5, VAR17, VAR20 - VAR17);
            if (VAR19 < 0)
            {
                fprintf(VAR35, "", VAR5);
                FUN8(1);
            }
            fprintf(VAR35, "", (long)VAR17, (long)(VAR17 + VAR19 - 1));
        }
        else
        {
            VAR17 = 0;
            VAR19 = 0;
        }
    }
    VAR24 = FUN19(VAR55, VAR78);
    VAR22 = FUN20(VAR24, 0, VAR79);
    if (VAR22 < 0)
    {
        FUN7("", VAR24);
        FUN8(1);
    }
    FUN21(VAR24);
    fprintf(VAR35, "", 0, VAR22);
    fprintf(VAR35, "", VAR20, (unsigned long)VAR25->VAR31);
    VAR25->VAR80 = 0x100;
    for (VAR10 = VAR47; VAR10 != NULL; VAR10 = VAR10->VAR48)
    {
        VAR10->VAR81 = 1;
    }
    VAR25->VAR82 = FUN32(VAR6, VAR16, VAR17, VAR19, VAR18, VAR2, VAR4, VAR23 + 7);
    assert(VAR25->VAR82 != NULL);
    FUN13(VAR83, VAR25);