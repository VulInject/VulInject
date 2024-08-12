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
        return -FUN1(-FUN3(VAR2, -VAR9), VAR3, VAR4, VAR5 ^ ((VAR5 >> 1) & 1));
    if (VAR5 == VAR10)
        VAR6 = VAR4 / 2;
    else if (VAR5 & 1)
        VAR6 = VAR4 - 1;
    if (VAR3 <= VAR11 && VAR4 <= VAR11)
    {
        if (VAR2 <= VAR11)
            return (VAR2 * VAR3 + VAR6) / VAR4;
        else
            return VAR2 / VAR4 * VAR3 + (VAR2 % VAR4 * VAR3 + VAR6) / VAR4;
    }
    else
    {
        uint64_t VAR12 = VAR2 & 0xFFFFFFFF;
        uint64_t VAR13 = VAR2 >> 32;
        uint64_t VAR14 = VAR3 & 0xFFFFFFFF;
        uint64_t VAR15 = VAR3 >> 32;
        uint64_t VAR16 = VAR12 * VAR15 + VAR13 * VAR14;
        uint64_t VAR17 = VAR16 << 32;
        int VAR18;
        VAR12 = VAR12 * VAR14 + VAR17;
        VAR13 = VAR13 * VAR15 + (VAR16 >> 32) + (VAR12 < VAR17);
        VAR12 += VAR6;
        VAR13 += VAR12 < VAR6;
        for (VAR18 = 63; VAR18 >= 0; VAR18--)
        {
            VAR13 += VAR13 + ((VAR12 >> VAR18) & 1);
            VAR16 += VAR16;
            if (VAR4 <= VAR13)
            {
                VAR13 -= VAR4;
                VAR16++;
            }
        }
        return VAR16;
    }
    AVInteger VAR19;
    VAR19 = FUN4(FUN5(VAR2), FUN5(VAR3));
    VAR19 = FUN6(VAR19, FUN5(VAR6));
    return FUN7(FUN8(VAR19, FUN5(VAR4)));
}