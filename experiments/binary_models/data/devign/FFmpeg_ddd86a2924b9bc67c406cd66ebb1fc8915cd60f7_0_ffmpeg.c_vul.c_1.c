static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR6 *VAR7)
{
    int VAR8 = 0, VAR9;
    int VAR10;
    int64_t VAR11 = VAR12;
    AVPacket VAR13;
    if (VAR2->VAR14 == VAR12)
        VAR2->VAR14 = VAR2->VAR15;
    if (VAR2->VAR16 == VAR12)
        VAR2->VAR16 = VAR2->VAR17;
    if (VAR7 == NULL)
    {
        FUN2(&VAR13);
        VAR13.VAR18 = NULL;
        VAR13.VAR19 = 0;
        goto VAR20;
    }
    else
    {
        VAR13 = *VAR7;
    }
    if (VAR7->VAR15 != VAR12)
    {
        VAR2->VAR14 = VAR2->VAR15 = FUN3(VAR7->VAR15, VAR2->VAR21->VAR22, VAR23);
        if (VAR2->VAR21->VAR24->VAR25 != VAR26 || !VAR2->VAR27)
            VAR2->VAR16 = VAR2->VAR17 = FUN3(VAR7->VAR15, VAR2->VAR21->VAR22, VAR23);
    }
    if (VAR7->VAR17 != VAR12)
        VAR11 = FUN3(VAR7->VAR17, VAR2->VAR21->VAR22, VAR23);
    while (VAR2->VAR27 && (VAR13.VAR19 > 0 || (!VAR7 && VAR10)))
    {
        int VAR28;
    VAR20:
        VAR2->VAR17 = VAR2->VAR16;
        VAR2->VAR15 = VAR2->VAR14;
        if (VAR13.VAR19 && VAR13.VAR19 != VAR7->VAR19)
        {
            FUN4(NULL, VAR2->VAR29 ? VAR30 : VAR31, "", VAR7->VAR32);
            VAR2->VAR29 = 1;
        }
        switch (VAR2->VAR21->VAR24->VAR25)
        {
        case VAR33:
            VAR8 = FUN5(VAR2, &VAR13, &VAR10);
            break;
        case VAR26:
            VAR8 = FUN6(VAR2, &VAR13, &VAR10, &VAR11);
            if (VAR13.VAR28)
            {
                VAR28 = FUN3(VAR13.VAR28, VAR2->VAR21->VAR22, VAR23);
            }
            else if (VAR2->VAR21->VAR24->VAR22.VAR34 != 0)
            {
                int VAR35 = VAR2->VAR21->VAR36 ? VAR2->VAR21->VAR36->VAR37 + 1 : VAR2->VAR21->VAR24->VAR38;
                VAR28 = ((VAR39)VAR40 * VAR2->VAR21->VAR24->VAR22.VAR34 * VAR35) / VAR2->VAR21->VAR24->VAR22.VAR41;
            }
            else
                VAR28 = 0;
            if (VAR2->VAR15 != VAR12 && VAR28)
            {
                VAR2->VAR14 += VAR28;
            }
            else
                VAR2->VAR14 = VAR12;
            if (VAR10)
                VAR2->VAR16 += VAR28;
            break;
        case VAR42:
            VAR8 = FUN7(VAR2, &VAR13, &VAR10);
            break;
        default:
            return -1;
        }
        if (VAR8 < 0)
            return VAR8;
        VAR13.VAR15 = VAR13.VAR17 = VAR12;
        if (VAR7)
        {
            if (VAR2->VAR21->VAR24->VAR25 != VAR33)
                VAR8 = VAR13.VAR19;
            VAR13.VAR18 += VAR8;
            VAR13.VAR19 -= VAR8;
        }
        if (!VAR10)
        {
            continue;
        }
    }
    if (!VAR2->VAR27)
    {
        FUN8(VAR2);
        VAR2->VAR15 = VAR2->VAR14;
        switch (VAR2->VAR21->VAR24->VAR25)
        {
        case VAR33:
            VAR2->VAR14 += ((VAR39)VAR40 * VAR2->VAR21->VAR24->VAR43) / VAR2->VAR21->VAR24->VAR44;
            break;
        case VAR26:
            if (VAR7->VAR28)
            {
                VAR2->VAR14 += FUN3(VAR7->VAR28, VAR2->VAR21->VAR22, VAR23);
            }
            else if (VAR2->VAR21->VAR24->VAR22.VAR34 != 0)
            {
                int VAR35 = VAR2->VAR21->VAR36 ? VAR2->VAR21->VAR36->VAR37 + 1 : VAR2->VAR21->VAR24->VAR38;
                VAR2->VAR14 += ((VAR39)VAR40 * VAR2->VAR21->VAR24->VAR22.VAR34 * VAR35) / VAR2->VAR21->VAR24->VAR22.VAR41;
            }
            break;
        }
        VAR2->VAR17 = VAR2->VAR15;
        VAR2->VAR16 = VAR2->VAR14;
    }
    for (VAR9 = 0; VAR7 && VAR9 < VAR5; VAR9++)
    {
        VAR3 *VAR45 = &VAR4[VAR9];
        if (!FUN9(VAR2, VAR45) || VAR45->VAR46)
            continue;
        FUN10(VAR2, VAR45, VAR7);
    }
    return 0;
}