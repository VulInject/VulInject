static av_always_inline av_flatten void FUN1(VAR1)(VAR2 *VAR3, int VAR4, int VAR5, int VAR6, int VAR7, int VAR8, VAR9 *VAR10)
{
    VAR11 *VAR12 = (VAR11 *)VAR3;
    int VAR13, VAR14;
    VAR4 >>= sizeof(VAR11) - 1;
    VAR5 >>= sizeof(VAR11) - 1;
    VAR7 <<= VAR15 - 8;
    VAR8 <<= VAR15 - 8;
    for (VAR13 = 0; VAR13 < 4; VAR13++)
    {
        const int VAR16 = VAR10[VAR13] * (1 << (VAR15 - 8));
        if (VAR16 < 0)
        {
            VAR12 += VAR6 * VAR5;
            continue;
        }
        for (VAR14 = 0; VAR14 < VAR6; VAR14++)
        {
            const int VAR17 = VAR12[-1 * VAR4];
            const int VAR18 = VAR12[-2 * VAR4];
            const int VAR19 = VAR12[-3 * VAR4];
            const int VAR20 = VAR12[0];
            const int VAR21 = VAR12[1 * VAR4];
            const int VAR22 = VAR12[2 * VAR4];
            if (FUN2(VAR17 - VAR20) < VAR7 && FUN2(VAR18 - VAR17) < VAR8 && FUN2(VAR21 - VAR20) < VAR8)
            {
                int VAR23 = VAR16;
                int VAR24;
                if (FUN2(VAR19 - VAR17) < VAR8)
                {
                    if (VAR16)
                        VAR12[-2 * VAR4] = VAR18 + FUN3(((VAR19 + ((VAR17 + VAR20 + 1) >> 1)) >> 1) - VAR18, -VAR16, VAR16);
                    VAR23++;
                }
                if (FUN2(VAR22 - VAR20) < VAR8)
                {
                    if (VAR16)
                        VAR12[VAR4] = VAR21 + FUN3(((VAR22 + ((VAR17 + VAR20 + 1) >> 1)) >> 1) - VAR21, -VAR16, VAR16);
                    VAR23++;
                }
                VAR24 = FUN3((((VAR20 - VAR17) * 4) + (VAR18 - VAR21) + 4) >> 3, -VAR23, VAR23);
                VAR12[-VAR4] = FUN4(VAR17 + VAR24);
                VAR12[0] = FUN4(VAR20 - VAR24);
            }
            VAR12 += VAR5;
        }
    }
}