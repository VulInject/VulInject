static int FUN1(VAR1 *VAR2, vpx_codec_caps_t VAR3, struct VAR4 *VAR5, VAR6 *VAR7, VAR8 *VAR9)
{
    VPxContext VAR10 *VAR11 = VAR2->VAR12;
    VAR5->VAR13 = VAR5->VAR14 = 8;
    switch (VAR2->VAR15)
    {
    case VAR16:
    case VAR17:
        VAR5->VAR18 = 0;
        *VAR9 = VAR19;
        return 0;
    case VAR20:
        VAR5->VAR18 = 1;
        *VAR9 = VAR21;
        return 0;
    case VAR22:
        VAR5->VAR18 = 1;
        *VAR9 = VAR23;
        return 0;
    case VAR24:
        VAR11->VAR25 = VAR26;
    case VAR27:
        VAR5->VAR18 = 1;
        *VAR9 = VAR28;
        return 0;
    case VAR29:
    case VAR30:
        if (VAR3 & VAR31)
        {
            VAR5->VAR13 = VAR5->VAR14 = VAR2->VAR15 == VAR29 ? 10 : 12;
            VAR5->VAR18 = 2;
            *VAR9 = VAR32;
            *VAR7 |= VAR33;
            return 0;
        }
        break;
    case VAR34:
    case VAR35:
        if (VAR3 & VAR31)
        {
            VAR5->VAR13 = VAR5->VAR14 = VAR2->VAR15 == VAR34 ? 10 : 12;
            VAR5->VAR18 = 3;
            *VAR9 = VAR36;
            *VAR7 |= VAR33;
            return 0;
        }
        break;
    case VAR37:
    case VAR38:
        if (VAR3 & VAR31)
        {
            VAR5->VAR13 = VAR5->VAR14 = VAR2->VAR15 == VAR37 ? 10 : 12;
            VAR5->VAR18 = 3;
            *VAR9 = VAR39;
            *VAR7 |= VAR33;
            return 0;
        }
        break;
    case VAR40:
    case VAR41:
        VAR11->VAR25 = VAR26;
    case VAR42:
    case VAR43:
        if (VAR3 & VAR31)
        {
            VAR5->VAR13 = VAR5->VAR14 = VAR2->VAR15 == VAR42 || VAR2->VAR15 == VAR40 ? 10 : 12;
            VAR5->VAR18 = 3;
            *VAR9 = VAR44;
            *VAR7 |= VAR33;
            return 0;
        }
        break;
    default:
        break;
    }
    FUN2(VAR2, VAR45, "");
    return VAR46;
}