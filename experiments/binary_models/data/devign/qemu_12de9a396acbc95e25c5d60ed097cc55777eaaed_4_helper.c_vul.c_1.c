int FUN1(VAR1 *VAR2, VAR3 *VAR4, target_ulong VAR5, int VAR6, int VAR7, int VAR8)
{
    int VAR9;
    if (VAR10 != 0)
    {
        fprintf(VAR11, "", VAR12);
    }
    if ((VAR7 == VAR13 && VAR14 == 0) || (VAR7 != VAR13 && VAR15 == 0))
    {
        VAR9 = FUN2(VAR2, VAR4, VAR5, VAR6);
    }
    else
    {
        VAR9 = -1;
        switch (VAR2->VAR16)
        {
        case VAR17:
        case VAR18:
        case VAR19:
            if (VAR8)
                VAR9 = FUN3(VAR2, VAR4, VAR5, VAR6, VAR7);
        case VAR20:
        case VAR21:
            if (VAR9 < 0)
            {
                VAR9 = FUN4(VAR2, VAR4, VAR5, VAR6, VAR7);
            }
            break;
        case VAR22:
        case VAR23:
            VAR9 = FUN5(VAR2, VAR4, VAR5, VAR6, VAR7);
            break;
        case VAR24:
            FUN6(VAR2, "");
            return -1;
        case VAR25:
            VAR9 = FUN7(VAR2, VAR4, VAR5, VAR6, VAR7);
            break;
        case VAR26:
            FUN6(VAR2, "");
            return -1;
        case VAR27:
            FUN6(VAR2, "");
            return -1;
        default:
            FUN6(VAR2, "");
            return -1;
        }
    }
    if (VAR10 != 0)
    {
        fprintf(VAR11, "" VAR28 "" VAR29 "", VAR12, VAR5, VAR9, VAR4->VAR30);
    }
    return VAR9;
}