static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    uint8_t VAR5, VAR6, VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    struct VAR13 *VAR14;
    for (VAR10 = 0; VAR10 < VAR15; VAR10++)
    {
        VAR2->VAR16[VAR10].VAR6 = VAR17;
        VAR2->VAR18[VAR10].VAR6 = VAR17;
    }
    if (VAR2->VAR19 == 0)
    {
        return 0;
    }
    VAR4 = &VAR2->VAR20[18];
    VAR9 = VAR2->VAR21 - 18;
    VAR10 = 0;
    while (VAR10 < VAR9)
    {
        if (VAR4[VAR10 + 1] != VAR22)
        {
            fprintf(VAR23, "");
            return 1;
        }
        else if (VAR4[VAR10 + 5] != VAR2->VAR19)
        {
            FUN2("", VAR2->VAR19);
            VAR10 += (VAR4[VAR10 + 3] << 8) + VAR4[VAR10 + 2];
            continue;
        }
        VAR10 += VAR4[VAR10];
        if (VAR4[VAR10 + 1] != VAR24 || (VAR4[VAR10 + 1] == VAR24 && VAR4[VAR10 + 4] == 0))
        {
            VAR10 += VAR4[VAR10];
            continue;
        }
        VAR8 = VAR4[VAR10 + 2];
        VAR7 = FUN3(VAR2, VAR2->VAR19, VAR8);
        if (VAR4[VAR10 + 3] != VAR7)
        {
            VAR10 += VAR4[VAR10];
            continue;
        }
        while (VAR10 < VAR9 && VAR4[VAR10 + 1] != VAR25)
        {
            VAR10 += VAR4[VAR10];
        }
        if (VAR10 >= VAR9)
            break;
        while (VAR10 < VAR9)
        {
            if (VAR4[VAR10 + 1] != VAR25)
            {
                break;
            }
            VAR5 = VAR4[VAR10 + 2];
            VAR12 = (VAR5 & VAR26) ? VAR27 : VAR28;
            VAR11 = VAR5 & 0xf;
            if (VAR11 == 0)
            {
                fprintf(VAR23, "");
                return 1;
            }
            switch (VAR4[VAR10 + 3] & 0x3)
            {
            case 0x00:
                VAR6 = VAR29;
                break;
            case 0x01:
                VAR6 = VAR30;
                FUN4(VAR2, VAR12, VAR11, VAR4 + VAR10);
                break;
            case 0x02:
                VAR6 = VAR31;
                break;
            case 0x03:
                VAR6 = VAR32;
                break;
            default:
                FUN2("");
                VAR6 = VAR31;
            }
            VAR14 = FUN5(VAR2, VAR12, VAR11);
            assert(VAR14->VAR6 == VAR17);
            VAR14->VAR6 = VAR6;
            VAR14->VAR33 = 0;
            VAR10 += VAR4[VAR10];
        }
    }
    return 0;
}