static void FUN1(int VAR1, int VAR2, int VAR3, target_phys_addr_t VAR4, int VAR5)
{
    VAR6 *VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    uint8_t VAR14[16];
    uint64_t VAR15;
    if (VAR2 == '')
    {
        int VAR16;
        VAR16 = 0;
        VAR7 = FUN2();
        if (!VAR7 && !VAR5)
            return;
        if (VAR3 == 2)
        {
            VAR16 = 1;
        }
        else if (VAR3 == 4)
        {
            VAR16 = 0;
        }
        else
        {
            VAR16 = 0;
            if (VAR7)
            {
                if ((VAR7->VAR17 & VAR18) && (VAR7->VAR19[VAR20].VAR16 & VAR21))
                    VAR16 = 2;
                else if (!(VAR7->VAR19[VAR20].VAR16 & VAR22))
                    VAR16 = 1;
            }
        }
        FUN3(VAR7, VAR4, VAR1, VAR5, VAR16);
        return;
    }
    VAR13 = VAR3 * VAR1;
    if (VAR3 == 1)
        VAR10 = 8;
    else
        VAR10 = 16;
    VAR8 = VAR10 / VAR3;
    VAR12 = 0;
    switch (VAR2)
    {
    case '':
        VAR12 = (VAR3 * 8 + 2) / 3;
        break;
    default:
    case '':
        VAR12 = (VAR3 * 8) / 4;
        break;
    case '':
    case '':
        VAR12 = (VAR3 * 8 * 10 + 32) / 33;
        break;
    case '':
        VAR3 = 1;
        break;
    }
    while (VAR13 > 0)
    {
        if (VAR5)
            FUN4(VAR23 "", VAR4);
        else
            FUN4(VAR24 "", (VAR25)VAR4);
        VAR9 = VAR13;
        if (VAR9 > VAR10)
            VAR9 = VAR10;
        if (VAR5)
        {
            FUN5(VAR4, VAR14, VAR9, 0);
        }
        else
        {
            VAR7 = FUN2();
            if (!VAR7)
                break;
            if (FUN6(VAR7, VAR4, VAR14, VAR9, 0) < 0)
            {
                FUN4("");
                break;
            }
        }
        VAR11 = 0;
        while (VAR11 < VAR9)
        {
            switch (VAR3)
            {
            default:
            case 1:
                VAR15 = FUN7(VAR14 + VAR11);
                break;
            case 2:
                VAR15 = FUN8(VAR14 + VAR11);
                break;
            case 4:
                VAR15 = (VAR26)FUN9(VAR14 + VAR11);
                break;
            case 8:
                VAR15 = FUN10(VAR14 + VAR11);
                break;
            }
            FUN4("");
            switch (VAR2)
            {
            case '':
                FUN4("" VAR27, VAR12, VAR15);
                break;
            case '':
                FUN4("" VAR28, VAR12, VAR15);
                break;
            case '':
                FUN4("" VAR29, VAR12, VAR15);
                break;
            case '':
                FUN4("" VAR30, VAR12, VAR15);
                break;
            case '':
                FUN11(VAR15);
                break;
            }
            VAR11 += VAR3;
        }
        FUN4("");
        VAR4 += VAR9;
        VAR13 -= VAR9;
    }
}