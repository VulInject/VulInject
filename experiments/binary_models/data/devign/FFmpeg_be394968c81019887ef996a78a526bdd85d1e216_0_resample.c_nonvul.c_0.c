VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4;
    int VAR5 = VAR3->VAR6;
    int VAR7 = VAR3->VAR8;
    double VAR9 = FUN2(VAR5 * VAR3->VAR10 / VAR7, 1.0);
    int VAR11 = 1 << VAR3->VAR12;
    int VAR13;
    if (VAR3->VAR14 != VAR15 && VAR3->VAR14 != VAR16 && VAR3->VAR14 != VAR17 && VAR3->VAR14 != VAR18)
    {
        FUN3(VAR3, VAR19, ""
                                  "",
               FUN4(VAR3->VAR14));
        return NULL;
    }
    VAR4 = FUN5(sizeof(*VAR4));
    if (!VAR4)
        return NULL;
    VAR4->VAR3 = VAR3;
    VAR4->VAR12 = VAR3->VAR12;
    VAR4->VAR20 = VAR11 - 1;
    VAR4->VAR21 = VAR3->VAR22;
    VAR4->VAR9 = VAR9;
    VAR4->VAR23 = FUN6((int)FUN7(VAR3->VAR24 / VAR9), 1);
    VAR4->VAR25 = VAR3->VAR25;
    VAR4->VAR26 = VAR3->VAR26;
    switch (VAR3->VAR14)
    {
    case VAR18:
        VAR4->VAR27 = VAR28;
        VAR4->VAR29 = VAR30;
        VAR4->VAR31 = VAR32;
        break;
    case VAR17:
        VAR4->VAR27 = VAR33;
        VAR4->VAR29 = VAR34;
        VAR4->VAR31 = VAR35;
        break;
    case VAR16:
        VAR4->VAR27 = VAR36;
        VAR4->VAR29 = VAR37;
        VAR4->VAR31 = VAR38;
        break;
    case VAR15:
        VAR4->VAR27 = VAR39;
        VAR4->VAR29 = VAR40;
        VAR4->VAR31 = VAR41;
        break;
    }
    VAR13 = FUN8(VAR3->VAR14);
    VAR4->VAR42 = FUN5(VAR4->VAR23 * (VAR11 + 1) * VAR13);
    if (!VAR4->VAR42)
        goto VAR43;
    if (FUN9(VAR4) < 0)
        goto VAR43;
    memcpy(&VAR4->VAR42[(VAR4->VAR23 * VAR11 + 1) * VAR13], VAR4->VAR42, (VAR4->VAR23 - 1) * VAR13);
    memcpy(&VAR4->VAR42[VAR4->VAR23 * VAR11 * VAR13], &VAR4->VAR42[(VAR4->VAR23 - 1) * VAR13], VAR13);
    VAR4->VAR44 = 0;
    if (!FUN10(&VAR4->VAR45, &VAR4->VAR46, VAR5, VAR7 * (VAR47)VAR11, VAR48 / 2))
        goto VAR43;
    VAR4->VAR49 = VAR4->VAR46;
    VAR4->VAR50 = (VAR4->VAR23 - 1) / 2;
    VAR4->VAR51 = 0;
    VAR4->VAR52 = 0;
    VAR4->VAR53 = 0;
    VAR4->VAR54 = FUN11(VAR3->VAR55, VAR4->VAR50, VAR3->VAR14, "");
    if (!VAR4->VAR54)
        goto VAR43;
    VAR4->VAR54->VAR56 = VAR4->VAR50;
    VAR4->VAR57 = VAR4->VAR50;
    FUN3(VAR3, VAR58, "", FUN4(VAR3->VAR14), VAR3->VAR8, VAR3->VAR6);
    return VAR4;
VAR43:
    FUN12(&VAR4->VAR54);
    FUN13(VAR4->VAR42);
    FUN13(VAR4);
    return NULL;
}