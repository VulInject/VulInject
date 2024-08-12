static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int VAR8, int VAR9, int VAR10, int VAR11, ptrdiff_t VAR12)
{
    VAR13 *VAR14 = VAR2->VAR15;
    VAR16 *VAR17 = &VAR14->VAR18;
    unsigned VAR19, VAR20, VAR21, VAR22, VAR23, VAR24 = 0, VAR25 = 0, VAR26;
    int VAR27, VAR28, VAR29, VAR30, VAR31, VAR32, VAR33 = 0;
    int64_t VAR34 = 3, VAR35;
    if ((VAR27 = FUN2(VAR17, VAR4, FUN3(&VAR14->VAR36))) < 0)
        return VAR27;
    if ((VAR9 >= 0) + (VAR9 ^ (VAR9 >> 31)) - (VAR9 >> 31) != 1)
    {
        VAR22 = 33 - FUN4((VAR9 >= 0) + (VAR9 ^ (VAR9 >> 31)) - (VAR9 >> 31) - 1);
        if (VAR22 > 16)
            return VAR37;
    }
    else
    {
        VAR22 = 1;
    }
    VAR23 = 25 - VAR22;
    while (VAR24 < VAR7)
    {
        if (VAR34 >> 8 != -3)
        {
            VAR30 = FUN4((VAR34 >> 8) + 3) ^ 0x1F;
        }
        else
        {
            VAR30 = -1;
        }
        VAR19 = FUN5(VAR17, 0, VAR23);
        if (VAR19 >= VAR23)
        {
            VAR19 = FUN6(VAR17, VAR22);
        }
        else
        {
            VAR29 = 14 + ((((VAR38)(VAR30 - 14)) >> 32) & (VAR30 - 14));
            VAR19 *= (1 << VAR29) - 1;
            VAR20 = FUN7(VAR17, VAR29);
            if (VAR20 <= 1)
            {
                FUN8(VAR17, VAR29 - 1);
            }
            else
            {
                FUN8(VAR17, VAR29);
                VAR19 += VAR20 - 1;
            }
        }
        VAR32 = VAR33 + VAR19;
        VAR31 = VAR32;
        if (VAR33 + VAR19 == 0)
        {
            VAR30 = 0;
        }
        else
        {
            VAR32 &= 1u;
            VAR35 = VAR8 * ((VAR31 + 1) >> 1) + (VAR8 >> 1);
            VAR30 = VAR32 + (VAR35 ^ -VAR32);
        }
        VAR24++;
        VAR6[VAR25++] = VAR30;
        if (VAR25 == VAR11)
        {
            VAR25 = 0;
            VAR6 += VAR12;
        }
        VAR34 += VAR10 * VAR31 - (VAR10 * VAR34 >> 8);
        VAR33 = 0;
        if (VAR34 * 4 > 0xFF || VAR24 >= VAR7)
            continue;
        VAR29 = ((VAR34 + 8) >> 5) + (VAR34 ? FUN4(VAR34) : 32) - 24;
        VAR28 = FUN9(16383, VAR29);
        VAR19 = FUN5(VAR17, 0, 8);
        if (VAR19 < 8)
        {
            if (VAR29 < 1 || VAR29 > 25)
                return VAR37;
            VAR30 = FUN7(VAR17, VAR29);
            if (VAR30 > 1)
            {
                FUN8(VAR17, VAR29);
                VAR21 = VAR30 + VAR28 * VAR19 - 1;
            }
            else
            {
                FUN8(VAR17, VAR29 - 1);
                VAR21 = VAR28 * VAR19;
            }
        }
        else
        {
            if (FUN10(VAR17))
                VAR30 = FUN6(VAR17, 16);
            else
                VAR30 = FUN6(VAR17, 8);
            VAR21 = VAR30 + 8 * VAR28;
        }
        if (VAR21 > 0xFFFF || VAR24 + VAR21 > VAR7)
            return VAR37;
        VAR24 += VAR21;
        for (VAR26 = 0; VAR26 < VAR21; VAR26++)
        {
            VAR6[VAR25++] = 0;
            if (VAR25 == VAR11)
            {
                VAR25 = 0;
                VAR6 += VAR12;
            }
        }
        VAR34 = 0;
        VAR33 = VAR21 < 0xFFFF ? 1 : 0;
    }
    FUN11(VAR17);
    return FUN12(VAR17) >> 3;
}