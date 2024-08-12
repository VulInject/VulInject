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
    FUN3(VAR16, VAR17, VAR10->VAR18, VAR5, VAR9);
    FUN3(VAR19, VAR17, VAR10->VAR19, VAR5, VAR9);
    if (!VAR10->VAR20)
    {
        char *VAR21 = NULL;
        FUN3(VAR22, VAR23, VAR12->VAR24, VAR5, VAR9);
        FUN3(VAR25, VAR17, VAR21, VAR5, VAR9);
        if (VAR21 && (VAR12->VAR21 = FUN4(VAR21)) == VAR26)
        {
            FUN5(NULL, VAR27, "", VAR21);
            FUN6(1);
        }
        FUN3(VAR28, VAR23, VAR12->VAR29, VAR5, VAR9);
        FUN3(VAR30, VAR17, VAR10->VAR30, VAR5, VAR9);
        VAR10->VAR30 = FUN7(VAR10->VAR30);
        VAR10->VAR31 = FUN8(VAR3, VAR5, VAR10);
        if (!VAR10->VAR31)
            FUN6(1);
        for (VAR7 = 0; VAR7 < VAR3->VAR32; VAR7++)
        {
            VAR33 *VAR34 = &VAR3->VAR35[VAR7];
            if ((VAR34->VAR36 == -1 || VAR10->VAR37 == VAR34->VAR36) && (VAR34->VAR38 == -1 || VAR10->VAR9->VAR39 == VAR34->VAR38))
            {
                VAR40 *VAR41;
                if (VAR34->VAR42 == -1)
                {
                    VAR41 = NULL;
                }
                else if (VAR10->VAR6 < 0)
                {
                    FUN5(NULL, VAR27, "", VAR10->VAR37, VAR10->VAR9->VAR39);
                    continue;
                }
                else
                {
                    VAR41 = VAR43[VAR10->VAR6];
                }
                if (!VAR41 || (VAR41->VAR37 == VAR34->VAR44 && VAR41->VAR9->VAR39 == VAR34->VAR45))
                {
                    if (VAR10->VAR46 < FUN9(VAR10->VAR47))
                        VAR10->VAR47[VAR10->VAR46++] = VAR34->VAR42;
                    else
                        FUN5(NULL, VAR27, "", VAR10->VAR37, VAR10->VAR9->VAR39);
                }
            }
        }
    }
    if (VAR10->VAR20)
        FUN10(VAR3, VAR5, VAR10, VAR13);
    return VAR10;
}