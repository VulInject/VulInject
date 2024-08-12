static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    VAR5 *VAR6 = FUN3(VAR2);
    const char *VAR7 = VAR2->VAR7;
    const char *VAR8 = VAR2->VAR8;
    const char *VAR9 = VAR2->VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13;
    int VAR14;
    VAR15 *VAR16 = FUN4();
    VAR15 *VAR17 = FUN5(VAR15, 1);
    VAR15 *VAR18;
    void *VAR19 = NULL;
    hwaddr VAR20;
    hwaddr VAR21 = FUN6();
    uint32_t VAR22 = 0;
    long VAR23 = 0, VAR24 = 0;
    long VAR25, VAR26;
    bool VAR27 = false;
    char *VAR28;
    VAR29 = true;
    FUN7(&VAR4->VAR30);
    VAR31 = VAR32;
    VAR20 = FUN8(&VAR19);
    if (VAR20 == -1)
    {
        FUN9("");
        FUN10(1);
    }
    if (VAR20 && (VAR20 < VAR21))
    {
        VAR4->VAR33 = VAR20;
    }
    else
    {
        VAR4->VAR33 = VAR21;
        if (FUN11())
        {
            VAR4->VAR34 = 1;
            VAR4->VAR33 = FUN12(VAR4->VAR33, 0x10000000);
        }
    }
    if (VAR4->VAR33 > VAR21)
    {
        FUN9("" VAR35 "", VAR4->VAR33);
        FUN10(1);
    }
    VAR25 = FUN12(VAR4->VAR33, VAR36) - VAR37;
    VAR4->VAR38 = FUN13(VAR2->VAR39);
    FUN14(VAR4);
    VAR4->VAR40 = FUN15(VAR2, FUN16(VAR41 * FUN17(), VAR42), VAR43, &VAR44);
    if (VAR6->VAR45)
    {
        FUN18(VAR2, &VAR44);
    }
    if (VAR2->VAR46 == NULL)
    {
        VAR2->VAR46 = FUN11() ? "" : "";
    }
    for (VAR14 = 0; VAR14 < VAR47; VAR14++)
    {
        VAR11 = FUN19(VAR2->VAR46);
        if (VAR11 == NULL)
        {
            FUN9("");
            FUN10(1);
        }
        FUN20(VAR4, VAR11, &VAR44);
    }
    if (FUN11())
    {
        FUN21();
        FUN22();
    }
    FUN23(VAR17, NULL, "", VAR2->VAR48);
    FUN24(VAR16, 0, VAR17);
    if (VAR20 && VAR19)
    {
        VAR18 = FUN5(VAR15, 1);
        FUN25(VAR18, NULL, "", VAR20, VAR19);
        FUN26(VAR18);
        FUN24(VAR16, 0, VAR18);
    }
    if (VAR2->VAR48 < VAR2->VAR39)
    {
        ram_addr_t VAR49 = VAR2->VAR39 - VAR2->VAR48;
        if (VAR2->VAR50 > VAR51)
        {
            FUN9("" VAR52 "", VAR2->VAR50, VAR51);
            FUN10(1);
        }
        VAR4->VAR53.VAR54 = FUN27(VAR2->VAR48, VAR55);
        FUN28(&VAR4->VAR53.VAR56, FUN29(VAR4), "", VAR49);
        FUN24(VAR16, VAR4->VAR53.VAR54, &VAR4->VAR53.VAR56);
    }
    if (VAR6->VAR45)
    {
        FUN30(VAR4);
    }
    VAR28 = FUN31(VAR57, "");
    if (!VAR28)
    {
        FUN9("", "");
        FUN10(1);
    }
    VAR4->VAR58 = FUN32(VAR28);
    VAR4->VAR59 = FUN33(VAR4->VAR58);
    if (FUN34(VAR28, VAR4->VAR59, VAR4->VAR58) < 0)
    {
        FUN9("", VAR28);
        FUN10(1);
    }
    if (VAR4->VAR58 > VAR60)
    {
        FUN9("", (VAR61)VAR4->VAR58, VAR60);
        FUN10(1);
    }
    FUN35(VAR28);
    FUN36(VAR4);
    FUN37(VAR4);
    VAR4->VAR62 = FUN38();
    for (VAR14 = 0; VAR14 < VAR63; VAR14++)
    {
        if (VAR64[VAR14])
        {
            FUN39(VAR4->VAR62, VAR64[VAR14]);
        }
    }
    FUN40(VAR4);
    FUN41();
    VAR13 = FUN42(VAR4, 0);
    for (VAR14 = 0; VAR14 < VAR65; VAR14++)
    {
        VAR66 *VAR67 = &VAR68[VAR14];
        if (!VAR67->VAR69)
        {
            VAR67->VAR69 = FUN43("");
        }
        if (strcmp(VAR67->VAR69, "") == 0)
        {
            FUN44(VAR4->VAR62, VAR67);
        }
        else
        {
            FUN45(&VAR68[VAR14], VAR13->VAR70, VAR67->VAR69, NULL);
        }
    }
    for (VAR14 = 0; VAR14 <= FUN46(VAR71); VAR14++)
    {
        FUN47(VAR4->VAR62);
    }
    if (FUN48(VAR13->VAR70, &VAR44))
    {
        VAR4->VAR72 = true;
        VAR2->VAR73 |= FUN49() && !VAR2->VAR74;
    }
    if (VAR2->VAR73)
    {
        if (VAR6->VAR75)
        {
            FUN50(VAR13->VAR70, -1, "");
        }
        else
        {
            FUN50(VAR13->VAR70, -1, "");
        }
        if (VAR4->VAR72)
        {
            VAR76 *VAR77 = FUN51(-1);
            FUN52(VAR77, "");
            FUN52(VAR77, "");
        }
    }
    if (VAR4->VAR33 < (VAR78 << 20))
    {
        FUN9("", VAR78);
        FUN10(1);
    }
    if (VAR7)
    {
        uint64_t VAR79 = 0;
        VAR23 = FUN53(VAR7, VAR80, NULL, NULL, &VAR79, NULL, 1, VAR81, 0);
        if (VAR23 == VAR82)
        {
            VAR23 = FUN53(VAR7, VAR80, NULL, NULL, &VAR79, NULL, 0, VAR81, 0);
            VAR27 = VAR23 > 0;
        }
        if (VAR23 < 0)
        {
            FUN9("", VAR7, FUN54(VAR23));
            FUN10(1);
        }
        if (VAR9)
        {
            VAR22 = (VAR83 + VAR23 + 0x1ffff) & ~0xffff;
            VAR24 = FUN55(VAR9, VAR22, VAR25 - VAR22);
            if (VAR24 < 0)
            {
                FUN9("", VAR9);
                FUN10(1);
            }
        }
        else
        {
            VAR22 = 0;
            VAR24 = 0;
        }
    }
    if (VAR84 == NULL)
    {
        VAR84 = VAR85;
    }
    VAR28 = FUN31(VAR57, VAR84);
    if (!VAR28)
    {
        FUN9("", VAR84);
        FUN10(1);
    }
    VAR26 = FUN55(VAR28, 0, VAR86);
    if (VAR26 <= 0)
    {
        FUN9("", VAR28);
        FUN10(1);
    }
    FUN35(VAR28);
    FUN56(NULL, 0, &VAR87, VAR4);
    FUN57(NULL, "", -1, 1, &VAR88, VAR4);
    VAR4->VAR89 = FUN58(VAR22, VAR24, VAR23, VAR27, VAR8, VAR4->VAR90);
    assert(VAR4->VAR89 != NULL);
    FUN59(&VAR4->VAR91);
    FUN60(VAR92, VAR4);
    FUN61(VAR93, VAR4);
}