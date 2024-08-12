static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8 = VAR2->VAR9;
    VAR10 *VAR11 = VAR6->VAR3;
    int VAR12 = VAR6->VAR13;
    const VAR10 *VAR14 = VAR11 + VAR12;
    int VAR15, VAR16, VAR17;
    if ((VAR15 = FUN2(VAR2, VAR8->VAR18)) < 0)
        return VAR15;
    if (!VAR2->VAR19)
    {
        for (VAR16 = 0; VAR16 < VAR2->VAR20; VAR16++)
            memset(VAR8->VAR18->VAR3[0] + VAR16 * VAR8->VAR18->VAR21[0], 0, VAR2->VAR22);
        memset(VAR8->VAR18->VAR3[1], 0, VAR23);
    }
    VAR8->VAR18->VAR24 = VAR25;
    VAR8->VAR18->VAR26 = 1;
    FUN3((VAR27 *)VAR8->VAR18->VAR3[1]);
    if (!VAR8->VAR28)
    {
        FUN4(VAR2);
        VAR8->VAR28 = 1;
    }
    while (VAR11 < VAR14)
    {
        switch (VAR8->VAR29)
        {
        case VAR30:
            switch (VAR11[0])
            {
            case 0x00:
            case 0x07:
            case 0x1A:
                break;
            case 0x08:
                VAR8->VAR31 = FUN5(VAR8->VAR31 - 1, 0);
                break;
            case 0x09:
                VAR16 = VAR8->VAR31 / VAR32;
                VAR17 = ((VAR16 + 8) & ~7) - VAR16;
                for (VAR16 = 0; VAR16 < VAR17; VAR16++)
                    FUN6(VAR2, '');
                break;
            case 0x0A:
                FUN7(VAR2);
            case 0x0D:
                VAR8->VAR31 = 0;
                break;
            case 0x0C:
                FUN4(VAR2);
                break;
            case 0x1B:
                VAR8->VAR29 = VAR33;
                break;
            default:
                FUN6(VAR2, VAR11[0]);
            }
            break;
        case VAR33:
            if (VAR11[0] == '')
            {
                VAR8->VAR29 = VAR34;
                VAR8->VAR35 = 0;
                VAR8->VAR36[0] = -1;
            }
            else
            {
                VAR8->VAR29 = VAR30;
                FUN6(VAR2, 0x1B);
                continue;
            }
            break;
        case VAR34:
            switch (VAR11[0])
            {
            case '':
            case '':
            case '':
            case '':
            case '':
            case '':
            case '':
            case '':
            case '':
            case '':
                if (VAR8->VAR35 < VAR37)
                    VAR8->VAR36[VAR8->VAR35] = FUN5(VAR8->VAR36[VAR8->VAR35], 0) * 10 + VAR11[0] - '';
                break;
            case '':
                VAR8->VAR35++;
                if (VAR8->VAR35 < VAR37)
                    VAR8->VAR36[VAR8->VAR35] = 0;
                break;
            case '':
                VAR8->VAR29 = VAR38;
                break;
            case '':
            case '':
                break;
            default:
                if (VAR8->VAR35 > VAR37)
                    FUN8(VAR2, VAR39, "", VAR8->VAR35);
                if (VAR8->VAR35 < VAR37 && VAR8->VAR36[VAR8->VAR35] >= 0)
                    VAR8->VAR35++;
                if ((VAR15 = FUN9(VAR2, VAR11[0])) < 0)
                    return VAR15;
                VAR8->VAR29 = VAR30;
            }
            break;
        case VAR38:
            if (VAR11[0] == 0x0E || VAR11[0] == 0x1B)
                VAR8->VAR29 = VAR30;
            break;
        }
        VAR11++;
    }
    *VAR4 = 1;
    if ((VAR15 = FUN10(VAR3, VAR8->VAR18)) < 0)
        return VAR15;
    return VAR12;
}