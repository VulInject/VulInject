static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6 = 0, VAR7;
    int VAR8 = 0;
    AVPacket VAR9;
    if (!VAR2->VAR10)
    {
        VAR2->VAR11 = VAR2->VAR12->VAR13.VAR14 ? -VAR2->VAR15->VAR16 * VAR17 / FUN2(VAR2->VAR12->VAR13) : 0;
        VAR2->VAR18 = 0;
        if (VAR4 && VAR4->VAR18 != VAR19 && !VAR2->VAR20)
        {
            VAR2->VAR11 += FUN3(VAR4->VAR18, VAR2->VAR12->VAR21, VAR22);
            VAR2->VAR18 = VAR2->VAR11;
        }
        VAR2->VAR10 = 1;
    }
    if (VAR2->VAR23 == VAR19)
        VAR2->VAR23 = VAR2->VAR11;
    if (VAR2->VAR24 == VAR19)
        VAR2->VAR24 = VAR2->VAR18;
    if (!VAR4)
    {
        FUN4(&VAR9);
        VAR9.VAR25 = NULL;
        VAR9.VAR26 = 0;
        goto VAR27;
    }
    else
    {
        VAR9 = *VAR4;
    }
    if (VAR4->VAR11 != VAR19)
    {
        VAR2->VAR23 = VAR2->VAR11 = FUN3(VAR4->VAR11, VAR2->VAR12->VAR21, VAR22);
        if (VAR2->VAR15->VAR28 != VAR29 || !VAR2->VAR20)
            VAR2->VAR24 = VAR2->VAR18 = VAR2->VAR11;
    }
    while (VAR2->VAR20 && (VAR9.VAR26 > 0 || (!VAR4 && VAR8)))
    {
        int VAR30;
    VAR27:
        VAR2->VAR18 = VAR2->VAR24;
        VAR2->VAR11 = VAR2->VAR23;
        switch (VAR2->VAR15->VAR28)
        {
        case VAR31:
            VAR6 = FUN5(VAR2, &VAR9, &VAR8);
            break;
        case VAR29:
            VAR6 = FUN6(VAR2, &VAR9, &VAR8);
            if (VAR9.VAR30)
            {
                VAR30 = FUN3(VAR9.VAR30, VAR2->VAR12->VAR21, VAR22);
            }
            else if (VAR2->VAR15->VAR32.VAR14 != 0 && VAR2->VAR15->VAR32.VAR33 != 0)
            {
                int VAR34 = FUN7(VAR2->VAR12) ? FUN7(VAR2->VAR12)->VAR35 + 1 : VAR2->VAR15->VAR36;
                VAR30 = ((VAR37)VAR17 * VAR2->VAR15->VAR32.VAR33 * VAR34) / VAR2->VAR15->VAR32.VAR14 / VAR2->VAR15->VAR36;
            }
            else
                VAR30 = 0;
            if (VAR2->VAR11 != VAR19 && VAR30)
            {
                VAR2->VAR23 += VAR30;
            }
            else
                VAR2->VAR23 = VAR19;
            if (VAR8)
                VAR2->VAR24 += VAR30;
            break;
        case VAR38:
            VAR6 = FUN8(VAR2, &VAR9, &VAR8);
            break;
        default:
            return -1;
        }
        if (VAR6 < 0)
        {
            FUN9(NULL, VAR39, "", VAR2->VAR40, VAR2->VAR12->VAR41, FUN10(VAR6));
            if (VAR42)
                FUN11(1);
            break;
        }
        VAR9.VAR11 = VAR9.VAR18 = VAR19;
        if (VAR4)
        {
            if (VAR2->VAR15->VAR28 != VAR31)
                VAR6 = VAR9.VAR26;
            VAR9.VAR25 += VAR6;
            VAR9.VAR26 -= VAR6;
        }
        if (!VAR8)
        {
            continue;
        }
        if (VAR8 && !VAR4)
            break;
    }
    if (!VAR4 && VAR2->VAR20 && !VAR8 && !VAR5)
    {
        int VAR6 = FUN12(VAR2);
        if (VAR6 < 0)
        {
            FUN9(NULL, VAR43, "");
            FUN11(1);
        }
    }
    if (!VAR2->VAR20)
    {
        VAR2->VAR11 = VAR2->VAR23;
        switch (VAR2->VAR15->VAR28)
        {
        case VAR31:
            VAR2->VAR23 += ((VAR37)VAR17 * VAR2->VAR15->VAR44) / VAR2->VAR15->VAR45;
            break;
        case VAR29:
            if (VAR2->VAR32.VAR14)
            {
                AVRational VAR46 = VAR22;
                int64_t VAR23 = FUN3(VAR2->VAR23, VAR46, FUN13(VAR2->VAR32));
                VAR2->VAR23 = FUN3(VAR23 + 1, FUN13(VAR2->VAR32), VAR46);
            }
            else if (VAR4->VAR30)
            {
                VAR2->VAR23 += FUN3(VAR4->VAR30, VAR2->VAR12->VAR21, VAR22);
            }
            else if (VAR2->VAR15->VAR32.VAR14 != 0)
            {
                int VAR34 = FUN7(VAR2->VAR12) ? FUN7(VAR2->VAR12)->VAR35 + 1 : VAR2->VAR15->VAR36;
                VAR2->VAR23 += ((VAR37)VAR17 * VAR2->VAR15->VAR32.VAR33 * VAR34) / VAR2->VAR15->VAR32.VAR14 / VAR2->VAR15->VAR36;
            }
            break;
        }
        VAR2->VAR18 = VAR2->VAR11;
        VAR2->VAR24 = VAR2->VAR23;
    }
    for (VAR7 = 0; VAR4 && VAR7 < VAR47; VAR7++)
    {
        VAR48 *VAR49 = VAR50[VAR7];
        if (!FUN14(VAR2, VAR49) || VAR49->VAR51)
            continue;
        FUN15(VAR2, VAR49, VAR4);
    }
    return VAR8;
}