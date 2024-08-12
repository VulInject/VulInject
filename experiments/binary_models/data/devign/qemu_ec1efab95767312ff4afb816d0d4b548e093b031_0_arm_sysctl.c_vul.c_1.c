static bool FUN1(VAR1 *VAR2, unsigned int VAR3, unsigned int VAR4, unsigned int VAR5, unsigned int VAR6, unsigned int VAR7, uint32_t VAR8)
{
    if (VAR3 != 0 || VAR6 != 0 || (VAR5 != VAR9 && VAR5 != VAR10))
    {
        goto VAR11;
    }
    switch (VAR4)
    {
    case VAR12:
        if (VAR5 == VAR9 && VAR7 < sizeof(VAR2->VAR13))
        {
            VAR2->VAR13[VAR7] = VAR8;
            return true;
        }
        if (VAR5 == VAR10 && VAR7 < VAR2->VAR14)
        {
            VAR2->VAR15[VAR7] = VAR8;
            return true;
        }
        break;
    case VAR16:
        if (VAR5 == VAR9 && VAR7 == 0)
        {
            FUN2(VAR17, ""
                                     "");
            return true;
        }
        break;
    case VAR18:
        if (VAR5 == VAR9 && VAR7 == 0)
        {
            FUN3();
            return true;
        }
        break;
    case VAR19:
        if (VAR5 == VAR9 && VAR7 == 0)
        {
            FUN4();
            return true;
        }
        break;
    case VAR20:
        if (VAR5 == VAR9 && VAR7 == 0)
        {
            return true;
        }
    default:
        break;
    }
VAR11:
    FUN2(VAR17, ""
                             "",
                  VAR4, VAR3, VAR5, VAR6, VAR7);
    return false;
}