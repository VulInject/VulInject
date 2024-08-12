static bool FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4, unsigned int VAR5, unsigned int VAR6, unsigned int VAR7, VAR8 *VAR9)
{
    if (VAR3 != 0 || VAR6 != 0 || (VAR5 != VAR10 && VAR5 != VAR11))
    {
        goto VAR12;
    }
    switch (VAR4)
    {
    case VAR13:
        if (VAR5 == VAR11 && VAR7 < VAR2->VAR14)
        {
            *VAR9 = VAR2->VAR15[VAR7];
            return true;
        }
        if (VAR5 == VAR10 && VAR7 == 0)
        {
            *VAR9 = 3300000;
            return true;
        }
        break;
    case VAR16:
        if (VAR5 == VAR10 && VAR7 < sizeof(VAR2->VAR17))
        {
            *VAR9 = VAR2->VAR17[VAR7];
            return true;
        }
        if (VAR5 == VAR11 && VAR7 < VAR2->VAR18)
        {
            *VAR9 = VAR2->VAR19[VAR7];
            return true;
        }
        break;
    default:
        break;
    }
VAR12:
    FUN2(VAR20, ""
                             "",
                  VAR4, VAR3, VAR5, VAR6, VAR7);
    return false;
}