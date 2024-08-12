static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    switch (VAR2->VAR5)
    {
    case VAR6:
    case VAR7:
        if ((VAR2->VAR8 - VAR9) < 0)
            return -1;
        if (VAR2->VAR10->VAR11 & (VAR12 | VAR13))
            return -1;
        if (!(VAR2->VAR10->VAR11 & VAR14))
            return 0;
        VAR3 = read(VAR2->VAR15, VAR2->VAR16, 1);
        if (VAR3 < 0)
        {
            if (VAR17 != VAR18 && VAR17 != VAR19)
                return -1;
        }
        else if (VAR3 == 0)
        {
            return -1;
        }
        else
        {
            VAR20 *VAR21;
            VAR2->VAR16 += VAR3;
            VAR21 = VAR2->VAR16;
            if ((VAR21 >= VAR2->VAR22 + 2 && !memcmp(VAR21 - 2, "", 2)) || (VAR21 >= VAR2->VAR22 + 4 && !memcmp(VAR21 - 4, "", 4)))
            {
                if (VAR2->VAR5 == VAR6)
                {
                    VAR4 = FUN2(VAR2);
                }
                else
                {
                    VAR4 = FUN3(VAR2);
                }
                if (VAR4 < 0)
                    return -1;
            }
            else if (VAR21 >= VAR2->VAR23)
            {
                return -1;
            }
        }
        break;
    case VAR24:
        if (VAR2->VAR10->VAR11 & (VAR12 | VAR13))
            return -1;
        if (!(VAR2->VAR10->VAR11 & VAR25))
            return 0;
        VAR3 = write(VAR2->VAR15, VAR2->VAR16, VAR2->VAR23 - VAR2->VAR16);
        if (VAR3 < 0)
        {
            if (VAR17 != VAR18 && VAR17 != VAR19)
            {
                FUN4(&VAR2->VAR26);
                return -1;
            }
        }
        else
        {
            VAR2->VAR16 += VAR3;
            if (VAR2->VAR27)
                VAR2->VAR27->VAR28 += VAR3;
            VAR2->VAR29 += VAR3;
            if (VAR2->VAR16 >= VAR2->VAR23)
            {
                FUN4(&VAR2->VAR26);
                if (VAR2->VAR30)
                {
                    return -1;
                }
                VAR2->VAR5 = VAR31;
                VAR2->VAR16 = VAR2->VAR23 = VAR2->VAR22;
            }
        }
        break;
    case VAR32:
    case VAR31:
    case VAR33:
        if (!VAR2->VAR34)
        {
            if (VAR2->VAR10->VAR11 & (VAR12 | VAR13))
                return -1;
            if (!(VAR2->VAR10->VAR11 & VAR25))
                return 0;
        }
        if (FUN5(VAR2) < 0)
            return -1;
        break;
    case VAR35:
        if (VAR2->VAR10->VAR11 & (VAR12 | VAR13))
            return -1;
        if (!(VAR2->VAR10->VAR11 & VAR14))
            return 0;
        if (FUN6(VAR2) < 0)
            return -1;
        break;
    case VAR36:
        if (VAR2->VAR10->VAR11 & (VAR14 | VAR12 | VAR13))
            return -1;
        break;
    case VAR37:
        if (FUN7(VAR2) <= 0)
            VAR2->VAR5 = VAR32;
        break;
    case VAR38:
        VAR2->VAR5 = VAR32;
        break;
    case VAR39:
        if (VAR2->VAR10->VAR11 & (VAR12 | VAR13))
        {
            FUN4(&VAR2->VAR26);
            return -1;
        }
        if (!(VAR2->VAR10->VAR11 & VAR25))
            return 0;
        VAR3 = write(VAR2->VAR15, VAR2->VAR16, VAR2->VAR23 - VAR2->VAR16);
        if (VAR3 < 0)
        {
            if (VAR17 != VAR18 && VAR17 != VAR19)
            {
                FUN4(&VAR2->VAR26);
                return -1;
            }
        }
        else
        {
            VAR2->VAR16 += VAR3;
            VAR2->VAR29 += VAR3;
            if (VAR2->VAR16 >= VAR2->VAR23)
            {
                FUN4(&VAR2->VAR26);
                FUN8(VAR2, 1);
            }
        }
        break;
    case VAR40:
        break;
    default:
        return -1;
    }
    return 0;
}