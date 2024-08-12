static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, target_phys_addr_t VAR6, int VAR7)
{
    VAR8 *VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14;
    uint8_t VAR15[16];
    uint64_t VAR16;
    if (VAR4 == '')
    {
        int VAR17;
        VAR17 = 0;
        VAR9 = FUN2();
        if (!VAR9 && !VAR7)
            return;
        if (VAR5 == 2)
        {
            VAR17 = 1;
        }
        else if (VAR5 == 4)
        {
            VAR17 = 0;
        }
        else
        {
            VAR17 = 0;
            if (VAR9)
            {
                if ((VAR9->VAR18 & VAR19) && (VAR9->VAR20[VAR21].VAR17 & VAR22))
                    VAR17 = 2;
                else if (!(VAR9->VAR20[VAR21].VAR17 & VAR23))
                    VAR17 = 1;
            }
        }
        FUN3(VAR2, VAR9, VAR6, VAR3, VAR7, VAR17);
        return;
    }
    VAR14 = VAR5 * VAR3;
    if (VAR5 == 1)
        VAR11 = 8;
    else
        VAR11 = 16;
    VAR13 = 0;
    switch (VAR4)
    {
    case '':
        VAR13 = (VAR5 * 8 + 2) / 3;
        break;
    default:
    case '':
        VAR13 = (VAR5 * 8) / 4;
        break;
    case '':
    case '':
        VAR13 = (VAR5 * 8 * 10 + 32) / 33;
        break;
    case '':
        VAR5 = 1;
        break;
    }
    while (VAR14 > 0)
    {
        if (VAR7)
            FUN4(VAR2, VAR24 "", VAR6);
        else
            FUN4(VAR2, VAR25 "", (VAR26)VAR6);
        VAR10 = VAR14;
        if (VAR10 > VAR11)
            VAR10 = VAR11;
        if (VAR7)
        {
            FUN5(VAR6, VAR15, VAR10, 0);
        }
        else
        {
            VAR9 = FUN2();
            if (!VAR9)
                break;
            if (FUN6(VAR9, VAR6, VAR15, VAR10, 0) < 0)
            {
                FUN4(VAR2, "");
                break;
            }
        }
        VAR12 = 0;
        while (VAR12 < VAR10)
        {
            switch (VAR5)
            {
            default:
            case 1:
                VAR16 = FUN7(VAR15 + VAR12);
                break;
            case 2:
                VAR16 = FUN8(VAR15 + VAR12);
                break;
            case 4:
                VAR16 = (VAR27)FUN9(VAR15 + VAR12);
                break;
            case 8:
                VAR16 = FUN10(VAR15 + VAR12);
                break;
            }
            FUN4(VAR2, "");
            switch (VAR4)
            {
            case '':
                FUN4(VAR2, "" VAR28, VAR13, VAR16);
                break;
            case '':
                FUN4(VAR2, "" VAR29, VAR13, VAR16);
                break;
            case '':
                FUN4(VAR2, "" VAR30, VAR13, VAR16);
                break;
            case '':
                FUN4(VAR2, "" VAR31, VAR13, VAR16);
                break;
            case '':
                FUN11(VAR2, VAR16);
                break;
            }
            VAR12 += VAR5;
        }
        FUN4(VAR2, "");
        VAR6 += VAR10;
        VAR14 -= VAR10;
    }
}