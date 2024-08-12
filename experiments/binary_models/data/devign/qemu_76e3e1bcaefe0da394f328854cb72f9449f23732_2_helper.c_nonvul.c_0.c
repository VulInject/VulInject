static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6)
{
    int VAR7;
    if (VAR4 == 3)
    {
        return VAR8 | VAR9;
    }
    if (VAR5 == 1)
        VAR7 = 0;
    else
        VAR7 = VAR8;
    switch (VAR3)
    {
    case 0:
        if (VAR5 == 1)
            return 0;
        switch (VAR2->VAR10.VAR11 & (VAR12 | VAR13))
        {
        case VAR12:
            return VAR6 ? 0 : VAR8;
        case VAR13:
            return VAR8;
        default:
            return 0;
        }
    case 1:
        return VAR6 ? 0 : VAR8 | VAR9;
    case 2:
        if (VAR6)
            return VAR7;
        else
            return VAR8 | VAR9;
    case 3:
        return VAR8 | VAR9;
    case 4:
        return 0;
    case 5:
        return VAR6 ? 0 : VAR7;
    case 6:
        return VAR7;
    case 7:
        if (!FUN2(VAR2, VAR14))
            return 0;
        return VAR7;
    default:
        FUN3();
    }
}