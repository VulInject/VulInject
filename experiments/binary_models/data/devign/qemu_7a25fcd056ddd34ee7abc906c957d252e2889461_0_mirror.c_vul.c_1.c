static void FUN1(const char *VAR1, VAR2 *VAR3, int VAR4, VAR2 *VAR5, const char *VAR6, int64_t VAR7, uint32_t VAR8, int64_t VAR9, BlockMirrorBackingMode VAR10, BlockdevOnError VAR11, BlockdevOnError VAR12, bool VAR13, VAR14 *VAR15, void *VAR16, VAR17 **VAR18, const VAR19 *VAR20, bool VAR21, VAR2 *VAR22, bool VAR23, const char *VAR24)
{
    VAR25 *VAR26;
    VAR2 *VAR27;
    bool VAR28;
    bool VAR29;
    VAR17 *VAR30 = NULL;
    int VAR31;
    if (VAR8 == 0)
    {
        VAR8 = FUN2(VAR5);
    }
    assert((VAR8 & (VAR8 - 1)) == 0);
    if (VAR9 < 0)
    {
        FUN3(VAR18, "");
        return;
    }
    if (VAR9 == 0)
    {
        VAR9 = VAR32;
    }
    VAR27 = FUN4(&VAR33, VAR24, VAR34, VAR18);
    if (VAR27 == NULL)
    {
        return;
    }
    VAR27->VAR35 = VAR3->VAR35;
    FUN5(VAR27);
    FUN6(VAR3);
    FUN7(VAR27, VAR3, &VAR30);
    FUN8(VAR3);
    if (VAR30)
    {
        FUN9(VAR27);
        FUN10(VAR18, VAR30);
        return;
    }
    VAR26 = FUN11(VAR1, VAR20, VAR27, VAR36, VAR36 | VAR37 | VAR38 | VAR39, VAR7, VAR4, VAR15, VAR16, VAR18);
    FUN9(VAR27);
    if (!VAR26)
    {
        goto VAR40;
    }
    VAR26->VAR41 = VAR3;
    VAR26->VAR27 = VAR27;
    VAR29 = FUN12(VAR3, VAR5);
    VAR28 = (VAR10 != VAR42);
    VAR26->VAR5 = FUN13(VAR38 | VAR43 | (VAR28 ? VAR39 : 0), VAR37 | (VAR29 ? VAR36 | VAR38 | VAR39 : 0));
    VAR31 = FUN14(VAR26->VAR5, VAR5, VAR18);
    if (VAR31 < 0)
    {
        goto VAR40;
    }
    VAR26->VAR6 = FUN15(VAR6);
    VAR26->VAR11 = VAR11;
    VAR26->VAR12 = VAR12;
    VAR26->VAR21 = VAR21;
    VAR26->VAR10 = VAR10;
    VAR26->VAR22 = VAR22;
    VAR26->VAR8 = VAR8;
    VAR26->VAR9 = FUN16(VAR9, VAR8);
    VAR26->VAR13 = VAR13;
    if (VAR23)
    {
        VAR26->VAR44 = true;
    }
    VAR26->VAR45 = FUN17(VAR3, VAR8, NULL, VAR18);
    if (!VAR26->VAR45)
    {
        goto VAR40;
    }
    FUN18(&VAR26->VAR46, "", VAR5, 0, VAR47, &VAR48);
    if (VAR29)
    {
        VAR2 *VAR49;
        for (VAR49 = FUN19(VAR3); VAR49 != VAR5; VAR49 = FUN19(VAR49))
        {
            VAR31 = FUN18(&VAR26->VAR46, "", VAR49, 0, VAR37 | VAR38, VAR18);
            if (VAR31 < 0)
            {
                goto VAR40;
            }
        }
    }
    FUN20(VAR3, VAR26, VAR16);
    FUN21(&VAR26->VAR46);
    return;
VAR40:
    if (VAR26)
    {
        FUN22(VAR26->VAR6);
        FUN23(VAR26->VAR5);
        FUN24(&VAR26->VAR46);
    }
    FUN25(VAR27->VAR50, 0, VAR47, &VAR48);
    FUN26(VAR27, FUN19(VAR27), &VAR48);
}