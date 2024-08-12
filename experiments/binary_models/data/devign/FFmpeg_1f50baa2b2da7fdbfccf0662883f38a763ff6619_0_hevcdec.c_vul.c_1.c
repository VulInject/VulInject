static int FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    VAR8 *VAR9 = &VAR6->VAR9;
    int VAR10, VAR11;
    *VAR9 = VAR4->VAR9;
    VAR2->VAR12 = VAR4->VAR13;
    VAR2->VAR14 = VAR4->VAR14;
    switch (VAR2->VAR12)
    {
    case VAR15:
        VAR11 = FUN2(VAR9, VAR2->VAR16, &VAR2->VAR17);
        if (VAR11 < 0)
            goto VAR18;
        break;
    case VAR19:
        VAR11 = FUN3(VAR9, VAR2->VAR16, &VAR2->VAR17, VAR2->VAR20);
        if (VAR11 < 0)
            goto VAR18;
        break;
    case VAR21:
        VAR11 = FUN4(VAR9, VAR2->VAR16, &VAR2->VAR17);
        if (VAR11 < 0)
            goto VAR18;
        break;
    case VAR22:
    case VAR23:
        VAR11 = FUN5(VAR2);
        if (VAR11 < 0)
            goto VAR18;
        break;
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
    case VAR39:
        VAR11 = FUN6(VAR2);
        if (VAR11 < 0)
            return VAR11;
        if (VAR2->VAR40 == VAR41)
        {
            if (VAR2->VAR12 == VAR35 || FUN7(VAR2))
            {
                VAR2->VAR40 = VAR2->VAR42;
            }
            else
            {
                if (FUN8(VAR2))
                    VAR2->VAR40 = VAR43;
            }
        }
        if ((VAR2->VAR12 == VAR39 || VAR2->VAR12 == VAR38) && VAR2->VAR42 <= VAR2->VAR40)
        {
            VAR2->VAR44 = 0;
            break;
        }
        else
        {
            if (VAR2->VAR12 == VAR39 && VAR2->VAR42 > VAR2->VAR40)
                VAR2->VAR40 = VAR43;
        }
        if (VAR2->VAR45.VAR46)
        {
            VAR11 = FUN9(VAR2);
            if (VAR11 < 0)
                return VAR11;
        }
        else if (!VAR2->VAR47)
        {
            FUN10(VAR2->VAR16, VAR48, "");
            goto VAR18;
        }
        if (VAR2->VAR12 != VAR2->VAR49)
        {
            FUN10(VAR2->VAR16, VAR48, "", VAR2->VAR49, VAR2->VAR12);
            return VAR50;
        }
        if (!VAR2->VAR45.VAR51 && VAR2->VAR45.VAR52 != VAR53)
        {
            VAR11 = FUN11(VAR2);
            if (VAR11 < 0)
            {
                FUN10(VAR2->VAR16, VAR54, "");
                goto VAR18;
            }
        }
        if (VAR2->VAR45.VAR46 && VAR2->VAR16->VAR55)
        {
            VAR11 = VAR2->VAR16->VAR55->FUN12(VAR2->VAR16, NULL, 0);
            if (VAR11 < 0)
                goto VAR18;
        }
        if (VAR2->VAR16->VAR55)
        {
            VAR11 = VAR2->VAR16->VAR55->FUN13(VAR2->VAR16, VAR4->VAR56, VAR4->VAR57);
            if (VAR11 < 0)
                goto VAR18;
        }
        else
        {
            if (VAR2->VAR58 > 1 && VAR2->VAR45.VAR59 > 0)
                VAR10 = FUN14(VAR2, VAR4);
            else
                VAR10 = FUN15(VAR2);
            if (VAR10 >= (VAR2->VAR17.VAR60->VAR61 * VAR2->VAR17.VAR60->VAR62))
            {
                VAR2->VAR44 = 1;
            }
            if (VAR10 < 0)
            {
                VAR11 = VAR10;
                goto VAR18;
            }
        }
        break;
    case VAR63:
    case VAR64:
        VAR2->VAR65 = (VAR2->VAR65 + 1) & 0xff;
        VAR2->VAR40 = VAR41;
        break;
    case VAR66:
    case VAR67:
        break;
    default:
        FUN10(VAR2->VAR16, VAR68, "", VAR2->VAR12);
    }
    return 0;
VAR18:
    if (VAR2->VAR16->VAR69 & VAR70)
        return VAR11;
    return 0;
}