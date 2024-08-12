static void FUN1(const char *VAR1, VAR2 *VAR3, int VAR4, VAR2 *VAR5, const char *VAR6, int64_t VAR7, uint32_t VAR8, int64_t VAR9, BlockMirrorBackingMode VAR10, BlockdevOnError VAR11, BlockdevOnError VAR12, bool VAR13, VAR14 *VAR15, void *VAR16, const VAR17 *VAR18, bool VAR19, VAR2 *VAR20, bool VAR21, const char *VAR22, bool VAR23, VAR24 **VAR25)
{
    VAR26 *VAR27;
    VAR2 *VAR28;
    bool VAR29;
    bool VAR30;
    VAR24 *VAR31 = NULL;
    int VAR32;
    if (VAR8 == 0)
    {
        VAR8 = FUN2(VAR5);
    }
    assert(FUN3(VAR8));
    if (VAR9 < 0)
    {
        FUN4(VAR25, "");
        return;
    }
    if (VAR9 == 0)
    {
        VAR9 = VAR33;
    }
    VAR28 = FUN5(&VAR34, VAR22, VAR35, VAR25);
    if (VAR28 == NULL)
    {
        return;
    }
    if (!VAR22)
    {
        VAR28->VAR36 = true;
    }
    VAR28->VAR37 = VAR3->VAR37;
    FUN6(VAR28, FUN7(VAR3));
    FUN8(VAR28);
    FUN9(VAR3);
    FUN10(VAR28, VAR3, &VAR31);
    FUN11(VAR3);
    if (VAR31)
    {
        FUN12(VAR28);
        FUN13(VAR25, VAR31);
        return;
    }
    VAR27 = FUN14(VAR1, VAR18, VAR28, VAR38, VAR38 | VAR39 | VAR40 | VAR41, VAR7, VAR4, VAR15, VAR16, VAR25);
    if (!VAR27)
    {
        goto VAR42;
    }
    FUN12(VAR28);
    VAR27->VAR43 = VAR3;
    VAR27->VAR28 = VAR28;
    VAR30 = FUN15(VAR3, VAR5);
    VAR29 = (VAR10 != VAR44);
    VAR27->VAR5 = FUN16(VAR40 | VAR45 | (VAR29 ? VAR41 : 0), VAR39 | (VAR30 ? VAR38 | VAR40 | VAR41 : 0));
    VAR32 = FUN17(VAR27->VAR5, VAR5, VAR25);
    if (VAR32 < 0)
    {
        goto VAR42;
    }
    if (VAR23)
    {
        FUN18(VAR27->VAR5);
    }
    VAR27->VAR6 = FUN19(VAR6);
    VAR27->VAR11 = VAR11;
    VAR27->VAR12 = VAR12;
    VAR27->VAR19 = VAR19;
    VAR27->VAR10 = VAR10;
    VAR27->VAR20 = VAR20;
    VAR27->VAR8 = VAR8;
    VAR27->VAR9 = FUN20(VAR9, VAR8);
    VAR27->VAR13 = VAR13;
    if (VAR21)
    {
        VAR27->VAR46 = true;
    }
    VAR27->VAR47 = FUN21(VAR3, VAR8, NULL, VAR25);
    if (!VAR27->VAR47)
    {
        goto VAR42;
    }
    FUN22(&VAR27->VAR48, "", VAR5, 0, VAR49, &VAR50);
    if (VAR30)
    {
        VAR2 *VAR51;
        for (VAR51 = FUN23(VAR3); VAR51 != VAR5; VAR51 = FUN23(VAR51))
        {
            VAR32 = FUN22(&VAR27->VAR48, "", VAR51, 0, VAR39 | VAR40, VAR25);
            if (VAR32 < 0)
            {
                goto VAR42;
            }
        }
    }
    FUN24(VAR3, VAR27, VAR16);
    FUN25(&VAR27->VAR48);
    return;
VAR42:
    if (VAR27)
    {
        FUN8(VAR28);
        FUN26(VAR27->VAR6);
        FUN27(VAR27->VAR5);
        FUN28(&VAR27->VAR48);
    }
    FUN29(VAR28->VAR52, 0, VAR49, &VAR50);
    FUN30(VAR28, FUN23(VAR28), &VAR50);
    FUN12(VAR28);
}