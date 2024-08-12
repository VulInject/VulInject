static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    VAR8 *VAR9;
    if (VAR2->VAR10 != 1)
        return -1;
    VAR9 = VAR2->VAR11[0];
    if (!FUN2(VAR9->VAR12->VAR13))
    {
        FUN3(VAR2, VAR14, "", VAR9->VAR12->VAR13);
        return -1;
    }
    if (VAR4->VAR15 < 0)
        VAR4->VAR15 = FUN4(VAR2, VAR9->VAR12);
    VAR4->VAR16 = FUN5();
    VAR4->VAR17 = VAR4->VAR16;
    VAR4->VAR18 = 0;
    VAR4->VAR19 = FUN5();
    VAR4->VAR20 = 1;
    VAR4->VAR21 = FUN6();
    if (VAR2->VAR22)
        VAR4->VAR21 = (VAR2->VAR22 / 1000) * 1000 + VAR23;
    VAR6 = VAR2->VAR24->VAR6;
    if (VAR6 <= 12)
        return FUN7(VAR25);
    VAR4->VAR26 = FUN8(VAR6);
    if (VAR4->VAR26 == NULL)
    {
        return FUN7(VAR27);
    }
    VAR4->VAR28 = VAR6 - 12;
    VAR4->VAR29 = 0;
    if (VAR2->VAR30)
    {
        if (VAR9->VAR12->VAR31 == VAR32)
        {
            if (VAR9->VAR12->VAR33 == 0)
            {
                FUN3(VAR2, VAR14, "");
            }
            else
            {
                VAR4->VAR29 = FUN9(VAR2->VAR30, VAR9->VAR12->VAR34, VAR35 * VAR9->VAR12->VAR33, VAR36);
            }
        }
        if (VAR9->VAR12->VAR31 == VAR37)
        {
            VAR4->VAR29 = FUN10(VAR2->VAR30, (VAR38){1, 1000000}, VAR9->VAR12->VAR39);
        }
    }
    FUN11(VAR9, 32, 1, 90000);
    switch (VAR9->VAR12->VAR13)
    {
    case VAR40:
    case VAR41:
        VAR4->VAR42 = VAR4->VAR26 + 4;
        break;
    case VAR43:
    case VAR44:
        break;
    case VAR45:
        VAR7 = VAR4->VAR28 / VAR46;
        if (VAR7 < 1)
            VAR7 = 1;
        VAR4->VAR28 = VAR7 * VAR46;
        VAR4->VAR42 = VAR4->VAR26;
        break;
    case VAR47:
        if (VAR9->VAR12->VAR48 > 4 && VAR9->VAR12->VAR49[0] == 1)
        {
            VAR4->VAR50 = (VAR9->VAR12->VAR49[4] & 0x03) + 1;
        }
        break;
    case VAR51:
    case VAR52:
        if (!VAR4->VAR29)
            VAR4->VAR29 = 15;
        VAR4->VAR29 = FUN12(VAR4->VAR29, 1, 15);
        VAR4->VAR28 -= 6;
        VAR4->VAR53 = 0;
        goto VAR54;
    case VAR55:
        FUN3(VAR2, VAR14, ""
                                 "");
        break;
    case VAR56:
        FUN11(VAR9, 32, 1, 8000);
        break;
    case VAR57:
    case VAR58:
        if (!VAR4->VAR29)
            VAR4->VAR29 = 12;
        if (VAR9->VAR12->VAR13 == VAR57)
            VAR7 = 31;
        else
            VAR7 = 61;
        if (1 + VAR4->VAR29 + VAR7 > VAR4->VAR28)
        {
            FUN3(VAR2, VAR14, "");
            return -1;
        }
        if (VAR9->VAR12->VAR59 != 1)
        {
            FUN3(VAR2, VAR14, "");
            return -1;
        }
    case VAR60:
        VAR4->VAR53 = 0;
    default:
    VAR54:
        if (VAR9->VAR12->VAR31 == VAR32)
        {
            FUN11(VAR9, 32, 1, VAR9->VAR12->VAR34);
        }
        VAR4->VAR42 = VAR4->VAR26;
        break;
    }
    return 0;
}