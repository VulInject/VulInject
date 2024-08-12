static inline int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    int VAR5 = VAR3 & VAR4;
    if (!VAR5)
    {
        while (!(VAR3 = FUN2(VAR2)))
            VAR5 += 255;
        VAR5 += VAR4 + VAR3;
    }
    return VAR5;
}