static int FUN1(VAR1 *VAR2, int64_t VAR3, int VAR4, VAR5 *VAR6)
{
    int VAR7;
    int VAR8;
    assert(VAR4 <= VAR2->VAR9);
    while (VAR4 > 0)
    {
        VAR10 *VAR11;
        int64_t VAR12;
        FUN2(VAR2, VAR3);
        VAR11 = VAR2->VAR13[VAR2->VAR14];
        VAR12 = VAR2->VAR15[VAR2->VAR14];
        VAR7 = FUN3(VAR4, VAR12 - (VAR3 - VAR2->VAR16));
        VAR8 = FUN4(VAR11, VAR3 - VAR2->VAR16, VAR6, VAR7);
        if (VAR8 < 0)
        {
            return VAR8;
        }
        VAR3 += VAR7;
        VAR4 -= VAR7;
        VAR6 += VAR7 * VAR17;
    }
    return 0;
}