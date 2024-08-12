int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7)
{
    int VAR8;
    FUN2("", VAR9);
    if ((VAR7 == VAR10 && VAR11 == 0) || (VAR7 != VAR10 && VAR12 == 0))
    {
        VAR8 = FUN3(VAR2, VAR4, VAR5, VAR6);
    }
    else
    {
        VAR8 = -1;
        switch (VAR2->VAR13)
        {
        case VAR14:
        case VAR15:
        case VAR16:
        case VAR17:
            if (VAR2->VAR18 != 0)
                VAR8 = FUN4(VAR2, VAR4, VAR5, VAR6, VAR7);
        case VAR19:
        case VAR20:
            if (VAR8 < 0)
            {
                VAR8 = FUN5(VAR2, VAR4, VAR5, VAR6, VAR7);
            }
            break;
        case VAR21:
        case VAR22:
            VAR8 = FUN6(VAR2, VAR4, VAR5, VAR6, VAR7);
            break;
        case VAR23:
            VAR8 = FUN7(VAR2, VAR4, VAR5, VAR6, VAR7);
            break;
        case VAR24:
            FUN8(VAR2, "");
            break;
        case VAR25:
            FUN8(VAR2, "");
            return -1;
        case VAR26:
            FUN8(VAR2, "");
            return -1;
        default:
            FUN8(VAR2, "");
            return -1;
        }
    }
    FUN2("" VAR27 "" VAR28 "", VAR9, VAR5, VAR8, VAR4->VAR29);
    return VAR8;
}