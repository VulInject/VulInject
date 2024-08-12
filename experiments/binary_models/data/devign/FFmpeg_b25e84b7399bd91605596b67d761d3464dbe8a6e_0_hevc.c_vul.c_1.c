static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8;
    VAR9 *VAR10 = &VAR7->VAR10;
    int VAR11, VAR12;
    VAR12 = FUN2(VAR10, VAR4, VAR5);
    if (VAR12 < 0)
        return VAR12;
    VAR12 = FUN3(VAR2);
    if (VAR12 < 0)
    {
        FUN4(VAR2->VAR13, VAR14, "", VAR2->VAR15);
        if (VAR2->VAR13->VAR16 & VAR17)
            return VAR12;
        return 0;
    }
    else if (!VAR12)
        return 0;
    switch (VAR2->VAR15)
    {
    case VAR18:
        VAR12 = FUN5(VAR2);
        if (VAR12 < 0)
            return VAR12;
        break;
    case VAR19:
        VAR12 = FUN6(VAR2);
        if (VAR12 < 0)
            return VAR12;
        break;
    case VAR20:
        VAR12 = FUN7(VAR2);
        if (VAR12 < 0)
            return VAR12;
        break;
    case VAR21:
    case VAR22:
        VAR12 = FUN8(VAR2);
        if (VAR12 < 0)
            return VAR12;
        break;
    case VAR23:
    case VAR24:
    case VAR25:
    case VAR26:
    case VAR27:
    case VAR28:
    case VAR29:
    case VAR30:
    case VAR31:
    case VAR32:
    case VAR33:
    case VAR34:
    case VAR35:
    case VAR36:
    case VAR37:
    case VAR38:
        VAR12 = FUN9(VAR2);
        if (VAR12 < 0)
            return VAR12;
        if (VAR2->VAR39 == VAR40)
        {
            if (VAR2->VAR15 == VAR34 || FUN10(VAR2))
            {
                VAR2->VAR39 = VAR2->VAR41;
            }
            else
            {
                if (FUN11(VAR2))
                    VAR2->VAR39 = VAR42;
                if ((VAR2->VAR15 == VAR38 || VAR2->VAR15 == VAR37) && VAR2->VAR41 <= VAR2->VAR39)
                {
                    VAR2->VAR43 = 0;
                    break;
                }
                else
                {
                    if (VAR2->VAR15 == VAR38 && VAR2->VAR41 > VAR2->VAR39)
                        VAR2->VAR39 = VAR42;
                    if (VAR2->VAR44.VAR45)
                    {
                        VAR12 = FUN12(VAR2);
                        if (VAR12 < 0)
                            return VAR12;
                    }
                    else if (!VAR2->VAR46)
                    {
                        FUN4(VAR2->VAR13, VAR14, "");
                        if (!VAR2->VAR44.VAR47 && VAR2->VAR44.VAR48 != VAR49)
                        {
                            VAR12 = FUN13(VAR2);
                            if (VAR12 < 0)
                            {
                                FUN4(VAR2->VAR13, VAR50, "");
                                if (VAR2->VAR13->VAR16 & VAR17)
                                    return VAR12;
                                VAR11 = FUN14(VAR2);
                                if (VAR11 >= (VAR2->VAR51->VAR52 * VAR2->VAR51->VAR53))
                                {
                                    VAR2->VAR43 = 1;
                                    if ((VAR2->VAR54->VAR55 || (VAR2->VAR51->VAR56.VAR57 && VAR2->VAR51->VAR58)) && VAR2->VAR51->VAR59)
                                        FUN15(VAR2);
                                    if (VAR11 < 0)
                                        return VAR11;
                                    break;
                                case VAR60:
                                case VAR61:
                                    VAR2->VAR62 = (VAR2->VAR62 + 1) & 0xff;
                                    VAR2->VAR39 = VAR40;
                                    break;
                                case VAR63:
                                case VAR64:
                                    break;
                                default:
                                    FUN4(VAR2->VAR13, VAR65, "", VAR2->VAR15);
                                    return 0