void FUN1(const VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5;
    const FUN2(*VAR6)[2];
    const int VAR7 = FUN3(VAR4->VAR8 - 6 * (VAR2->VAR9.VAR10->VAR11 - 8), 0, 51);
    if (VAR4->VAR12 == VAR13)
        VAR6 = VAR14;
    else
        VAR6 = VAR15[VAR4->VAR16];
    for (VAR5 = 0; VAR5 < 1024; VAR5++)
    {
        int VAR17 = 2 * (((VAR6[VAR5][0] * VAR7) >> 4) + VAR6[VAR5][1]) - 127;
        VAR17 ^= VAR17 >> 31;
        if (VAR17 > 124)
            VAR17 = 124 + (VAR17 & 1);
        VAR4->VAR18[VAR5] = VAR17;
    }
}