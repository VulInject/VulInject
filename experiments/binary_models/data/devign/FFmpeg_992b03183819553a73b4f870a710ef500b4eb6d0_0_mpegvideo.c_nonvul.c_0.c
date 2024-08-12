static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10)
{
    int VAR11, VAR12, VAR13, VAR14;
    VAR3 = FUN2(VAR3, 0, VAR7 - 1);
    VAR4 = FUN2(VAR4, 0, VAR8 - 1);
    VAR5 = FUN2(VAR5, 0, VAR7 - 1);
    VAR6 = FUN2(VAR6, 0, VAR8 - 1);
    VAR2[VAR4 * VAR9 + VAR3] += VAR10;
    if (FUN3(VAR5 - VAR3) > FUN3(VAR6 - VAR4))
    {
        if (VAR3 > VAR5)
        {
            FUN4(int, VAR3, VAR5);
            FUN4(int, VAR4, VAR6);
        }
        VAR2 += VAR3 + VAR4 * VAR9;
        VAR5 -= VAR3;
        VAR14 = ((VAR6 - VAR4) << 16) / VAR5;
        for (VAR11 = 0; VAR11 <= VAR5; VAR11++)
        {
            VAR12 = (VAR11 * VAR14) >> 16;
            VAR13 = (VAR11 * VAR14) & 0xFFFF;
            VAR2[VAR12 * VAR9 + VAR11] += (VAR10 * (0x10000 - VAR13)) >> 16;
            VAR2[(VAR12 + 1) * VAR9 + VAR11] += (VAR10 * VAR13) >> 16;
        }
    }
    else
    {
        if (VAR4 > VAR6)
        {
            FUN4(int, VAR3, VAR5);
            FUN4(int, VAR4, VAR6);
        }
        VAR2 += VAR3 + VAR4 * VAR9;
        VAR6 -= VAR4;
        if (VAR6)
            VAR14 = ((VAR5 - VAR3) << 16) / VAR6;
        else
            VAR14 = 0;
        for (VAR12 = 0; VAR12 = VAR6; VAR12++)
        {
            VAR11 = (VAR12 * VAR14) >> 16;
            VAR13 = (VAR12 * VAR14) & 0xFFFF;
            VAR2[VAR12 * VAR9 + VAR11] += (VAR10 * (0x10000 - VAR13)) >> 16;
            VAR2[VAR12 * VAR9 + VAR11 + 1] += (VAR10 * VAR13) >> 16;
        }
    }
}