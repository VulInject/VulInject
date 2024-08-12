static VAR1 *FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    int VAR7;
    VAR8 *VAR9;
    VAR1 *VAR10;
    VAR11 *VAR12;
    VAR10 = FUN2(VAR3, VAR5, VAR13, VAR6);
    VAR9 = VAR10->VAR9;
    VAR12 = VAR9->VAR14;
    VAR12->VAR15 = VAR13;
    if (!VAR10->VAR16)
    {
        char *VAR17 = NULL;
        FUN3(VAR18, VAR19, VAR12->VAR20, VAR5, VAR9);
        FUN3(VAR21, VAR22, VAR17, VAR5, VAR9);
        if (VAR17 && (VAR12->VAR17 = FUN4(VAR17)) == VAR23)
        {
            FUN5(NULL, VAR24, "", VAR17);
            FUN6(1);
        }
        FUN3(VAR25, VAR19, VAR12->VAR26, VAR5, VAR9);
        VAR10->VAR27 = 1.0;
        FUN3(VAR27, VAR28, VAR10->VAR27, VAR5, VAR9);
    }
    for (VAR7 = 0; VAR7 < VAR3->VAR29; VAR7++)
    {
        VAR30 *VAR31 = &VAR3->VAR32[VAR7];
        VAR33 *VAR34 = VAR35[VAR10->VAR6];
        if ((VAR31->VAR36 == -1 || (VAR34->VAR37 == VAR31->VAR38 && VAR34->VAR9->VAR39 == VAR31->VAR40)) && (VAR31->VAR41 == -1 || VAR10->VAR37 == VAR31->VAR41) && (VAR31->VAR42 == -1 || VAR10->VAR9->VAR39 == VAR31->VAR42))
        {
            if (VAR10->VAR43 < FUN7(VAR10->VAR44))
                VAR10->VAR44[VAR10->VAR43++] = VAR31->VAR36;
            else
                FUN5(NULL, VAR24, "", VAR10->VAR37, VAR10->VAR9->VAR39);
        }
    }
    return VAR10;
}