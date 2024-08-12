static int FUN1(VAR1 *VAR2)
{
    uint32_t VAR3 = -1;
    int VAR4 = 0, VAR5 = 0, VAR6 = 0, VAR7 = 0, VAR8 = 0, VAR9 = 0;
    int VAR10;
    int VAR11 = 0;
    for (VAR10 = 0; VAR10 < VAR2->VAR12; VAR10++)
    {
        VAR3 = (VAR3 << 8) + VAR2->VAR13[VAR10];
        if ((VAR3 & 0xffffff00) == 0x100)
        {
            int VAR14 = VAR2->VAR13[VAR10 + 1] << 8 | VAR2->VAR13[VAR10 + 2];
            int VAR15 = FUN2(VAR2->VAR13 + VAR10, VAR2->VAR13 + VAR2->VAR12);
            int VAR16 = FUN3(VAR2->VAR13 + VAR10);
            if (VAR3 == VAR17)
                VAR4++;
            else if (VAR3 == VAR18 && VAR16)
                VAR5++;
            else if ((VAR3 & 0xf0) == VAR19 && VAR15)
                VAR7++;
            else if ((VAR3 & 0xe0) == VAR20 && VAR15)
            {
                VAR8++;
                VAR10 += VAR14;
            }
            else if (VAR3 == VAR21 && VAR15)
            {
                VAR6++;
                VAR10 += VAR14;
            }
            else if ((VAR3 & 0xf0) == VAR19 && !VAR15)
                VAR9++;
            else if ((VAR3 & 0xe0) == VAR20 && !VAR15)
                VAR9++;
            else if (VAR3 == VAR21 && !VAR15)
                VAR9++;
        }
    }
    if (VAR7 + VAR8 > VAR9)
        VAR11 = VAR22 / 4;
    if (VAR4 > VAR9 && VAR4 * 9 <= VAR5 * 10)
        return VAR5 > 2 ? VAR22 / 2 + 2 : VAR22 / 4;
    if (VAR5 > VAR9 && (VAR6 + VAR7 + VAR8) * 10 >= VAR5 * 9)
        return VAR5 > 2 ? VAR22 / 2 + 2 : VAR22 / 4;
    if ((!!VAR7 ^ !!VAR8) && (VAR8 > 4 || VAR7 > 1) && !VAR4 && !VAR5 && VAR2->VAR12 > 2048 && VAR7 + VAR8 > VAR9)
        return (VAR8 > 12 || VAR7 > 3) ? VAR22 / 2 + 2 : VAR22 / 4;
    return VAR11;
}