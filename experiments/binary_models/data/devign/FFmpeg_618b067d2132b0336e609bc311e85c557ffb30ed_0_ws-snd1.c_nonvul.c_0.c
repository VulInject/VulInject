static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    int VAR11, VAR12;
    int VAR13 = 128;
    VAR7 *VAR14 = VAR3;
    VAR7 *VAR15;
    if (!VAR9)
        return 0;
    if (VAR9 < 4)
    {
        FUN2(VAR2, VAR16, "");
        return FUN3(VAR17);
    }
    VAR12 = FUN4(&VAR8[0]);
    VAR11 = FUN4(&VAR8[2]);
    VAR8 += 4;
    if (VAR12 > *VAR4)
    {
        FUN2(VAR2, VAR16, "");
        return -1;
    }
    if (VAR11 > VAR9)
    {
        FUN2(VAR2, VAR16, "");
        return -1;
    }
    VAR15 = VAR14 + VAR12;
    if (VAR11 == VAR12)
    {
        memcpy(VAR14, VAR8, VAR12);
        *VAR4 = VAR12;
        return VAR9;
    }
    while (VAR14 < VAR15 && VAR8 - VAR6->VAR3 < VAR9)
    {
        int VAR18, VAR19, VAR10;
        uint8_t VAR20;
        VAR18 = (*VAR8) >> 6;
        VAR20 = (*VAR8) & 0x3F;
        VAR8++;
        switch (VAR18)
        {
        case 0:
            VAR19 = 4;
            break;
        case 1:
            VAR19 = 2;
            break;
        case 2:
            VAR19 = (VAR20 & 0x20) ? 1 : VAR20 + 1;
            break;
        default:
            VAR19 = VAR20 + 1;
            break;
        }
        if (VAR15 - VAR14 < VAR19)
            break;
        VAR10 = ((VAR18 == 2 && (VAR20 & 0x20)) || VAR18 == 3) ? 0 : VAR20 + 1;
        if ((VAR8 - VAR6->VAR3) + VAR10 > VAR9)
            break;
        switch (VAR18)
        {
        case 0:
            for (VAR20++; VAR20 > 0; VAR20--)
            {
                VAR18 = *VAR8++;
                VAR13 += VAR21[VAR18 & 0x3];
                VAR13 = FUN5(VAR13);
                *VAR14++ = VAR13;
                VAR13 += VAR21[(VAR18 >> 2) & 0x3];
                VAR13 = FUN5(VAR13);
                *VAR14++ = VAR13;
                VAR13 += VAR21[(VAR18 >> 4) & 0x3];
                VAR13 = FUN5(VAR13);
                *VAR14++ = VAR13;
                VAR13 += VAR21[(VAR18 >> 6) & 0x3];
                VAR13 = FUN5(VAR13);
                *VAR14++ = VAR13;
            }
            break;
        case 1:
            for (VAR20++; VAR20 > 0; VAR20--)
            {
                VAR18 = *VAR8++;
                VAR13 += VAR22[VAR18 & 0xF];
                VAR13 = FUN5(VAR13);
                *VAR14++ = VAR13;
                VAR13 += VAR22[VAR18 >> 4];
                VAR13 = FUN5(VAR13);
                *VAR14++ = VAR13;
            }
            break;
        case 2:
            if (VAR20 & 0x20)
            {
                int8_t VAR23;
                VAR23 = VAR20;
                VAR23 <<= 3;
                VAR13 += VAR23 >> 3;
                VAR13 = FUN5(VAR13);
                *VAR14++ = VAR13;
            }
            else
            {
                memcpy(VAR14, VAR8, VAR19);
                VAR14 += VAR19;
                VAR8 += VAR19;
                VAR13 = VAR8[-1];
            }
            break;
        default:
            memset(VAR14, VAR13, VAR19);
            VAR14 += VAR19;
        }
    }
    *VAR4 = VAR14 - (VAR7 *)VAR3;
    return VAR9;
}