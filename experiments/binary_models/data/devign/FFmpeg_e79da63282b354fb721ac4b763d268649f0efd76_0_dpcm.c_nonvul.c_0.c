static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    const VAR7 *VAR11 = VAR8 + VAR9;
    VAR12 *VAR13 = VAR2->VAR14;
    int VAR15 = 0;
    int VAR16[2];
    int VAR17 = 0;
    int VAR18 = VAR13->VAR19 - 1;
    VAR20 *VAR21 = VAR3;
    switch (VAR2->VAR22->VAR23)
    {
    case VAR24:
        VAR15 = VAR9 - 8;
        break;
    case VAR25:
        VAR15 = VAR9 - 6 - VAR13->VAR19;
        break;
    case VAR26:
        VAR15 = VAR9 - 2 * VAR13->VAR19;
        break;
    case VAR27:
        if (VAR2->VAR28 != 3)
            VAR15 = VAR9 * 2;
        else
            VAR15 = VAR9;
        break;
    }
    VAR15 *= FUN2(VAR2->VAR29);
    if (VAR15 < 0)
    {
        FUN3(VAR2, VAR30, "");
        return FUN4(VAR31);
    }
    if (*VAR4 < VAR15)
    {
        FUN3(VAR2, VAR30, "");
        return FUN4(VAR31);
    }
    switch (VAR2->VAR22->VAR23)
    {
    case VAR24:
        VAR8 += 6;
        if (VAR18)
        {
            VAR16[1] = (VAR20)(FUN5(&VAR8) << 8);
            VAR16[0] = (VAR20)(FUN5(&VAR8) << 8);
        }
        else
        {
            VAR16[0] = (VAR20)FUN6(&VAR8);
        }
        while (VAR8 < VAR11)
        {
            VAR16[VAR17] += VAR13->VAR32[*VAR8++];
            VAR16[VAR17] = FUN7(VAR16[VAR17]);
            *VAR21++ = VAR16[VAR17];
            VAR17 ^= VAR18;
        }
        break;
    case VAR25:
        VAR8 += 6;
        for (VAR17 = 0; VAR17 < VAR13->VAR19; VAR17++)
        {
            VAR16[VAR17] = (VAR20)FUN6(&VAR8);
            *VAR21++ = VAR16[VAR17];
        }
        VAR17 = 0;
        while (VAR8 < VAR11)
        {
            VAR16[VAR17] += VAR33[*VAR8++];
            VAR16[VAR17] = FUN7(VAR16[VAR17]);
            *VAR21++ = VAR16[VAR17];
            VAR17 ^= VAR18;
        }
        break;
    case VAR26:
    {
        int VAR34[2] = {4, 4};
        for (VAR17 = 0; VAR17 < VAR13->VAR19; VAR17++)
            VAR16[VAR17] = (VAR20)FUN6(&VAR8);
        VAR17 = 0;
        while (VAR8 < VAR11)
        {
            uint8_t VAR35 = *VAR8++;
            int16_t VAR36 = (VAR35 & 0xFC) << 8;
            if ((VAR35 & 0x03) == 3)
                VAR34[VAR17]++;
            else
                VAR34[VAR17] -= (2 * (VAR35 & 3));
            if (VAR34[VAR17] < 0)
                VAR34[VAR17] = 0;
            VAR36 >>= VAR34[VAR17];
            VAR16[VAR17] += VAR36;
            VAR16[VAR17] = FUN7(VAR16[VAR17]);
            *VAR21++ = VAR16[VAR17];
            VAR17 ^= VAR18;
        }
        break;
    }
    case VAR27:
        if (VAR2->VAR28 != 3)
        {
            VAR7 *VAR37 = VAR3;
            while (VAR8 < VAR11)
            {
                uint8_t VAR35 = *VAR8++;
                VAR13->VAR38[0] += VAR13->VAR39[VAR35 >> 4];
                VAR13->VAR38[0] = FUN8(VAR13->VAR38[0]);
                *VAR37++ = VAR13->VAR38[0];
                VAR13->VAR38[VAR18] += VAR13->VAR39[VAR35 & 0x0F];
                VAR13->VAR38[VAR18] = FUN8(VAR13->VAR38[VAR18]);
                *VAR37++ = VAR13->VAR38[VAR18];
            }
        }
        else
        {
            while (VAR8 < VAR11)
            {
                uint8_t VAR35 = *VAR8++;
                if (VAR35 & 0x80)
                    VAR13->VAR38[VAR17] -= VAR40[VAR35 & 0x7F];
                else
                    VAR13->VAR38[VAR17] += VAR40[VAR35 & 0x7F];
                VAR13->VAR38[VAR17] = FUN7(VAR13->VAR38[VAR17]);
                *VAR21++ = VAR13->VAR38[VAR17];
                VAR17 ^= VAR18;
            }
        }
        break;
    }
    *VAR4 = VAR15;
    return VAR9;
}