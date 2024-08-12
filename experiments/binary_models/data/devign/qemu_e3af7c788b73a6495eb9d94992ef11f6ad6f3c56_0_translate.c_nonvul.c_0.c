static VAR1 FUN1(VAR2 *VAR3, VAR4 *VAR5, int VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    target_long VAR13;
    bool VAR14;
    VAR7 = VAR15;
    VAR9 = -1;
    VAR10 = 0;
    VAR13 = 0;
    VAR11 = (VAR6 >> 6) & 3;
    VAR12 = VAR6 & 7;
    VAR8 = VAR12 | FUN2(VAR5);
    if (VAR11 == 3)
    {
        goto VAR16;
    }
    switch (VAR5->VAR17)
    {
    case VAR18:
    case VAR19:
        VAR14 = 0;
        if (VAR12 == 4)
        {
            int VAR20 = FUN3(VAR3, VAR5);
            VAR10 = (VAR20 >> 6) & 3;
            VAR9 = ((VAR20 >> 3) & 7) | FUN4(VAR5);
            if (VAR9 == 4)
            {
                VAR9 = -1;
            }
            VAR8 = (VAR20 & 7) | FUN2(VAR5);
            VAR14 = 1;
        }
        switch (VAR11)
        {
        case 0:
            if ((VAR8 & 7) == 5)
            {
                VAR8 = -1;
                VAR13 = (VAR21)FUN5(VAR3, VAR5);
                if (FUN6(VAR5) && !VAR14)
                {
                    VAR8 = -2;
                    VAR13 += VAR5->VAR22 + VAR5->VAR23;
                }
            }
            break;
        case 1:
            VAR13 = (VAR24)FUN3(VAR3, VAR5);
            break;
        default:
        case 2:
            VAR13 = (VAR21)FUN5(VAR3, VAR5);
            break;
        }
        if (VAR8 == VAR25 && VAR5->VAR26)
        {
            VAR13 += VAR5->VAR26;
        }
        if (VAR8 == VAR27 || VAR8 == VAR25)
        {
            VAR7 = VAR28;
        }
        break;
    case VAR29:
        if (VAR11 == 0)
        {
            if (VAR12 == 6)
            {
                VAR8 = -1;
                VAR13 = FUN7(VAR3, VAR5);
                break;
            }
        }
        else if (VAR11 == 1)
        {
            VAR13 = (VAR24)FUN3(VAR3, VAR5);
        }
        else
        {
            VAR13 = (VAR30)FUN7(VAR3, VAR5);
        }
        switch (VAR12)
        {
        case 0:
            VAR8 = VAR31;
            VAR9 = VAR32;
            break;
        case 1:
            VAR8 = VAR31;
            VAR9 = VAR33;
            break;
        case 2:
            VAR8 = VAR27;
            VAR9 = VAR32;
            VAR7 = VAR28;
            break;
        case 3:
            VAR8 = VAR27;
            VAR9 = VAR33;
            VAR7 = VAR28;
            break;
        case 4:
            VAR8 = VAR32;
            break;
        case 5:
            VAR8 = VAR33;
            break;
        case 6:
            VAR8 = VAR27;
            VAR7 = VAR28;
            break;
        default:
        case 7:
            VAR8 = VAR31;
            break;
        }
        break;
    default:
        FUN8();
    }
VAR16:
    return (VAR1){VAR7, VAR8, VAR9, VAR10, VAR13};
}