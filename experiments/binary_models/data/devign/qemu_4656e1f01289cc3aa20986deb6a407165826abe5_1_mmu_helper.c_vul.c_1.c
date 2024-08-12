int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    int VAR8;
    FUN2("", VAR9);
    if ((VAR7 == VAR10 && VAR11 == 0) || (VAR7 != VAR10 && VAR12 == 0))
    {
        if (VAR2->VAR13 == VAR14)
        {
            VAR8 = FUN3(VAR2, VAR4, VAR5, VAR6, VAR7);
        }
        else if (VAR2->VAR13 == VAR15)
        {
            VAR8 = FUN4(VAR2, VAR4, VAR5, VAR6, VAR7);
        }
        else
        {
            VAR8 = FUN5(VAR2, VAR4, VAR5, VAR6);
        }
    }
    else
    {
        VAR8 = -1;
        switch (VAR2->VAR13)
        {
        case VAR16:
        case VAR17:
        case VAR18:
        case VAR19:
            if (VAR2->VAR20 != 0)
            {
                VAR8 = FUN6(VAR2, VAR4, VAR5, VAR6, VAR7);
            }
        case VAR21:
        case VAR22:
        case VAR23:
            if (VAR8 < 0)
            {
                VAR8 = FUN7(VAR2, VAR4, VAR5, VAR6, VAR7);
            }
            break;
        case VAR24:
        case VAR25:
            VAR8 = FUN8(VAR2, VAR4, VAR5, VAR6, VAR7);
            break;
        case VAR14:
            VAR8 = FUN3(VAR2, VAR4, VAR5, VAR6, VAR7);
            break;
        case VAR15:
            VAR8 = FUN4(VAR2, VAR4, VAR5, VAR6, VAR7);
            break;
        case VAR26:
            FUN9(VAR2, "");
            break;
        case VAR27:
            FUN9(VAR2, "");
            return -1;
        default:
            FUN9(VAR2, "");
            return -1;
        }
    }
    FUN2("" VAR28 "" VAR29 "", VAR9, VAR5, VAR8, VAR4->VAR30);
    return VAR8;