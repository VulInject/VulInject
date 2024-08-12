static int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    int VAR8 = -1;
    bool VAR9 = (VAR7 == VAR10 && VAR11 == 0) || (VAR7 != VAR10 && VAR12 == 0);
    FUN2("", VAR13);
    switch (VAR2->VAR14)
    {
    case VAR15:
    case VAR16:
        if (VAR9)
        {
            VAR8 = FUN3(VAR2, VAR4, VAR5, VAR6);
        }
        else
        {
            if (VAR2->VAR17 != 0)
            {
                VAR8 = FUN4(VAR2, VAR4, VAR5, VAR6, VAR7);
            }
            if (VAR8 < 0)
            {
                VAR8 = FUN5(VAR2, VAR4, VAR5, VAR6, VAR7);
            }
        }
        break;
    case VAR18:
    case VAR19:
        if (VAR9)
        {
            VAR8 = FUN3(VAR2, VAR4, VAR5, VAR6);
        }
        else
        {
            if (VAR2->VAR17 != 0)
            {
                VAR8 = FUN4(VAR2, VAR4, VAR5, VAR6, VAR7);
            }
            if (VAR8 < 0)
            {
                VAR8 = FUN6(VAR2, VAR4, VAR5, VAR6, VAR7);
            }
        }
        break;
    case VAR20:
    case VAR21:
    case VAR22:
        if (VAR9)
        {
            VAR8 = FUN3(VAR2, VAR4, VAR5, VAR6);
        }
        else
        {
            VAR8 = FUN7(VAR2, VAR4, VAR5, VAR6, VAR7);
        }
        break;
    case VAR23:
    case VAR24:
        if (VAR9)
        {
            VAR8 = FUN3(VAR2, VAR4, VAR5, VAR6);
        }
        else
        {
            VAR8 = FUN8(VAR2, VAR4, VAR5, VAR6, VAR7);
        }
        break;
    case VAR25:
        VAR8 = FUN9(VAR2, VAR4, VAR5, VAR6, VAR7);
        break;
    case VAR26:
        VAR8 = FUN10(VAR2, VAR4, VAR5, VAR6, VAR7);
        break;
    case VAR27:
        FUN11(VAR2, "");
        break;
    case VAR28:
        if (VAR9)
        {
            VAR8 = FUN3(VAR2, VAR4, VAR5, VAR6);
        }
        else
        {
            FUN11(VAR2, "");
        }
        return -1;
    default:
        FUN11(VAR2, "");
        return -1;
    }
    FUN2("" VAR29 "" VAR30 "", VAR13, VAR5, VAR8, VAR4->VAR31);
    return VAR8;
}