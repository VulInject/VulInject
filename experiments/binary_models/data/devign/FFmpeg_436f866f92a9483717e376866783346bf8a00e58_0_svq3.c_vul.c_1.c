void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    const int VAR8 = VAR9[VAR6];
    int VAR10;
    VAR1 *VAR11 = VAR12 + VAR13;
    if (VAR7)
    {
        VAR7 = 13 * 13 * ((VAR7 == 1) ? 1538 * VAR4[0] : ((VAR8 * (VAR4[0] >> 3)) / 2));
        VAR4[0] = 0;
    }
    for (VAR10 = 0; VAR10 < 4; VAR10++)
    {
        const int VAR14 = 13 * (VAR4[0 + 4 * VAR10] + VAR4[2 + 4 * VAR10]);
        const int VAR15 = 13 * (VAR4[0 + 4 * VAR10] - VAR4[2 + 4 * VAR10]);
        const int VAR16 = 7 * VAR4[1 + 4 * VAR10] - 17 * VAR4[3 + 4 * VAR10];
        const int VAR17 = 17 * VAR4[1 + 4 * VAR10] + 7 * VAR4[3 + 4 * VAR10];
        VAR4[0 + 4 * VAR10] = VAR14 + VAR17;
        VAR4[1 + 4 * VAR10] = VAR15 + VAR16;
        VAR4[2 + 4 * VAR10] = VAR15 - VAR16;
        VAR4[3 + 4 * VAR10] = VAR14 - VAR17;
    }
    for (VAR10 = 0; VAR10 < 4; VAR10++)
    {
        const int VAR14 = 13 * (VAR4[VAR10 + 4 * 0] + VAR4[VAR10 + 4 * 2]);
        const int VAR15 = 13 * (VAR4[VAR10 + 4 * 0] - VAR4[VAR10 + 4 * 2]);
        const int VAR16 = 7 * VAR4[VAR10 + 4 * 1] - 17 * VAR4[VAR10 + 4 * 3];
        const int VAR17 = 17 * VAR4[VAR10 + 4 * 1] + 7 * VAR4[VAR10 + 4 * 3];
        const int VAR18 = (VAR7 + 0x80000);
        VAR2[VAR10 + VAR5 * 0] = VAR11[VAR2[VAR10 + VAR5 * 0] + (((VAR14 + VAR17) * VAR8 + VAR18) >> 20)];
        VAR2[VAR10 + VAR5 * 1] = VAR11[VAR2[VAR10 + VAR5 * 1] + (((VAR15 + VAR16) * VAR8 + VAR18) >> 20)];
        VAR2[VAR10 + VAR5 * 2] = VAR11[VAR2[VAR10 + VAR5 * 2] + (((VAR15 - VAR16) * VAR8 + VAR18) >> 20)];
        VAR2[VAR10 + VAR5 * 3] = VAR11[VAR2[VAR10 + VAR5 * 3] + (((VAR14 - VAR17) * VAR8 + VAR18) >> 20)];
    }
}