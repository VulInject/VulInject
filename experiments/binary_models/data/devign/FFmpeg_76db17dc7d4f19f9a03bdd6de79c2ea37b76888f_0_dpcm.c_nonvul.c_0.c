static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    int VAR14, VAR15 = 0;
    int VAR16[2];
    int VAR17 = 0;
    int VAR18 = VAR12->VAR19 - 1;
    short *VAR20 = VAR3;
    int VAR21[2];
    unsigned char VAR22;
    short VAR23;
    if (!VAR9)
        return 0;
    switch (VAR2->VAR24->VAR25)
    {
    case VAR26:
        VAR15 = VAR9 - 8;
        break;
    case VAR27:
        VAR15 = VAR9 - 6 - VAR12->VAR19;
        break;
    case VAR28:
        VAR15 = VAR9 - 2 * VAR12->VAR19;
        break;
    case VAR29:
        if (VAR2->VAR30 != 3)
            VAR15 = VAR9 * 2;
        else
            VAR15 = VAR9;
        break;
    }
    VAR15 *= FUN2(VAR2->VAR31);
    if (*VAR4 < VAR15)
    {
        FUN3(VAR2, VAR32, "");
        return FUN4(VAR33);
    }
    switch (VAR2->VAR24->VAR25)
    {
    case VAR26:
        if (VAR18)
        {
            VAR16[0] = VAR8[7] << 8;
            VAR16[1] = VAR8[6] << 8;
        }
        else
        {
            VAR16[0] = FUN5(&VAR8[6]);
        }
        FUN6(VAR16[0]);
        FUN6(VAR16[1]);
        for (VAR14 = 8; VAR14 < VAR9; VAR14++)
        {
            VAR16[VAR17] += VAR12->VAR34[VAR8[VAR14]];
            VAR16[VAR17] = FUN7(VAR16[VAR17]);
            *VAR20++ = VAR16[VAR17];
            VAR17 ^= VAR18;
        }
        break;
    case VAR27:
        VAR14 = 6;
        VAR16[0] = FUN5(&VAR8[VAR14]);
        VAR14 += 2;
        FUN6(VAR16[0]) *VAR20++ = VAR16[0];
        if (VAR18)
        {
            VAR16[1] = FUN5(&VAR8[VAR14]);
            VAR14 += 2;
            FUN6(VAR16[1]) *VAR20++ = VAR16[1];
        }
        while (VAR14 < VAR9)
        {
            VAR16[VAR17] += VAR35[VAR8[VAR14++]];
            VAR16[VAR17] = FUN7(VAR16[VAR17]);
            *VAR20++ = VAR16[VAR17];
            VAR17 ^= VAR18;
        }
        break;
    case VAR28:
        VAR14 = 0;
        VAR21[0] = VAR21[1] = 4;
        VAR16[0] = FUN5(&VAR8[VAR14]);
        VAR14 += 2;
        FUN6(VAR16[0]);
        if (VAR18)
        {
            VAR16[1] = FUN5(&VAR8[VAR14]);
            VAR14 += 2;
            FUN6(VAR16[1]);
        }
        while (VAR14 < VAR9)
        {
            VAR22 = VAR8[VAR14++];
            VAR23 = (VAR22 & 0xFC) << 8;
            if ((VAR22 & 0x03) == 3)
                VAR21[VAR17]++;
            else
                VAR21[VAR17] -= (2 * (VAR22 & 3));
            if (VAR21[VAR17] < 0)
                VAR21[VAR17] = 0;
            VAR23 >>= VAR21[VAR17];
            VAR16[VAR17] += VAR23;
            VAR16[VAR17] = FUN7(VAR16[VAR17]);
            *VAR20++ = VAR16[VAR17];
            VAR17 ^= VAR18;
        }
        break;
    case VAR29:
        VAR14 = 0;
        if (VAR2->VAR30 != 3)
        {
            while (VAR14 < VAR9)
            {
                int VAR36, VAR37;
                VAR36 = (VAR8[VAR14] >> 4) & 0xF;
                VAR37 = VAR8[VAR14++] & 0xF;
                VAR12->VAR38[0] += VAR12->VAR39[VAR36];
                if (VAR12->VAR38[0] < 0)
                    VAR12->VAR38[0] = 0;
                if (VAR12->VAR38[0] > 255)
                    VAR12->VAR38[0] = 255;
                *VAR20++ = (VAR12->VAR38[0] - 128) << 8;
                VAR12->VAR38[VAR18] += VAR12->VAR39[VAR37];
                if (VAR12->VAR38[VAR18] < 0)
                    VAR12->VAR38[VAR18] = 0;
                if (VAR12->VAR38[VAR18] > 255)
                    VAR12->VAR38[VAR18] = 255;
                *VAR20++ = (VAR12->VAR38[VAR18] - 128) << 8;
            }
        }
        else
        {
            while (VAR14 < VAR9)
            {
                int VAR40;
                VAR40 = VAR8[VAR14++];
                if (VAR40 & 0x80)
                    VAR12->VAR38[VAR17] -= VAR12->VAR39[VAR40 & 0x7F];
                else
                    VAR12->VAR38[VAR17] += VAR12->VAR39[VAR40 & 0x7F];
                VAR12->VAR38[VAR17] = FUN7(VAR12->VAR38[VAR17]);
                *VAR20++ = VAR12->VAR38[VAR17];
                VAR17 ^= VAR18;
            }
        }
        break;
    }
    *VAR4 = VAR15;
    return VAR9;
}