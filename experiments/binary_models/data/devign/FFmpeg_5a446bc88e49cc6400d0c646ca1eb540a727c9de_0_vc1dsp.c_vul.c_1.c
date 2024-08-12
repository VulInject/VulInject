static void FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    int VAR5, VAR6, VAR7, VAR8;
    int VAR9, VAR10;
    int VAR11 = 1;
    for (VAR4 = 0; VAR4 < 8; VAR4++)
    {
        VAR5 = VAR2[-2 * VAR3];
        VAR6 = VAR2[-VAR3];
        VAR7 = VAR2[0];
        VAR8 = VAR2[VAR3];
        VAR9 = (VAR5 - VAR8 + 3 + VAR11) >> 3;
        VAR10 = (VAR5 - VAR8 + VAR6 - VAR7 + 4 - VAR11) >> 3;
        VAR2[-2 * VAR3] = VAR5 - VAR9;
        VAR2[-VAR3] = VAR6 - VAR10;
        VAR2[0] = VAR7 + VAR10;
        VAR2[VAR3] = VAR8 + VAR9;
        VAR2++;
        VAR11 = !VAR11;
    }
}