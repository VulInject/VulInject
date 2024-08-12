static void FUN1(VAR1)(VAR2 **VAR3, const VAR2 **VAR4, VAR5 *VAR6, integer VAR7)
{
    int VAR8;
    for (VAR8 = 0; VAR8 < VAR7; VAR8++)
    {
        INTER VAR9 = VAR4[2][VAR8] * VAR6[0 * 8 + 2] + VAR4[3][VAR8] * VAR6[0 * 8 + 3];
        VAR3[0][VAR8] = FUN2(VAR9 + VAR4[0][VAR8] * (VAR10)VAR6[0 * 8 + 0] + VAR4[4][VAR8] * (VAR10)VAR6[0 * 8 + 4] + VAR4[6][VAR8] * (VAR10)VAR6[0 * 8 + 6]);
        VAR3[1][VAR8] = FUN2(VAR9 + VAR4[1][VAR8] * (VAR10)VAR6[1 * 8 + 1] + VAR4[5][VAR8] * (VAR10)VAR6[1 * 8 + 5] + VAR4[7][VAR8] * (VAR10)VAR6[1 * 8 + 7]);
    }
}