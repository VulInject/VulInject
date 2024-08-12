static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5)
{
    VAR6 *VAR7, *VAR8;
    void *VAR9 = NULL;
    int VAR10, VAR11 = 0, VAR12 = 0, VAR13;
    int64_t VAR14;
    VAR15 *VAR16;
    if (!VAR2->VAR7 && !(VAR2->VAR7 = FUN2()))
        return FUN3(VAR17);
    if (!VAR2->VAR18 && !(VAR2->VAR18 = FUN2()))
        return FUN3(VAR17);
    VAR7 = VAR2->VAR7;
    VAR4->VAR19 = FUN4(VAR2->VAR19, VAR20, VAR2->VAR21->VAR22);
    FUN5(NULL);
    VAR11 = FUN6(VAR2->VAR21->VAR23, VAR7, VAR5, VAR4);
    FUN5("", VAR2->VAR24, VAR2->VAR21->VAR25);
    if (!*VAR5 || VAR11 < 0)
    {
        if (!VAR4->VAR26)
        {
            for (VAR10 = 0; VAR10 < VAR2->VAR27; VAR10++)
                FUN7(VAR2->VAR28[VAR10]->VAR29, NULL, 0);
            FUN8(VAR2->VAR28[VAR10]->VAR29, NULL);
        }
        return VAR11;
    }
    if (VAR2->VAR30 >= 0)
        VAR7->VAR30 = VAR2->VAR30;
    VAR14 = FUN9(VAR7);
    if (VAR14 != VAR31)
        VAR2->VAR32 = VAR2->VAR33 = FUN4(VAR7->VAR33 = VAR14, VAR2->VAR21->VAR22, VAR20);
    if (VAR34)
    {
        FUN10(NULL, VAR35, ""
                                  "" VAR36 "",
               VAR2->VAR21->VAR25, FUN11(VAR7->VAR33), FUN12(VAR7->VAR33, &VAR2->VAR21->VAR22), VAR14, FUN12(VAR14, &VAR2->VAR21->VAR22), VAR7->VAR37, VAR7->VAR38);
    }
    VAR4->VAR26 = 0;
    FUN13(VAR2);
    if (VAR2->VAR21->VAR39.VAR40)
        VAR7->VAR39 = VAR2->VAR21->VAR39;
    VAR13 = VAR2->VAR41 != VAR7->VAR42 || VAR2->VAR43 != VAR7->VAR44 || VAR2->VAR45 != VAR7->VAR46;
    if (VAR13)
    {
        FUN10(NULL, VAR35, "", VAR2->VAR24, VAR2->VAR21->VAR25, VAR2->VAR41, VAR2->VAR43, FUN14(VAR2->VAR45), VAR7->VAR42, VAR7->VAR44, FUN14(VAR7->VAR46));
        VAR2->VAR41 = VAR7->VAR42;
        VAR2->VAR43 = VAR7->VAR44;
        VAR2->VAR45 = VAR7->VAR46;
        for (VAR10 = 0; VAR10 < VAR47; VAR10++)
        {
            if (FUN15(VAR48[VAR10], VAR2) && VAR2->VAR49 && FUN16(VAR48[VAR10]) < 0)
            {
                FUN10(NULL, VAR50, "");
                FUN17(1);
            }
        }
    }
    VAR16 = FUN18(FUN19(), VAR7, "");
    for (VAR10 = 0; VAR10 < VAR2->VAR27; VAR10++)
    {
        if (!VAR16->VAR40)
            *VAR16 = VAR2->VAR21->VAR39;
        if (VAR10 < VAR2->VAR27 - 1)
        {
            VAR8 = VAR2->VAR18;
            VAR12 = FUN20(VAR8, VAR7);
            if (VAR12 < 0)
                break;
        }
        else
            VAR8 = VAR7;
        if (FUN21(VAR2->VAR28[VAR10]->VAR29, VAR8, VAR51) < 0)
        {
            FUN10(NULL, VAR50, "");
            FUN17(1);
        }
    }
    FUN22(VAR2->VAR18);
    FUN22(VAR7);
    FUN23(VAR9);
    return VAR12 < 0 ? VAR12 : VAR11;
}