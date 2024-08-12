static void FUN1(void *VAR1, uint32_t VAR2, uint32_t VAR3)
{
    struct VAR4 *VAR5 = VAR1;
    switch (VAR5->VAR6)
    {
    case VAR7:
        if (VAR3 == VAR8 || VAR3 == VAR9 || VAR3 == VAR10)
        {
            VAR5->VAR11 = VAR3;
        }
        break;
    case VAR12:
        VAR5->VAR13 = VAR3;
        VAR5->VAR14 &= !!VAR3;
        VAR5->VAR15 = -1;
        VAR5->VAR16 = -1;
        VAR5->VAR17 = 1;
        VAR5->VAR18.FUN2(&VAR5->VAR18);
        if (VAR5->VAR13)
        {
            VAR5->VAR19 = ((VAR5->VAR20 + 7) >> 3) * VAR5->VAR21 * VAR5->VAR22;
            FUN3(&VAR5->VAR18);
        }
        else
        {
            FUN4(&VAR5->VAR18);
        }
        break;
    case VAR23:
        VAR5->VAR21 = VAR3;
        VAR5->VAR17 = 1;
        break;
    case VAR24:
        VAR5->VAR22 = VAR3;
        VAR5->VAR17 = 1;
        break;
    case VAR25:
    case VAR26:
        if (VAR3 != VAR5->VAR20)
        {
            FUN5("", VAR27, VAR3);
            VAR5->VAR14 = 0;
        }
        break;
    case VAR28:
        if (VAR3)
        {
            VAR5->VAR29 = (VAR30 *)VAR5->VAR31;
            if ((FUN6(VAR32) | FUN6(VAR33) | FUN6(VAR34) | FUN6(VAR35)) & 3)
            {
                break;
            }
            if (FUN6(VAR32) < (VAR36 *)VAR5->VAR37->VAR29 - (VAR36 *)VAR5->VAR29)
            {
                break;
            }
            if (FUN6(VAR33) > VAR38)
            {
                break;
            }
            if (FUN6(VAR33) < FUN6(VAR32) + 10 * 1024)
            {
                break;
            }
        }
        VAR5->VAR14 = !!VAR3;
        break;
    case VAR39:
        VAR5->VAR40 = 1;
        FUN7(VAR5);
        break;
    case VAR41:
        VAR5->VAR42 = VAR3;
        if (VAR3 >= VAR43 && VAR3 < VAR43 + FUN8(VAR44))
        {
            FUN5("", VAR27, VAR44[VAR3 - VAR43]);
        }
        break;
    case VAR45:
        VAR5->VAR46.VAR47 = VAR3;
        break;
    case VAR48:
        VAR5->VAR46.VAR49 = VAR3;
        break;
    case VAR50:
        VAR5->VAR46.VAR51 = VAR3;
        break;
    case VAR52:
        VAR5->VAR46.VAR53 |= (VAR3 == VAR54);
        VAR5->VAR46.VAR53 &= (VAR3 != VAR55);
        if (VAR3 <= VAR54)
        {
            FUN9(VAR5->VAR18.VAR56, VAR5->VAR46.VAR49, VAR5->VAR46.VAR51, VAR5->VAR46.VAR53);
        }
        break;
    case VAR57:
    case VAR58:
    case VAR59:
    case VAR60 ... VAR61:
        break;
    default:
        if (VAR5->VAR6 >= VAR62 && VAR5->VAR6 < VAR62 + VAR5->VAR63)
        {
            VAR5->VAR64[VAR5->VAR6 - VAR62] = VAR3;
            break;
        }
        FUN5("", VAR27, VAR5->VAR6);
    }
}