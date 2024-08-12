static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR4->VAR6; VAR5++)
    {
        VAR7 *VAR8 = VAR4->VAR9[VAR5];
        VAR10 *VAR11 = VAR8->VAR12;
        VAR13 *VAR14 = FUN2(sizeof(*VAR14));
        char *VAR15 = NULL, *VAR16 = NULL, *VAR17 = NULL;
        if (!VAR14)
            FUN3(1);
        FUN4(VAR18, VAR19);
        VAR18[VAR19 - 1] = VAR14;
        VAR14->VAR8 = VAR8;
        VAR14->VAR20 = VAR21;
        VAR14->VAR22 = 1;
        VAR8->VAR22 = VAR23;
        VAR14->VAR24 = 1.0;
        FUN5(VAR24, VAR25, VAR14->VAR24, VAR4, VAR8);
        VAR14->VAR11 = FUN6(VAR2, VAR4, VAR8);
        VAR14->VAR26 = FUN7(VAR2->VAR27->VAR28, VAR14->VAR8->VAR12->VAR29, VAR4, VAR8, VAR14->VAR11);
        switch (VAR11->VAR30)
        {
        case VAR31:
            VAR14->VAR32 = VAR11->VAR33;
            VAR14->VAR34 = VAR11->VAR35;
            VAR14->VAR36 = VAR11->VAR37;
            FUN5(VAR38, VAR39, VAR15, VAR4, VAR8);
            if (VAR15 && FUN8(&VAR14->VAR15, VAR15) < 0)
            {
                FUN9(NULL, VAR40, "", VAR15);
                FUN3(1);
            }
            FUN5(VAR41, VAR39, VAR16, VAR4, VAR8);
            if (VAR16)
            {
                if (!strcmp(VAR16, ""))
                    VAR14->VAR42 = VAR43;
                else if (!strcmp(VAR16, ""))
                    VAR14->VAR42 = VAR44;
                else
                {
                    int VAR5;
                    for (VAR5 = 0; VAR41[VAR5].VAR45; VAR5++)
                    {
                        if (!strcmp(VAR41[VAR5].VAR45, VAR16))
                        {
                            VAR14->VAR42 = VAR41[VAR5].VAR46;
                            break;
                        }
                    }
                    if (!VAR14->VAR42)
                    {
                        FUN9(NULL, VAR47, "", VAR16);
                        FUN9(NULL, VAR47, "");
                        for (VAR5 = 0; VAR41[VAR5].VAR45; VAR5++)
                            FUN9(NULL, VAR47, "", VAR41[VAR5].VAR45);
                        FUN9(NULL, VAR47, "");
                        FUN3(1);
                    }
                }
            }
            FUN5(VAR48, VAR39, VAR17, VAR4, VAR8);
            if (VAR17)
            {
                VAR14->VAR17 = FUN10(VAR17);
                if (!VAR14->VAR17)
                    FUN3(1);
            }
            break;
        case VAR49:
            FUN11(VAR14);
            VAR14->VAR50 = VAR11->VAR51;
            VAR14->VAR52 = VAR11->VAR53;
            VAR14->VAR54 = VAR11->VAR55;
            VAR14->VAR56 = VAR11->VAR57;
            break;
        case VAR58:
        case VAR59:
        case VAR60:
        case VAR61:
            break;
        default:
            FUN12();
        }
    }