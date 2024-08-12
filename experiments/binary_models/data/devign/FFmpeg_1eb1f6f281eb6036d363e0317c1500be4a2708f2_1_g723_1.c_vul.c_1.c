static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6, VAR7, VAR8, VAR9, VAR10;
    int VAR11;
    VAR6 = VAR5;
    VAR7 = 0;
    for (VAR11 = 0; VAR11 < VAR12; VAR11++)
    {
        int64_t VAR13 = VAR4[VAR11] >> 2;
        VAR13 = FUN2(FUN3(VAR13, VAR13) << 1);
        VAR7 = FUN2(VAR7 + VAR13);
    }
    if (VAR6 && VAR7)
    {
        VAR9 = FUN4(VAR6, 31);
        VAR10 = FUN4(VAR7, 31);
        VAR6 = VAR6 << VAR9 >> 1;
        VAR7 <<= VAR10;
        VAR10 = 5 + VAR9 - VAR10;
        VAR10 = FUN5(0, VAR10);
        VAR8 = (VAR6 >> 1) / (VAR7 >> 16);
        VAR8 = FUN6(VAR8 << 16 >> VAR10);
    }
    else
    {
        VAR8 = 1 << 12;
    }
    for (VAR11 = 0; VAR11 < VAR12; VAR11++)
    {
        VAR2->VAR14 = (15 * VAR2->VAR14 + VAR8 + (1 << 3)) >> 4;
        VAR4[VAR11] = FUN7((VAR4[VAR11] * (VAR2->VAR14 + (VAR2->VAR14 >> 4)) + (1 << 10)) >> 11);
    }
}