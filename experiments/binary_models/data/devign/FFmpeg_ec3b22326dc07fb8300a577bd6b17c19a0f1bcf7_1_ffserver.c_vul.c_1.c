static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    switch (VAR2->VAR4)
    {
    case VAR5:
        memset(&VAR2->VAR6, 0, sizeof(VAR2->VAR6));
        if (VAR2->VAR7->VAR8)
        {
            VAR2->VAR6.VAR9 = VAR2->VAR7->VAR10;
            VAR2->VAR6.VAR11 = VAR2->VAR7->VAR11;
            for (VAR3 = 0; VAR3 < VAR2->VAR6.VAR11; VAR3++)
            {
                VAR12 *VAR13;
                VAR13 = FUN2(sizeof(VAR12));
                VAR2->VAR6.VAR14[VAR3] = VAR13;
                if (VAR2->VAR7->VAR8 == VAR2->VAR7)
                    memcpy(VAR13, VAR2->VAR7->VAR14[VAR3], sizeof(VAR12));
                else
                    memcpy(VAR13, VAR2->VAR7->VAR8->VAR14[VAR2->VAR7->VAR15[VAR3]], sizeof(VAR12));
                VAR13->VAR16.VAR17 = 0;
            }
            VAR2->VAR18 = 0;
        }
        else
        {
            VAR2->VAR6.VAR9 = VAR2->VAR7->VAR10;
            VAR2->VAR6.VAR11 = VAR2->VAR19->VAR11;
            for (VAR3 = 0; VAR3 < VAR2->VAR6.VAR11; VAR3++)
            {
                VAR12 *VAR13;
                VAR13 = FUN2(sizeof(VAR12));
                VAR2->VAR6.VAR14[VAR3] = VAR13;
                memcpy(VAR13, VAR2->VAR19->VAR14[VAR3], sizeof(VAR12));
                VAR13->VAR16.VAR17 = 0;
            }
            VAR2->VAR18 = 0;
        }
        FUN3(&VAR2->VAR6.VAR20, VAR2->VAR21, VAR22, 1, VAR2, NULL, VAR23, NULL);
        VAR2->VAR6.VAR20.VAR24 = 1;
        FUN4(&VAR2->VAR6);
        VAR2->VAR4 = VAR25;
        VAR2->VAR26 = 0;
        break;
    case VAR25:
        VAR27 = VAR28 - VAR2->VAR29;
        if (VAR27 >= ((3 * VAR30) / 4))
        {
            VAR2->VAR31 = VAR32.VAR33;
            VAR2->VAR18 = 0;
        }
        VAR34 = VAR2->VAR31;
        if (FUN5(&VAR32, (VAR35 *)&VAR36, sizeof(VAR36), &VAR2->VAR31) < 0)
            return 0;
        VAR37 = FUN6(VAR36.VAR37);
        VAR38 = FUN7(VAR37);
        if (FUN5(&VAR32, VAR38, VAR37, &VAR2->VAR31) < 0)
        {
            FUN8(VAR38);
            VAR2->VAR31 = VAR34;
            return 0;
        }
        VAR2->VAR29 = VAR28 - FUN9(&VAR32, VAR2->VAR31);
        if (VAR2->VAR7->VAR39 != VAR40)
        {
            VAR41 = 0;
            for (VAR3 = 0; VAR3 < VAR2->VAR6.VAR11; VAR3++)
            {
                VAR12 *VAR13 = VAR2->VAR6.VAR14[VAR3];
                if (FUN10(&VAR36, &VAR13->VAR16))
                {
                    if (VAR13->VAR16.VAR42)
                        VAR2->VAR18 |= 1 << VAR3;
                    if (VAR2->VAR18 & (1 << VAR3))
                    {
                        VAR41 = VAR2->VAR6.VAR43->FUN11(&VAR2->VAR6, VAR3, VAR38, VAR37);
                    }
                    break;
                }
            }
            if (VAR41)
            {
                VAR2->VAR4 = VAR44;
            }
        }
        else
        {
            char *VAR45;
            VAR45 = VAR2->VAR46;
            memcpy(VAR45, &VAR36, sizeof(VAR36));
            VAR45 += sizeof(VAR36);
            memcpy(VAR45, VAR38, VAR37);
            VAR45 += VAR37;
            VAR2->VAR47 = VAR2->VAR46;
            VAR2->VAR48 = VAR45;
        }
        FUN8(VAR38);
        {
            AVPacket VAR49;
            if (VAR2->VAR7->VAR8)
            {
                FUN12(VAR2->VAR19, VAR2->VAR7->VAR8->VAR50, VAR2->VAR7->VAR8->VAR51);
            }
            if (FUN13(VAR2->VAR19, &VAR49) < 0)
            {
                if (VAR2->VAR7->VAR8 && VAR2->VAR7->VAR8->VAR52)
                {
                    VAR2->VAR4 = VAR53;
                    return 1;
                }
                else
                {
                    VAR2->VAR4 = VAR44;
                }
            }
            else
            {
                if (VAR2->VAR7->VAR8)
                {
                    for (VAR3 = 0; VAR3 < VAR2->VAR7->VAR11; VAR3++)
                    {
                        if (VAR2->VAR7->VAR15[VAR3] == VAR49.VAR54)
                        {
                            VAR49.VAR54 = VAR3;
                            if (VAR49.VAR55 & VAR56)
                            {
                                VAR2->VAR18 |= 1 << VAR3;
                            }
                            if (!VAR2->VAR7->VAR57 || ((VAR2->VAR18 + 1) >> VAR2->VAR7->VAR11))
                            {
                                goto VAR58;
                            }
                        }
                    }
                }
                else
                {
                    VAR59 *VAR16;
                VAR58:
                    VAR16 = &VAR2->VAR6.VAR14[VAR49.VAR54]->VAR16;
                    VAR16->VAR42 = ((VAR49.VAR55 & VAR56) != 0);
                    if (VAR16->VAR60 == VAR61)
                    {
                        VAR16->VAR62 = (VAR16->VAR63 * VAR49.VAR64 + 500000) / 1000000;
                    }
                    if (FUN14(&VAR2->VAR6, &VAR49, 0))
                        VAR2->VAR4 = VAR44;
                    VAR16->VAR17++;
                }
                FUN15(&VAR49);
            }
        }
        break;
    default:
    case VAR44:
        if (VAR2->VAR26)
            return -1;
        FUN16(&VAR2->VAR6);
        VAR2->VAR26 = 1;
        break;
    }
    return 0;
}