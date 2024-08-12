static int FUN1(VAR1 *VAR2, struct VAR3 *VAR4, int VAR5)
{
    static const enum AVColorSpace VAR6[8] = {
        VAR7,
        VAR8,
        VAR9,
        VAR10,
        VAR11,
        VAR12,
        VAR13,
        VAR14,
    };
    static const enum AVColorRange VAR15[] = {VAR16, VAR17};
    VAR2->VAR18 = VAR15[VAR4->VAR19];
    VAR2->VAR20 = VAR6[VAR4->VAR21];
    if (VAR2->VAR22 == VAR23 && VAR4->VAR24 != VAR25)
        return VAR26;
    switch (VAR4->VAR24)
    {
    case VAR25:
        if (VAR2->VAR22 == VAR27)
            VAR2->VAR28 = VAR29;
        VAR2->VAR30 = VAR5 ? VAR31 : VAR32;
        return 0;
    case VAR33:
        VAR2->VAR28 = VAR34;
        VAR2->VAR30 = VAR35;
        return 0;
    case VAR36:
        VAR2->VAR28 = VAR34;
        VAR2->VAR30 = VAR37;
        return 0;
    case VAR38:
        VAR2->VAR28 = VAR34;
        VAR2->VAR30 = VAR2->VAR20 == VAR14 ? VAR39 : VAR40;
        return 0;
    case VAR41:
        VAR2->VAR28 = VAR42;
        if (VAR4->VAR43 == 10)
        {
            VAR2->VAR30 = VAR44;
            return 0;
        }
        else if (VAR4->VAR43 == 12)
        {
            VAR2->VAR30 = VAR45;
            return 0;
        }
        else
        {
            return VAR26;
        }
    case VAR46:
        VAR2->VAR28 = VAR47;
        if (VAR4->VAR43 == 10)
        {
            VAR2->VAR30 = VAR48;
            return 0;
        }
        else if (VAR4->VAR43 == 12)
        {
            VAR2->VAR30 = VAR49;
            return 0;
        }
        else
        {
            return VAR26;
        }
    case VAR50:
        VAR2->VAR28 = VAR47;
        if (VAR4->VAR43 == 10)
        {
            VAR2->VAR30 = VAR51;
            return 0;
        }
        else if (VAR4->VAR43 == 12)
        {
            VAR2->VAR30 = VAR52;
            return 0;
        }
        else
        {
            return VAR26;
        }
    case VAR53:
        VAR2->VAR28 = VAR47;
        if (VAR4->VAR43 == 10)
        {
            VAR2->VAR30 = VAR2->VAR20 == VAR14 ? VAR54 : VAR55;
            return 0;
        }
        else if (VAR4->VAR43 == 12)
        {
            VAR2->VAR30 = VAR2->VAR20 == VAR14 ? VAR56 : VAR57;
            return 0;
        }
        else
        {
            return VAR26;
        }
    default:
        return VAR26;
    }
}