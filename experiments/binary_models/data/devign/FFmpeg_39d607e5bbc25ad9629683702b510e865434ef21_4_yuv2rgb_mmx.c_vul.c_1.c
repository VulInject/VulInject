VAR1 FUN1(VAR2 *VAR3)
{
    int VAR4 = FUN2();
    if (VAR3->VAR5 != VAR6 && VAR3->VAR5 != VAR7)
        return NULL;
    if (VAR8 && VAR4 & VAR9)
    {
        switch (VAR3->VAR10)
        {
        case VAR11:
            return VAR12;
        case VAR13:
            return VAR14;
        }
    }
    if (VAR15 && VAR4 & VAR16)
    {
        switch (VAR3->VAR10)
        {
        case VAR17:
            if (VAR18 && VAR3->VAR5 == VAR7)
            {
                return VAR19;
                break;
            }
            else
                return VAR20;
        case VAR21:
            if (VAR18 && VAR3->VAR5 == VAR7)
            {
                return VAR22;
                break;
            }
            else
                return VAR23;
        case VAR11:
            return VAR24;
        case VAR13:
            return VAR25;
        case VAR26:
            return VAR27;
        case VAR28:
            return VAR29;
        }
    }
    return NULL;
}