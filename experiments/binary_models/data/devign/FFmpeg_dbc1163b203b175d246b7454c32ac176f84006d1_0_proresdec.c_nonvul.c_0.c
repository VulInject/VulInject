static inline int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, const VAR7 *VAR8)
{
    int VAR9, VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    int VAR16, VAR17;
    VAR11 = 4;
    VAR12 = 2;
    VAR16 = VAR5 << 6;
    VAR10 = VAR5 - 1;
    for (VAR9 = VAR5 - 1; VAR9 < VAR16;)
    {
        VAR14 = VAR18[FUN2(VAR11, 15)];
        VAR15 = VAR19[FUN2(VAR12, 9)];
        VAR17 = FUN3(VAR2);
        if (VAR17 <= 0 || (VAR17 <= VAR20 && !FUN4(VAR2, VAR17)))
            return 0;
        VAR11 = FUN5(VAR2, VAR21[VAR14]);
        if (VAR11 < 0)
            return VAR22;
        VAR17 = FUN3(VAR2);
        if (VAR17 <= 0 || (VAR17 <= VAR20 && !FUN4(VAR2, VAR17)))
            return VAR22;
        VAR12 = FUN5(VAR2, VAR21[VAR15]) + 1;
        if (VAR12 < 0)
            return VAR22;
        VAR9 += VAR11 + 1;
        if (VAR9 >= VAR16)
            break;
        VAR13 = FUN6(VAR2, 1);
        VAR4[((VAR9 & VAR10) << 6) + VAR8[VAR9 >> VAR6]] = (VAR12 ^ VAR13) - VAR13;
    }
    return 0;
}