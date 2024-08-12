static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, hwaddr VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    uint8_t VAR13[16];
    uint64_t VAR14;
    if (VAR4 == '')
    {
        int VAR15 = 0;
        VAR16 *VAR17 = FUN2();
        if (VAR5 == 2)
        {
            VAR15 = 1;
        }
        else if (VAR5 == 4)
        {
            VAR15 = 0;
        }
        else
        {
            VAR15 = 0;
            if (VAR17)
            {
                if ((VAR17->VAR18 & VAR19) && (VAR17->VAR20[VAR21].VAR15 & VAR22))
                    VAR15 = 2;
                else if (!(VAR17->VAR20[VAR21].VAR15 & VAR23))
                    VAR15 = 1;
            }
        }
        VAR16 *VAR17 = FUN2();
        VAR15 = VAR24 << 16;
        VAR15 |= VAR17->VAR25;
        FUN3(VAR2, FUN4(), VAR6, VAR3, VAR7, VAR15);
        return;
    }
    VAR12 = VAR5 * VAR3;
    if (VAR5 == 1)
        VAR9 = 8;
    else
        VAR9 = 16;
    VAR11 = 0;
    switch (VAR4)
    {
    case '':
        VAR11 = (VAR5 * 8 + 2) / 3;
        break;
    default:
    case '':
        VAR11 = (VAR5 * 8) / 4;
        break;
    case '':
    case '':
        VAR11 = (VAR5 * 8 * 10 + 32) / 33;
        break;
    case '':
        VAR5 = 1;
        break;
    }
    while (VAR12 > 0)
    {
        if (VAR7)
            FUN5(VAR2, VAR26 "", VAR6);
        else
            FUN5(VAR2, VAR27 "", (VAR28)VAR6);
        VAR8 = VAR12;
        if (VAR8 > VAR9)
            VAR8 = VAR9;
        if (VAR7)
        {
            FUN6(VAR6, VAR13, VAR8);
        }
        else
        {
            if (FUN7(FUN4(), VAR6, VAR13, VAR8, 0) < 0)
            {
                FUN5(VAR2, "");
                break;
            }
        }
        VAR10 = 0;
        while (VAR10 < VAR8)
        {
            switch (VAR5)
            {
            default:
            case 1:
                VAR14 = FUN8(VAR13 + VAR10);
                break;
            case 2:
                VAR14 = FUN9(VAR13 + VAR10);
                break;
            case 4:
                VAR14 = (VAR29)FUN10(VAR13 + VAR10);
                break;
            case 8:
                VAR14 = FUN11(VAR13 + VAR10);
                break;
            }
            FUN5(VAR2, "");
            switch (VAR4)
            {
            case '':
                FUN5(VAR2, "" VAR30, VAR11, VAR14);
                break;
            case '':
                FUN5(VAR2, "" VAR31, VAR11, VAR14);
                break;
            case '':
                FUN5(VAR2, "" VAR32, VAR11, VAR14);
                break;
            case '':
                FUN5(VAR2, "" VAR33, VAR11, VAR14);
                break;
            case '':
                FUN12(VAR2, VAR14);
                break;
            }
            VAR10 += VAR5;
        }
        FUN5(VAR2, "");
        VAR6 += VAR8;
        VAR12 -= VAR8;
    }
}