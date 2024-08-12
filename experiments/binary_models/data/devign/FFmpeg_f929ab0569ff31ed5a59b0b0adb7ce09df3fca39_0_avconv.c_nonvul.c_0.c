static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    int VAR5;
    int VAR6;
    AVPacket VAR7;
    if (VAR2->VAR8 == VAR9)
        VAR2->VAR8 = VAR2->VAR10;
    if (!VAR4)
    {
        FUN2(&VAR7);
        VAR7.VAR11 = NULL;
        VAR7.VAR12 = 0;
        goto VAR13;
    }
    else
    {
        VAR7 = *VAR4;
    }
    if (VAR4->VAR14 != VAR9)
        VAR2->VAR8 = VAR2->VAR10 = FUN3(VAR4->VAR14, VAR2->VAR15->VAR16, VAR17);
    while (VAR2->VAR18 && (VAR7.VAR12 > 0 || (!VAR4 && VAR6)))
    {
        int VAR19 = 0;
    VAR13:
        VAR2->VAR10 = VAR2->VAR8;
        if (VAR7.VAR12 && VAR7.VAR12 != VAR4->VAR12 && !(VAR2->VAR20->VAR21 & VAR22))
        {
            FUN4(NULL, VAR2->VAR23 ? VAR24 : VAR25, "", VAR4->VAR26);
            VAR2->VAR23 = 1;
        }
        switch (VAR2->VAR27->VAR28)
        {
        case VAR29:
            VAR19 = FUN5(VAR2, &VAR7, &VAR6);
            break;
        case VAR30:
            VAR19 = FUN6(VAR2, &VAR7, &VAR6);
            if (VAR7.VAR31)
                VAR2->VAR8 += FUN3(VAR7.VAR31, VAR2->VAR15->VAR16, VAR17);
            else if (VAR2->VAR15->VAR32.VAR33)
                VAR2->VAR8 += FUN3(1, FUN7(VAR2->VAR15->VAR32), VAR17);
            else if (VAR2->VAR27->VAR16.VAR33 != 0)
            {
                int VAR34 = VAR2->VAR15->VAR35 ? VAR2->VAR15->VAR35->VAR36 + 1 : VAR2->VAR27->VAR37;
                VAR2->VAR8 += FUN3(VAR34, VAR2->VAR27->VAR16, VAR17);
            }
            break;
        case VAR38:
            VAR19 = FUN8(VAR2, &VAR7, &VAR6);
            break;
        default:
            return -1;
        }
        if (VAR19 < 0)
            return VAR19;
        if (VAR4)
        {
            VAR7.VAR11 += VAR19;
            VAR7.VAR12 -= VAR19;
        }
        if (!VAR6)
        {
            continue;
        }
    }
    if (!VAR2->VAR18)
    {
        VAR2->VAR10 = VAR2->VAR8;
        switch (VAR2->VAR27->VAR28)
        {
        case VAR29:
            VAR2->VAR8 += ((VAR39)VAR40 * VAR2->VAR27->VAR41) / VAR2->VAR27->VAR42;
            break;
        case VAR30:
            if (VAR2->VAR27->VAR16.VAR33 != 0)
            {
                int VAR34 = VAR2->VAR15->VAR35 ? VAR2->VAR15->VAR35->VAR36 + 1 : VAR2->VAR27->VAR37;
                VAR2->VAR8 += ((VAR39)VAR40 * VAR2->VAR27->VAR16.VAR33 * VAR34) / VAR2->VAR27->VAR16.VAR43;
            }
            break;
        }
    }
    for (VAR5 = 0; VAR4 && VAR5 < VAR44; VAR5++)
    {
        VAR45 *VAR46 = VAR47[VAR5];
        if (!FUN9(VAR2, VAR46) || VAR46->VAR48)
            continue;
        FUN10(VAR2, VAR46, VAR4);
    }
    return 0;
}