static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int *VAR7)
{
    const VAR8 *VAR9 = VAR2->VAR10.VAR9;
    const int *VAR11 = VAR2->VAR12[VAR6];
    int VAR13 = 0;
    int VAR14;
    VAR2->VAR15.FUN2(VAR4);
    VAR4[0] = (VAR4[0] + 2) >> 2;
    for (VAR14 = 1; VAR14 < 64; ++VAR14)
    {
        int VAR16 = VAR9[VAR14];
        int VAR17 = VAR4[VAR16] >> 31;
        int VAR18 = (VAR4[VAR16] ^ VAR17) - VAR17;
        VAR18 = VAR18 * VAR11[VAR16] >> VAR19;
        VAR4[VAR16] = (VAR18 ^ VAR17) - VAR17;
        if (VAR18)
            VAR13 = VAR14;
    }
    return VAR13;
}