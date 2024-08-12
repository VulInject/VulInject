static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5 = 0, VAR6;
    int VAR7 = 0;
    AVPacket VAR8;
    if (!VAR2->VAR9)
    {
        VAR2->VAR10 = VAR2->VAR11->VAR12.VAR13 ? -VAR2->VAR11->VAR14->VAR15 * VAR16 / FUN2(VAR2->VAR11->VAR12) : 0;
        VAR2->VAR17 = 0;
        if (VAR4 != NULL && VAR4->VAR17 != VAR18 && !VAR2->VAR19)
        {
            VAR2->VAR10 += FUN3(VAR4->VAR17, VAR2->VAR11->VAR20, VAR21);
            VAR2->VAR17 = VAR2->VAR10;
        }
        VAR2->VAR9 = 1;
    }
    if (VAR2->VAR22 == VAR18)
        VAR2->VAR22 = VAR2->VAR10;
    if (VAR2->VAR23 == VAR18)
        VAR2->VAR23 = VAR2->VAR17;
    if (VAR4 == NULL)
    {
        FUN4(&VAR8);
        VAR8.VAR24 = NULL;
        VAR8.VAR25 = 0;
        goto VAR26;
    }
    else
    {
        VAR8 = *VAR4;
    }
    if (VAR4->VAR10 != VAR18)
    {
        VAR2->VAR22 = VAR2->VAR10 = FUN3(VAR4->VAR10, VAR2->VAR11->VAR20, VAR21);
        if (VAR2->VAR11->VAR14->VAR27 != VAR28 || !VAR2->VAR19)
            VAR2->VAR23 = VAR2->VAR17 = VAR2->VAR10;
    }
    while (VAR2->VAR19 && (VAR8.VAR25 > 0 || (!VAR4 && VAR7)))
    {
        int VAR29;
    VAR26:
        VAR2->VAR17 = VAR2->VAR23;
        VAR2->VAR10 = VAR2->VAR22;
        if (VAR8.VAR25 && VAR8.VAR25 != VAR4->VAR25)
        {
            FUN5(NULL, VAR2->VAR30 ? VAR31 : VAR32, "", VAR4->VAR33);
            VAR2->VAR30 = 1;
        }
        switch (VAR2->VAR11->VAR14->VAR27)
        {
        case VAR34:
            VAR5 = FUN6(VAR2, &VAR8, &VAR7);
            break;
        case VAR28:
            VAR5 = FUN7(VAR2, &VAR8, &VAR7);
            if (VAR8.VAR29)
            {
                VAR29 = FUN3(VAR8.VAR29, VAR2->VAR11->VAR20, VAR21);
            }
            else if (VAR2->VAR11->VAR14->VAR20.VAR13 != 0 && VAR2->VAR11->VAR14->VAR20.VAR35 != 0)
            {
                int VAR36 = VAR2->VAR11->VAR37 ? VAR2->VAR11->VAR37->VAR38 + 1 : VAR2->VAR11->VAR14->VAR39;
                VAR29 = ((VAR40)VAR16 * VAR2->VAR11->VAR14->VAR20.VAR13 * VAR36) / VAR2->VAR11->VAR14->VAR20.VAR35;
            }
            else
                VAR29 = 0;
            if (VAR2->VAR10 != VAR18 && VAR29)
            {
                VAR2->VAR22 += VAR29;
            }
            else
                VAR2->VAR22 = VAR18;
            if (VAR7)
                VAR2->VAR23 += VAR29;
            break;
        case VAR41:
            VAR5 = FUN8(VAR2, &VAR8, &VAR7);
            break;
        default:
            return -1;
        }
        if (VAR5 < 0)
            return VAR5;
        VAR8.VAR10 = VAR8.VAR17 = VAR18;
        if (VAR4)
        {
            if (VAR2->VAR11->VAR14->VAR27 != VAR34)
                VAR5 = VAR8.VAR25;
            VAR8.VAR24 += VAR5;
            VAR8.VAR25 -= VAR5;
        }
        if (!VAR7)
        {
            continue;
        }
    }
    if (!VAR2->VAR19)
    {
        FUN9(VAR2);
        VAR2->VAR10 = VAR2->VAR22;
        switch (VAR2->VAR11->VAR14->VAR27)
        {
        case VAR34:
            VAR2->VAR22 += ((VAR40)VAR16 * VAR2->VAR11->VAR14->VAR42) / VAR2->VAR11->VAR14->VAR43;
            break;
        case VAR28:
            if (VAR4->VAR29)
            {
                VAR2->VAR22 += FUN3(VAR4->VAR29, VAR2->VAR11->VAR20, VAR21);
            }
            else if (VAR2->VAR11->VAR14->VAR20.VAR13 != 0)
            {
                int VAR36 = VAR2->VAR11->VAR37 ? VAR2->VAR11->VAR37->VAR38 + 1 : VAR2->VAR11->VAR14->VAR39;
                VAR2->VAR22 += ((VAR40)VAR16 * VAR2->VAR11->VAR14->VAR20.VAR13 * VAR36) / VAR2->VAR11->VAR14->VAR20.VAR35;
            }
            break;
        }
        VAR2->VAR17 = VAR2->VAR10;
        VAR2->VAR23 = VAR2->VAR22;
    }
    for (VAR6 = 0; VAR4 && VAR6 < VAR44; VAR6++)
    {
        VAR45 *VAR46 = VAR47[VAR6];
        if (!FUN10(VAR2, VAR46) || VAR46->VAR48)
            continue;
        FUN11(VAR2, VAR46, VAR4);
    }
    return 0;
}