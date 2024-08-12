static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    int VAR6 = 0, VAR7;
    int VAR8 = 0;
    int VAR9 = 0;
    AVPacket VAR10;
    if (!VAR2->VAR11)
    {
        VAR2->VAR12 = VAR2->VAR13->VAR14.VAR15 ? -VAR2->VAR16->VAR17 * VAR18 / FUN2(VAR2->VAR13->VAR14) : 0;
        VAR2->VAR19 = 0;
        if (VAR4 && VAR4->VAR19 != VAR20 && !VAR2->VAR21)
        {
            VAR2->VAR12 += FUN3(VAR4->VAR19, VAR2->VAR13->VAR22, VAR23);
            VAR2->VAR19 = VAR2->VAR12;
        }
        VAR2->VAR11 = 1;
    }
    if (VAR2->VAR24 == VAR20)
        VAR2->VAR24 = VAR2->VAR12;
    if (VAR2->VAR25 == VAR20)
        VAR2->VAR25 = VAR2->VAR19;
    if (!VAR4)
    {
        FUN4(&VAR10);
        VAR10.VAR26 = NULL;
        VAR10.VAR27 = 0;
    }
    else
    {
        VAR10 = *VAR4;
    }
    if (VAR4 && VAR4->VAR12 != VAR20)
    {
        VAR2->VAR24 = VAR2->VAR12 = FUN3(VAR4->VAR12, VAR2->VAR13->VAR22, VAR23);
        if (VAR2->VAR16->VAR28 != VAR29 || !VAR2->VAR21)
            VAR2->VAR25 = VAR2->VAR19 = VAR2->VAR12;
    }
    while (VAR2->VAR21)
    {
        int VAR30 = 0;
        int VAR31 = 0;
        VAR2->VAR19 = VAR2->VAR25;
        VAR2->VAR12 = VAR2->VAR24;
        switch (VAR2->VAR16->VAR28)
        {
        case VAR32:
            VAR6 = FUN5(VAR2, VAR8 ? NULL : &VAR10, &VAR31);
            break;
        case VAR29:
            VAR6 = FUN6(VAR2, VAR8 ? NULL : &VAR10, &VAR31, !VAR4);
            if (!VAR8 || !VAR4 || VAR31)
            {
                if (VAR4 && VAR4->VAR30)
                {
                    VAR30 = FUN3(VAR4->VAR30, VAR2->VAR13->VAR22, VAR23);
                }
                else if (VAR2->VAR16->VAR33.VAR15 != 0 && VAR2->VAR16->VAR33.VAR34 != 0)
                {
                    int VAR35 = FUN7(VAR2->VAR13) ? FUN7(VAR2->VAR13)->VAR36 + 1 : VAR2->VAR16->VAR37;
                    VAR30 = ((VAR38)VAR18 * VAR2->VAR16->VAR33.VAR34 * VAR35) / VAR2->VAR16->VAR33.VAR15 / VAR2->VAR16->VAR37;
                }
                if (VAR2->VAR12 != VAR20 && VAR30)
                {
                    VAR2->VAR24 += VAR30;
                }
                else
                    VAR2->VAR24 = VAR20;
            }
            if (VAR31)
                VAR2->VAR25 += VAR30;
            break;
        case VAR39:
            if (VAR8)
                break;
            VAR6 = FUN8(VAR2, &VAR10, &VAR31);
            if (!VAR4 && VAR6 >= 0)
                VAR6 = VAR40;
            break;
        default:
            return -1;
        }
        if (VAR6 == VAR40)
        {
            VAR9 = 1;
            break;
        }
        if (VAR6 < 0)
        {
            FUN9(NULL, VAR41, "", VAR2->VAR42, VAR2->VAR13->VAR43, FUN10(VAR6));
            if (VAR44)
                FUN11(1);
            break;
        }
        if (VAR31)
            VAR2->VAR31 = 1;
        if (!VAR31)
            break;
        if (!VAR4)
            break;
        VAR8 = 1;
    }
    if (!VAR4 && VAR2->VAR21 && VAR9 && !VAR5)
    {
        int VAR6 = FUN12(VAR2);
        if (VAR6 < 0)
        {
            FUN9(NULL, VAR45, "");
            FUN11(1);
        }
    }
    if (!VAR2->VAR21)
    {
        VAR2->VAR12 = VAR2->VAR24;
        switch (VAR2->VAR16->VAR28)
        {
        case VAR32:
            VAR2->VAR24 += ((VAR38)VAR18 * VAR2->VAR16->VAR46) / VAR2->VAR16->VAR47;
            break;
        case VAR29:
            if (VAR2->VAR33.VAR15)
            {
                AVRational VAR48 = VAR23;
                int64_t VAR24 = FUN3(VAR2->VAR24, VAR48, FUN13(VAR2->VAR33));
                VAR2->VAR24 = FUN3(VAR24 + 1, FUN13(VAR2->VAR33), VAR48);
            }
            else if (VAR4->VAR30)
            {
                VAR2->VAR24 += FUN3(VAR4->VAR30, VAR2->VAR13->VAR22, VAR23);
            }
            else if (VAR2->VAR16->VAR33.VAR15 != 0)
            {
                int VAR35 = FUN7(VAR2->VAR13) ? FUN7(VAR2->VAR13)->VAR36 + 1 : VAR2->VAR16->VAR37;
                VAR2->VAR24 += ((VAR38)VAR18 * VAR2->VAR16->VAR33.VAR34 * VAR35) / VAR2->VAR16->VAR33.VAR15 / VAR2->VAR16->VAR37;
            }
            break;
        }
        VAR2->VAR19 = VAR2->VAR12;
        VAR2->VAR25 = VAR2->VAR24;
    }
    for (VAR7 = 0; VAR4 && VAR7 < VAR49; VAR7++)
    {
        VAR50 *VAR51 = VAR52[VAR7];
        if (!FUN14(VAR2, VAR51) || VAR51->VAR53)
            continue;
        FUN15(VAR2, VAR51, VAR4);
    }
    return !VAR9;
}