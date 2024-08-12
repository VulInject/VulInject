static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6;
    int VAR7 = 0;
    AVPacket VAR8;
    if (VAR2->VAR9 == VAR10)
        VAR2->VAR9 = VAR2->VAR11;
    if (!VAR4)
    {
        FUN2(&VAR8);
        VAR8.VAR12 = NULL;
        VAR8.VAR13 = 0;
    }
    else
    {
        VAR8 = *VAR4;
    }
    if (VAR4 && VAR4->VAR14 != VAR10)
        VAR2->VAR9 = VAR2->VAR11 = FUN3(VAR4->VAR14, VAR2->VAR15->VAR16, VAR17);
    while (VAR2->VAR18 && (!VAR4 || VAR8.VAR13 > 0))
    {
        int VAR19 = 0;
        int VAR20 = 0;
        if (!VAR7)
            VAR2->VAR11 = VAR2->VAR9;
        switch (VAR2->VAR21->VAR22)
        {
        case VAR23:
            VAR19 = FUN4(VAR2, VAR7 ? NULL : &VAR8, &VAR20);
            break;
        case VAR24:
            VAR19 = FUN5(VAR2, VAR7 ? NULL : &VAR8, &VAR20);
            if (VAR7 && !VAR20)
                ;
            else if (VAR4 && VAR4->VAR25)
                VAR2->VAR9 += FUN3(VAR4->VAR25, VAR2->VAR15->VAR16, VAR17);
            else if (VAR2->VAR15->VAR26.VAR27)
                VAR2->VAR9 += FUN3(1, FUN6(VAR2->VAR15->VAR26), VAR17);
            else if (VAR2->VAR21->VAR28.VAR27 != 0)
            {
                int VAR29 = VAR2->VAR15->VAR30 ? VAR2->VAR15->VAR30->VAR31 + 1 : VAR2->VAR21->VAR32;
                VAR2->VAR9 += FUN3(VAR29, VAR2->VAR21->VAR28, VAR17);
            }
            break;
        case VAR33:
            if (VAR7)
                break;
            VAR19 = FUN7(VAR2, &VAR8, &VAR20);
            break;
        default:
            return;
        }
        if (VAR19 < 0)
        {
            FUN8(NULL, VAR34, "", VAR2->VAR35, VAR2->VAR15->VAR36);
            if (VAR37)
                FUN9(1);
            break;
        }
        if (!VAR20)
            break;
        VAR7 = 1;
    }
    if (!VAR4 && VAR2->VAR18 && !VAR5)
    {
        int VAR19 = FUN10(VAR2);
        if (VAR19 < 0)
        {
            FUN8(NULL, VAR38, "");
            FUN9(1);
        }
    }
    if (!VAR2->VAR18)
    {
        VAR2->VAR11 = VAR2->VAR9;
        switch (VAR2->VAR21->VAR22)
        {
        case VAR23:
            VAR2->VAR9 += ((VAR39)VAR40 * VAR2->VAR21->VAR41) / VAR2->VAR21->VAR42;
            break;
        case VAR24:
            if (VAR2->VAR21->VAR28.VAR27 != 0)
            {
                int VAR29 = VAR2->VAR15->VAR30 ? VAR2->VAR15->VAR30->VAR31 + 1 : VAR2->VAR21->VAR32;
                VAR2->VAR9 += ((VAR39)VAR40 * VAR2->VAR21->VAR28.VAR43 * VAR29) / VAR2->VAR21->VAR28.VAR27;
            }
            break;
        }
    }
    for (VAR6 = 0; VAR4 && VAR6 < VAR44; VAR6++)
    {
        VAR45 *VAR46 = VAR47[VAR6];
        if (!FUN11(VAR2, VAR46) || VAR46->VAR48)
            continue;
        FUN12(VAR2, VAR46, VAR4);
    }
    return;
}