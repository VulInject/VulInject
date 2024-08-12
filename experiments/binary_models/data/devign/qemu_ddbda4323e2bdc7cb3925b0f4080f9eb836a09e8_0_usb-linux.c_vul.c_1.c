static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    uint8_t VAR5, VAR6, VAR7, VAR8;
    struct usb_ctrltransfer VAR9;
    int VAR10, VAR11, VAR12, VAR13;
    VAR9.VAR14 = VAR15;
    VAR9.VAR16 = VAR17;
    VAR9.VAR18 = 0;
    VAR9.VAR19 = 0;
    VAR9.VAR20 = 1;
    VAR9.VAR21 = &VAR7;
    VAR9.VAR22 = 50;
    VAR11 = FUN2(VAR2->VAR23, VAR24, &VAR9);
    if (VAR11 < 0)
    {
        FUN3("");
        return 1;
    }
    if (VAR7 == 0)
        return 1;
    VAR4 = &VAR2->VAR25[18];
    VAR12 = VAR2->VAR26 - 18;
    VAR13 = 0;
    if (VAR4[VAR13 + 1] != VAR27 || VAR4[VAR13 + 5] != VAR7)
    {
        FUN4("");
        return 1;
    }
    VAR13 += VAR4[VAR13];
    while (VAR13 < VAR12)
    {
        if (VAR4[VAR13 + 1] != VAR28 || (VAR4[VAR13 + 1] == VAR28 && VAR4[VAR13 + 4] == 0))
        {
            VAR13 += VAR4[VAR13];
            continue;
        }
        VAR10 = VAR4[VAR13 + 2];
        VAR9.VAR14 = VAR15 | VAR29;
        VAR9.VAR16 = VAR30;
        VAR9.VAR18 = 0;
        VAR9.VAR19 = VAR10;
        VAR9.VAR20 = 1;
        VAR9.VAR21 = &VAR8;
        VAR9.VAR22 = 50;
        VAR11 = FUN2(VAR2->VAR23, VAR24, &VAR9);
        if (VAR11 < 0)
        {
            VAR8 = VAR10;
        }
        if (VAR4[VAR13 + 3] != VAR8)
        {
            VAR13 += VAR4[VAR13];
            continue;
        }
        while (VAR13 < VAR12 && VAR4[VAR13 + 1] != VAR31)
            VAR13 += VAR4[VAR13];
        if (VAR13 >= VAR12)
            break;
        while (VAR13 < VAR12)
        {
            if (VAR4[VAR13 + 1] != VAR31)
                break;
            VAR5 = VAR4[VAR13 + 2];
            switch (VAR4[VAR13 + 3] & 0x3)
            {
            case 0x00:
                VAR6 = VAR32;
                break;
            case 0x01:
                VAR6 = VAR33;
                break;
            case 0x02:
                break;
            case 0x03:
                VAR6 = VAR34;
                break;
            }
            VAR2->VAR35[(VAR5 & 0xf) - 1].VAR6 = VAR6;
            VAR2->VAR35[(VAR5 & 0xf) - 1].VAR36 = 0;
            VAR13 += VAR4[VAR13];
        }
    }
    return 0;