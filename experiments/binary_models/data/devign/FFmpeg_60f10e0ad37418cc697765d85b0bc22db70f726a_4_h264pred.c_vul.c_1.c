static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    int VAR5 = 0;
    for (VAR4 = 0; VAR4 < 4; VAR4++)
    {
        VAR5 += VAR2[-1 + VAR4 * VAR3] + VAR2[VAR4 - VAR3];
        VAR5 += VAR2[4 + VAR4 - VAR3];
        VAR5 += VAR2[-1 + (VAR4 + 4) * VAR3];
    }
    VAR5 = 0x01010101 * ((VAR5 + 8) >> 4);
    for (VAR4 = 0; VAR4 < 4; VAR4++)
    {
        ((VAR6 *)(VAR2 + VAR4 * VAR3))[0] = VAR5;
        ((VAR6 *)(VAR2 + VAR4 * VAR3))[1] = VAR5;
    }
    for (VAR4 = 4; VAR4 < 8; VAR4++)
    {
        ((VAR6 *)(VAR2 + VAR4 * VAR3))[0] = VAR5;
        ((VAR6 *)(VAR2 + VAR4 * VAR3))[1] = VAR5;
    }
}