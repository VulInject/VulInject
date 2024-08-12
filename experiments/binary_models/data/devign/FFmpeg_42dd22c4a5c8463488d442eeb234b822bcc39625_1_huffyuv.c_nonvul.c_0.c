static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    VAR4->VAR2 = VAR2;
    VAR4->VAR8 = VAR2->VAR8;
    FUN2(&VAR4->VAR9, VAR2);
    memset(VAR4->VAR10, 0, 3 * sizeof(VAR11));
    VAR6 = VAR4->VAR6 = VAR2->VAR6;
    VAR7 = VAR4->VAR7 = VAR2->VAR7;
    VAR2->VAR12 = &VAR4->VAR13;
    VAR4->VAR14 = VAR7 > 288;
    VAR4->VAR15 = 1;
    assert(VAR6 && VAR7);
    if (VAR2->VAR16)
    {
        if ((VAR2->VAR17 & 7) && VAR2->VAR17 != 12)
            VAR4->VAR18 = 1;
        else
            VAR4->VAR18 = 2;
    }
    else
        VAR4->VAR18 = 0;
    if (VAR4->VAR18 == 2)
    {
        int VAR19, VAR20;
        VAR19 = ((VAR21 *)VAR2->VAR22)[0];
        VAR4->VAR23 = VAR19 & 64 ? 1 : 0;
        VAR4->VAR24 = VAR19 & 63;
        VAR4->VAR25 = ((VAR21 *)VAR2->VAR22)[1];
        if (VAR4->VAR25 == 0)
            VAR4->VAR25 = VAR2->VAR17 & ~7;
        VAR20 = (((VAR21 *)VAR2->VAR22)[2] & 0x30) >> 4;
        VAR4->VAR14 = (VAR20 == 1) ? 1 : (VAR20 == 2) ? 0
                                                                : VAR4->VAR14;
        VAR4->VAR26 = ((VAR21 *)VAR2->VAR22)[2] & 0x40 ? 1 : 0;
        if (FUN3(VAR4, ((VAR21 *)VAR2->VAR22) + 4, VAR2->VAR16) < 0)
            return -1;
    }
    else
    {
        switch (VAR2->VAR17 & 7)
        {
        case 1:
            VAR4->VAR24 = VAR27;
            VAR4->VAR23 = 0;
            break;
        case 2:
            VAR4->VAR24 = VAR27;
            VAR4->VAR23 = 1;
            break;
        case 3:
            VAR4->VAR24 = VAR28;
            VAR4->VAR23 = VAR2->VAR17 >= 24;
            break;
        case 4:
            VAR4->VAR24 = VAR29;
            VAR4->VAR23 = 0;
            break;
        default:
            VAR4->VAR24 = VAR27;
            VAR4->VAR23 = 0;
            break;
        }
        VAR4->VAR25 = VAR2->VAR17 & ~7;
        VAR4->VAR26 = 0;
        if (FUN4(VAR4) < 0)
            return -1;
    }
    switch (VAR4->VAR25)
    {
    case 12:
        VAR2->VAR30 = VAR31;
        break;
    case 16:
        if (VAR4->VAR32)
        {
            VAR2->VAR30 = VAR33;
        }
        else
        {
            VAR2->VAR30 = VAR34;
        }
        break;
    case 24:
    case 32:
        if (VAR4->VAR15)
        {
            VAR2->VAR30 = VAR35;
        }
        else
        {
            VAR2->VAR30 = VAR36;
        }
        break;
    default:
        assert(0);
    }
    return 0;
}