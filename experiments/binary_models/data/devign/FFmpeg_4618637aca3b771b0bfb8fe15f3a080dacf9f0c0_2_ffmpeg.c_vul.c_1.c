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
    VAR11 = VAR5->VAR9;
    VAR17 = FUN5(VAR17, sizeof(*VAR17), &VAR18, VAR18 + 1);
    if (!VAR19)
    {
        if (VAR20)
        {
            VAR12 = FUN6(VAR20, VAR21, 1, VAR22[VAR21]->VAR23);
            VAR9 = VAR17[VAR18 - 1] = FUN7(VAR20);
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
    VAR11->VAR28 = VAR21;
    if (VAR29)
        VAR11->VAR30 = VAR29;
    if (VAR2->VAR24->VAR31 & VAR32)
    {
        VAR11->VAR31 |= VAR33;
        VAR22[VAR21]->VAR31 |= VAR33;
    }
    if (VAR19)
    {
        VAR5->VAR34 = 1;
    }
    else
    {
        VAR11->VAR12 = VAR12;
        FUN11(VAR22[VAR21], VAR11, VAR35 | VAR36, VAR9);
    }
    if (VAR37)
    {
        FUN12(&VAR5->VAR38, "", VAR37, 0);
        FUN13(&VAR37);
    }
    VAR39 = 0;
    FUN13(&VAR20);
    VAR19 = 0;
}