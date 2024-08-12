VAR1 FUN1(int64_t VAR2, int64_t VAR3, int64_t VAR4, enum AVRounding VAR5)
{
    int64_t VAR6 = 0;
    FUN2(VAR4 > 0);
    FUN2(VAR3 >= 0);
    FUN2((unsigned)(VAR5 & ~VAR7) <= 5 && (VAR5 & ~VAR7) != 4);
    if (VAR4 <= 0 || VAR3 < 0 || !((unsigned)(VAR5 & ~VAR7) <= 5 && (VAR5 & ~VAR7) != 4))
        return VAR8;
    if (VAR5 & VAR7)
    {
        if (VAR2 == VAR8 || VAR2 == VAR9)
            return VAR2;
        VAR5 -= VAR7;
    }
    if (VAR2 < 0)
        return -(VAR10)FUN1(-FUN3(VAR2, -VAR9), VAR3, VAR4, VAR5 ^ ((VAR5 >> 1) & 1));
    if (VAR5 == VAR11)
        VAR6 = VAR4 / 2;
    else if (VAR5 & 1)
        VAR6 = VAR4 - 1;
    if (VAR3 <= VAR12 && VAR4 <= VAR12)
    {
        if (VAR2 <= VAR12)
            return (VAR2 * VAR3 + VAR6) / VAR4;
        else
        {
            int64_t VAR13 = VAR2 / VAR4;
            int64_t VAR14 = (VAR2 % VAR4 * VAR3 + VAR6) / VAR4;
            if (VAR13 >= VAR15 && VAR13 > (VAR9 - VAR14) / VAR3)
                return VAR8;
            return VAR13 * VAR3 + VAR14;
        }
    }
    else
    {
        uint64_t VAR16 = VAR2 & 0xFFFFFFFF;
        uint64_t VAR17 = VAR2 >> 32;
        uint64_t VAR18 = VAR3 & 0xFFFFFFFF;
        uint64_t VAR19 = VAR3 >> 32;
        uint64_t VAR20 = VAR16 * VAR19 + VAR17 * VAR18;
        uint64_t VAR21 = VAR20 << 32;
        int VAR22;
        VAR16 = VAR16 * VAR18 + VAR21;
        VAR17 = VAR17 * VAR19 + (VAR20 >> 32) + (VAR16 < VAR21);
        VAR16 += VAR6;
        VAR17 += VAR16 < VAR6;
        for (VAR22 = 63; VAR22 >= 0; VAR22--)
        {
            VAR17 += VAR17 + ((VAR16 >> VAR22) & 1);
            VAR20 += VAR20;
            if (VAR4 <= VAR17)
            {
                VAR17 -= VAR4;
                VAR20++;
            }
        }
        if (VAR20 > VAR9)
            return VAR8;
        return VAR20;
    }
    AVInteger VAR23;
    VAR23 = FUN4(FUN5(VAR2), FUN5(VAR3));
    VAR23 = FUN6(VAR23, FUN5(VAR6));
    return FUN7(FUN8(VAR23, FUN5(VAR4)));
}
}