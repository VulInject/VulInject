static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 *VAR7)
{
    uint16_t VAR8[9];
    VAR9 *VAR10 = VAR8 + 2;
    int VAR11 = VAR2->VAR12[VAR5], VAR13, VAR14, VAR15, VAR16, VAR17, VAR18 = 0;
    if (VAR2->VAR19[VAR5] > 0)
        while (VAR11 + VAR2->VAR20 < 1)
            VAR11 += VAR7->VAR21;
    if (VAR2->VAR19[0] > 0)
    {
        if (VAR5 == 0)
        {
            VAR16 = 32;
        }
        else
        {
            VAR16 = 8;
            if (VAR2->VAR19[VAR5] > 0)
                VAR11 = VAR2->VAR22;
        }
    }
    else
        VAR16 = 16;
    VAR13 = VAR2->VAR19[VAR5] > 0 ? VAR11 - VAR16 / 2 : 0;
    memset(&VAR10[-2], 0, 2 * sizeof(VAR10[0]));
    memset(VAR10, -1, 5 * sizeof(VAR10[0]));
    memset(&VAR10[5], 0, 2 * sizeof(VAR10[0]));
    if (VAR2->VAR19[VAR5] > 0)
        for (VAR15 = VAR11; VAR15 < VAR23 / 2; VAR15 += VAR7->VAR21)
        {
            int VAR24 = VAR2->VAR20;
            VAR9 *VAR25 = &VAR10[VAR15 >> 4];
            int VAR26 = 16 - (VAR15 & 15);
            *VAR25++ &= 0xFFFF << VAR26;
            VAR24 -= VAR26;
            if (VAR24 >= 16)
            {
                *VAR25++ = 0;
                *VAR25 &= 0xFFFF >> (VAR24 - 16);
            }
            else
                *VAR25 &= 0xFFFF >> VAR24;
        }
    VAR17 = FUN2(VAR4, VAR2->VAR19[0] > 0 ? 5 - 2 * VAR5 : 4);
    for (VAR14 = 0; VAR14 <= VAR17; VAR13++)
    {
        for (VAR15 = VAR13; VAR15 < 0; VAR15 += VAR7->VAR21)
            ;
        if (VAR15 >= VAR23 / 2)
        {
            if (VAR10[0])
                VAR15 = 0x0F;
            else if (VAR10[1])
                VAR15 = 0x1F;
            else if (VAR10[2])
                VAR15 = 0x2F;
            else if (VAR10[3])
                VAR15 = 0x3F;
            else if (VAR10[4])
                VAR15 = 0x4F;
            else
                return;
            VAR15 -= FUN3(VAR10[VAR15 >> 4]);
        }
        if (VAR10[VAR15 >> 4] & (0x8000 >> (VAR15 & 15)))
        {
            VAR10[VAR15 >> 4] &= ~(0x8000 >> (VAR15 & 15));
            VAR14++;
            VAR18 = VAR15;
        }
    }
    VAR7->VAR27[VAR7->VAR14] = VAR18;
    VAR7->VAR28[VAR7->VAR14] = FUN4(VAR4) ? -1.0 : 1.0;
    VAR7->VAR14++;
    VAR14 = (VAR23 / 2 - VAR18) % VAR7->VAR21;
    VAR2->VAR22 = VAR14 ? VAR7->VAR21 - VAR14 : 0;
}