static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    int VAR10 = -1;
    unsigned char VAR11[VAR12];
    unsigned int VAR13;
    unsigned int VAR14;
    int VAR15;
    while (FUN2(VAR9, VAR11, VAR12) == VAR12)
    {
        VAR13 = FUN3(&VAR11[0]);
        VAR14 = FUN3(&VAR11[4]);
        VAR15 = VAR14 & 0x01;
        if ((VAR13 == VAR16) || (VAR13 == VAR17) || (VAR13 == VAR18) || (VAR13 == VAR19))
        {
            VAR10 = FUN4(VAR9, VAR4, VAR14);
            if (VAR10 < 0)
                return FUN5(VAR20);
            switch (VAR13)
            {
            case VAR16:
            case VAR17:
            case VAR18:
                if (VAR6->VAR21 == -1)
                {
                    VAR22 *VAR23 = FUN6(VAR2, NULL);
                    if (!VAR23)
                        return FUN5(VAR24);
                    VAR6->VAR21 = VAR23->VAR25;
                    if (!VAR6->VAR26)
                        VAR6->VAR26 = 22050;
                    if (!VAR6->VAR27)
                        VAR6->VAR27 = 1;
                    if (!VAR6->VAR28)
                        VAR6->VAR28 = 8;
                    VAR23->VAR29->VAR26 = VAR6->VAR26;
                    VAR23->VAR29->VAR30 = VAR6->VAR28;
                    VAR23->VAR29->VAR27 = VAR6->VAR27;
                    VAR23->VAR29->VAR31 = VAR32;
                    FUN7(VAR23, 64, 1, VAR23->VAR29->VAR26);
                    switch (VAR13)
                    {
                    case VAR16:
                        if (VAR6->VAR28 == 16)
                            VAR23->VAR29->VAR33 = VAR34;
                        else
                            VAR23->VAR29->VAR33 = VAR35;
                        break;
                    case VAR17:
                        VAR23->VAR29->VAR33 = VAR36;
                        break;
                    case VAR18:
                        VAR23->VAR29->VAR33 = VAR37;
                        VAR23->VAR29->VAR38 = 2;
                        VAR23->VAR29->VAR39 = FUN8(2 + VAR40);
                        if (!VAR23->VAR29->VAR39)
                            return FUN5(VAR24);
                        FUN9(VAR23->VAR29->VAR39, VAR6->VAR41);
                        break;
                    }
                }
                VAR4->VAR42 = VAR6->VAR21;
                switch (VAR13)
                {
                case VAR17:
                    VAR4->VAR43 = FUN10(VAR4->VAR44) / VAR6->VAR27;
                    break;
                case VAR18:
                    VAR4->VAR43 = (VAR14 * 2) / VAR6->VAR27;
                    break;
                }
                break;
            case VAR19:
                VAR4->VAR42 = VAR6->VAR45;
                VAR4->VAR43 = 1;
                break;
            }
            if (VAR15)
                FUN11(VAR9, 1);
            return VAR10;
        }
        else
        {
            switch (VAR13)
            {
            case VAR46:
                break;
            default:
                FUN12(VAR2, VAR47, "", VAR13);
            }
            FUN11(VAR9, VAR14 + VAR15);
        }
    }
    return VAR10;
}