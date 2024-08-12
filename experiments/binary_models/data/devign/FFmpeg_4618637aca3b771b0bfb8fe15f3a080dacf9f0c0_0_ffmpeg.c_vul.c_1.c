static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5;
    VAR6 *VAR7;
    VAR8 *VAR9 = NULL;
    VAR10 *VAR11;
    enum CodecID VAR12;
    VAR5 = FUN2(VAR2, VAR2->VAR13 < VAR14 ? VAR15[VAR2->VAR13] : 0);
    if (!VAR5)
    {
        fprintf(VAR16, "");
        FUN3(1);
    }
    VAR7 = FUN4(VAR2, VAR3);
    VAR17 = FUN5(VAR17, sizeof(*VAR17), &VAR18, VAR18 + 1);
    if (!VAR19)
    {
        if (VAR20)
        {
            VAR12 = FUN6(VAR20, VAR21, 1, VAR22[VAR21]->VAR23);
            VAR9 = FUN7(VAR20);
            VAR17[VAR18 - 1] = VAR9;
        }
        else
        {
            VAR12 = FUN8(VAR2->VAR24, NULL, VAR2->VAR25, NULL, VAR21);
            VAR9 = FUN9(VAR12);
        }
    }
    FUN10(VAR5->VAR9, VAR9);
    VAR7->VAR26 = VAR27;
    VAR27 = NULL;
    FUN11(VAR5->VAR9, VAR28);
    VAR11 = VAR5->VAR9;
    VAR11->VAR29 = VAR21;
    if (VAR30)
        VAR11->VAR31 = VAR30;
    if (VAR2->VAR24->VAR32 & VAR33)
    {
        VAR11->VAR32 |= VAR34;
        VAR22[VAR21]->VAR32 |= VAR34;
    }
    if (VAR19)
    {
        VAR5->VAR35 = 1;
        VAR11->VAR36 = VAR37;
        VAR11->VAR38 = VAR39;
    }
    else
    {
        VAR11->VAR12 = VAR12;
        FUN12(VAR11, VAR22[VAR21], VAR40 | VAR41, VAR9);
        if (VAR42 > VAR43)
        {
            VAR11->VAR32 |= VAR44;
            VAR11->VAR45 = VAR5->VAR46 = VAR47 * VAR42;
        }
        VAR11->VAR36 = VAR37;
        VAR11->VAR48 = VAR49;
        VAR11->VAR38 = VAR39;
        VAR11->VAR50 = VAR50;
        if (FUN13(VAR50) != VAR37)
            VAR11->VAR50 = 0;
        FUN14(VAR5, VAR9);
        FUN15(VAR5, VAR9);
    }
    VAR11->VAR51 = (VAR52){1, VAR39};
    if (VAR53)
    {
        FUN16(&VAR5->VAR54, "", VAR53, 0);
        FUN17(&VAR53);
    }
    VAR55 = 0;
    FUN17(&VAR20);
    VAR19 = 0;
}