VAR1 FUN1(VAR2 *VAR3)
{
    int VAR4 = FUN2();
    if (VAR4 & VAR5)
    {
        switch (VAR3->VAR6)
        {
        case VAR7:
            return VAR8;
        case VAR9:
            return VAR10;
        }
    }
    if (VAR4 & VAR11)
    {
        switch (VAR3->VAR6)
        {
        case VAR12:
            if (VAR3->VAR13 == VAR14)
            {
                return VAR15;
                break;
            }
            else
                return VAR16;
        case VAR17:
            if (VAR3->VAR13 == VAR14)
            {
                return VAR18;
                break;
            }
            else
                return VAR19;
        case VAR7:
            return VAR20;
        case VAR9:
            return VAR21;
        case VAR22:
            return VAR23;
        case VAR24:
            return VAR25;
        }
    }
    return NULL;
}