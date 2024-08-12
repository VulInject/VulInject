static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    int VAR11, VAR12;
    int VAR13 = 128;
    int VAR14;
    VAR7 *VAR15 = VAR3;
    if (!VAR9)
        return 0;
    VAR12 = FUN2(&VAR8[0]);
    VAR11 = FUN2(&VAR8[2]);
    VAR8 += 4;
    if (VAR12 > *VAR4)
    {
        FUN3(VAR2, VAR16, "");
        return -1;
    }
    if (VAR11 > VAR9)
    {
        FUN3(VAR2, VAR16, "");
        return -1;
    }
    *VAR4 = VAR12;
    if (VAR11 == VAR12)
    {
        for (VAR14 = 0; VAR14 < VAR12; VAR14++)
            *VAR15++ = *VAR8++;
        return VAR9;
    }
    while (VAR12 > 0)
    {
        int VAR17;
        uint8_t VAR18;
        VAR17 = (*VAR8) >> 6;
        VAR18 = (*VAR8) & 0x3F;
        VAR8++;
        switch (VAR17)
        {
        case 0:
            for (VAR18++; VAR18 > 0; VAR18--)
            {
                VAR17 = *VAR8++;
                VAR13 += VAR19[VAR17 & 0x3];
                VAR13 = FUN4(VAR13);
                *VAR15++ = VAR13;
                VAR13 += VAR19[(VAR17 >> 2) & 0x3];
                VAR13 = FUN4(VAR13);
                *VAR15++ = VAR13;
                VAR13 += VAR19[(VAR17 >> 4) & 0x3];
                VAR13 = FUN4(VAR13);
                *VAR15++ = VAR13;
                VAR13 += VAR19[(VAR17 >> 6) & 0x3];
                VAR13 = FUN4(VAR13);
                *VAR15++ = VAR13;
                VAR12 -= 4;
            }
            break;
        case 1:
            for (VAR18++; VAR18 > 0; VAR18--)
            {
                VAR17 = *VAR8++;
                VAR13 += VAR20[VAR17 & 0xF];
                VAR13 = FUN4(VAR13);
                *VAR15++ = VAR13;
                VAR13 += VAR20[VAR17 >> 4];
                VAR13 = FUN4(VAR13);
                *VAR15++ = VAR13;
                VAR12 -= 2;
            }
            break;
        case 2:
            if (VAR18 & 0x20)
            {
                int8_t VAR21;
                VAR21 = VAR18;
                VAR21 <<= 3;
                VAR13 += VAR21 >> 3;
                VAR13 = FUN4(VAR13);
                *VAR15++ = VAR13;
                VAR12--;
            }
            else
            {
                for (VAR18++; VAR18 > 0; VAR18--)
                {
                    *VAR15++ = *VAR8++;
                    VAR12--;
                }
                VAR13 = VAR8[-1];
            }
            break;
        default:
            for (VAR18++; VAR18 > 0; VAR18--)
            {
                *VAR15++ = VAR13;
                VAR12--;
            }
        }
    }
    return VAR9;
}