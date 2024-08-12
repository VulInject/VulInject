int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2);
    VAR8 *VAR9 = &VAR7->VAR9;
    target_ulong VAR10;
    VAR10 = FUN3(VAR4);
    if (VAR5 < 32)
    {
        VAR9->VAR11.VAR12[VAR5] = VAR10;
        return sizeof(VAR13);
    }
    if (VAR9->VAR14 & (1 << VAR15) && VAR5 >= 38 && VAR5 < 73)
    {
        if (VAR5 < 70)
        {
            if (VAR9->VAR16 & (1 << VAR17))
            {
                VAR9->VAR18.VAR19[VAR5 - 38].VAR20 = VAR10;
            }
            else
            {
                VAR9->VAR18.VAR19[VAR5 - 38].VAR21[VAR22] = VAR10;
            }
        }
        switch (VAR5)
        {
        case 70:
            VAR9->VAR18.VAR23 = VAR10 & 0xFF83FFFF;
            VAR24;
            break;
        case 71:
            VAR9->VAR18.VAR25 = VAR10;
            break;
        }
        return sizeof(VAR13);
    }
    switch (VAR5)
    {
    case 32:
        VAR9->VAR16 = VAR10;
        break;
    case 33:
        VAR9->VAR11.VAR26[0] = VAR10;
        break;
    case 34:
        VAR9->VAR11.VAR27[0] = VAR10;
        break;
    case 35:
        VAR9->VAR28 = VAR10;
        break;
    case 36:
        VAR9->VAR29 = VAR10;
        break;
    case 37:
        VAR9->VAR11.VAR30 = VAR10 & ~(VAR13)1;
        if (VAR10 & 1)
        {
            VAR9->VAR31 |= VAR32;
        }
        else
        {
            VAR9->VAR31 &= ~(VAR32);
        }
        break;
    case 72:
        break;
    default:
        if (VAR5 > 89)
        {
            return 0;
        }
        break;
    }
    return sizeof(VAR13);
}