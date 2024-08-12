static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = VAR2->VAR9;
    int VAR10 = 0;
    unsigned int VAR11;
    unsigned int VAR12;
    unsigned int VAR13;
    unsigned char VAR14[VAR15];
    int VAR16 = 0;
    int64_t VAR17;
    while (!VAR16)
    {
        if (FUN2(VAR2->VAR9))
            return FUN3(VAR18);
        if ((VAR10 = FUN4(VAR9, VAR14, VAR15)) != VAR15)
            return FUN3(VAR18);
        VAR12 = FUN5(&VAR14[0]);
        VAR11 = FUN6(&VAR14[2]);
        if (VAR11 > VAR19)
            return VAR20;
        VAR11 = FUN7(VAR9, VAR11);
        switch (VAR12)
        {
        case VAR21:
            if (VAR6->VAR22 == -1)
            {
                VAR23 *VAR24 = FUN8(VAR2, NULL);
                if (!VAR24)
                    return FUN3(VAR25);
                FUN9(VAR24, 63, 1, VAR6->VAR26);
                VAR6->VAR22 = VAR24->VAR27;
                VAR24->VAR28->VAR29 = VAR30;
                VAR24->VAR28->VAR31 = VAR32;
                VAR24->VAR28->VAR33 = 0;
                if (FUN4(VAR9, VAR14, VAR15) != VAR15)
                    return FUN3(VAR18);
                VAR24->VAR28->VAR34 = VAR6->VAR34 = FUN5(VAR14);
                VAR24->VAR28->VAR35 = VAR6->VAR35 = FUN5(VAR14 + 2);
                break;
            }
            FUN10(VAR9, VAR15);
            break;
        case VAR36:
            if (VAR6->VAR22 < 0)
                return VAR20;
            VAR17 = FUN11(VAR9) - VAR15;
            VAR13 = VAR11;
            FUN10(VAR9, VAR13);
            if (FUN4(VAR9, VAR14, VAR15) != VAR15)
                return FUN3(VAR18);
            VAR11 = FUN6(&VAR14[2]) + VAR15 * 2 + VAR13;
            if (VAR11 > VAR19)
                return VAR20;
            FUN12(VAR9, VAR17, VAR37);
            VAR10 = FUN13(VAR9, VAR4, VAR11);
            if (VAR10 != VAR11)
                return FUN3(VAR18);
            VAR4->VAR38 = VAR6->VAR22;
            VAR4->VAR39 = VAR6->VAR40++;
            VAR16 = 1;
            break;
        case VAR41:
        case VAR42:
            if (VAR6->VAR43 == -1)
            {
                VAR23 *VAR24 = FUN8(VAR2, NULL);
                if (!VAR24)
                    return FUN3(VAR25);
                FUN9(VAR24, 32, 1, VAR44);
                VAR6->VAR43 = VAR24->VAR27;
                VAR24->VAR28->VAR29 = VAR45;
                VAR24->VAR28->VAR31 = VAR46;
                VAR24->VAR28->VAR33 = 0;
                if (VAR12 == VAR42)
                {
                    VAR24->VAR28->VAR47 = 2;
                    VAR24->VAR28->VAR48 = VAR49;
                }
                else
                {
                    VAR24->VAR28->VAR47 = 1;
                    VAR24->VAR28->VAR48 = VAR50;
                }
                VAR6->VAR51 = VAR24->VAR28->VAR47;
                VAR24->VAR28->VAR52 = VAR44;
                VAR24->VAR28->VAR53 = 16;
                VAR24->VAR28->VAR54 = VAR24->VAR28->VAR47 * VAR24->VAR28->VAR52 * VAR24->VAR28->VAR53;
                VAR24->VAR28->VAR55 = VAR24->VAR28->VAR47 * VAR24->VAR28->VAR53;
            }
        case VAR56:
            if (VAR12 == VAR56)
            {
                if (VAR6->VAR22 < 0)
                    return VAR20;
            }
            if (FUN14(VAR4, VAR11 + VAR15))
                return FUN3(VAR18);
            memcpy(VAR4->VAR57, VAR14, VAR15);
            if (VAR12 == VAR56)
            {
                VAR4->VAR38 = VAR6->VAR22;
                VAR4->VAR39 = VAR6->VAR40++;
            }
            else
            {
                VAR4->VAR38 = VAR6->VAR43;
                VAR4->VAR39 = VAR6->VAR58;
                VAR6->VAR58 += (VAR11 / VAR6->VAR51);
            }
            VAR4->VAR59 = FUN11(VAR9);
            VAR10 = FUN4(VAR9, VAR4->VAR57 + VAR15, VAR11);
            if (VAR10 != VAR11)
                VAR10 = FUN3(VAR18);
            VAR16 = 1;
            break;
        default:
            FUN15(VAR2, VAR60, "", VAR12);
            return VAR20;
        }
    }
    return VAR10;
}