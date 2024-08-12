static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR8[0];
    VAR9 *VAR10 = VAR7->VAR11;
    AVRational VAR12, VAR13;
    int VAR14, VAR15;
    int VAR16 = VAR17 | VAR4->VAR18 ? VAR19 : 0;
    if (!VAR4->VAR20)
        VAR4->VAR20 = FUN2(VAR2->VAR21);
    if (!VAR4->VAR22)
        VAR4->VAR22 = FUN2(VAR4->VAR20);
    if (FUN3(VAR23))
    {
        FUN4(VAR2, VAR24, "");
        VAR4->VAR25 = 1;
        VAR15 = FUN5(VAR26);
        goto VAR27;
    }
    if (FUN6(VAR23) != 0)
    {
        FUN4(VAR2, VAR24, "", FUN7());
        VAR15 = FUN5(VAR26);
        goto VAR27;
    }
    if (VAR2->VAR28 > 1 || VAR10->VAR29 != VAR30 || VAR10->VAR31 != VAR32)
    {
        FUN4(VAR2, VAR24, "");
        VAR15 = FUN5(VAR26);
        goto VAR27;
    }
    for (VAR14 = 0; VAR33[VAR14].VAR34 != VAR35; VAR14++)
    {
        if (VAR33[VAR14].VAR34 == VAR10->VAR34)
        {
            VAR4->VAR36 = VAR33[VAR14].VAR36;
            break;
        }
    }
    if (!VAR4->VAR36)
    {
        FUN4(VAR2, VAR24, "", FUN8(VAR10->VAR34));
        VAR15 = FUN5(VAR26);
        goto VAR27;
    }
    VAR12 = VAR7->VAR37.VAR38 ? VAR7->VAR37 : (VAR39){1, 1};
    VAR13 = FUN9(VAR12, (VAR39){VAR10->VAR40, VAR10->VAR41});
    if (VAR4->VAR42 && VAR4->VAR43)
    {
        if (FUN10(VAR13, (VAR39){VAR4->VAR42, VAR4->VAR43}) > 0)
        {
            VAR4->VAR44 = VAR4->VAR42;
            VAR4->VAR45 = FUN11(VAR4->VAR44, VAR13.VAR46, VAR13.VAR38);
        }
        else
        {
            VAR4->VAR45 = VAR4->VAR43;
            VAR4->VAR44 = FUN11(VAR4->VAR45, VAR13.VAR38, VAR13.VAR46);
        }
    }
    else
    {
        if (VAR12.VAR38 > VAR12.VAR46)
        {
            VAR4->VAR44 = VAR10->VAR40;
            VAR4->VAR45 = FUN11(VAR4->VAR44, VAR13.VAR46, VAR13.VAR38);
        }
        else
        {
            VAR4->VAR45 = VAR10->VAR41;
            VAR4->VAR44 = FUN11(VAR4->VAR45, VAR13.VAR38, VAR13.VAR46);
        }
        VAR4->VAR42 = VAR4->VAR44;
        VAR4->VAR43 = VAR4->VAR45;
    }
    VAR4->VAR47 = (VAR4->VAR42 - VAR4->VAR44) / 2;
    VAR4->VAR48 = (VAR4->VAR43 - VAR4->VAR45) / 2;
    FUN12(VAR4->VAR20, VAR4->VAR22);
    VAR4->VAR49 = FUN13(VAR4->VAR42, VAR4->VAR43, 24, VAR16);
    if (!VAR4->VAR49)
    {
        FUN4(VAR2, VAR24, "", FUN7());
        VAR15 = FUN5(VAR26);
        goto VAR27;
    }
    VAR4->VAR50 = FUN14(VAR10->VAR40, VAR10->VAR41, VAR4->VAR36, VAR4->VAR49);
    if (!VAR4->VAR50 || VAR4->VAR50->VAR51[0] < VAR10->VAR40)
    {
        FUN4(VAR2, VAR24, "", VAR10->VAR40, VAR10->VAR41);
        VAR15 = FUN5(VAR26);
        goto VAR27;
    }
    FUN4(VAR2, VAR52, "", VAR10->VAR40, VAR10->VAR41, FUN8(VAR10->VAR34), VAR12.VAR38, VAR12.VAR46, VAR4->VAR44, VAR4->VAR45);
    return 0;
VAR27:
    FUN15(VAR2);
    return VAR15;
}