static void FUN1(int *VAR1, int *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10;
    VAR3 = VAR2[0 * 3] << 5;
    VAR4 = (VAR2[1 * 3] + VAR2[0 * 3]) << 5;
    VAR5 = (VAR2[2 * 3] + VAR2[1 * 3]) << 5;
    VAR6 = (VAR2[3 * 3] + VAR2[2 * 3]) << 5;
    VAR7 = (VAR2[4 * 3] + VAR2[3 * 3]) << 5;
    VAR8 = (VAR2[5 * 3] + VAR2[4 * 3]) << 5;
    VAR8 += VAR6;
    VAR6 += VAR4;
    VAR5 = FUN2(2 * VAR5, VAR11);
    VAR6 = FUN2(2 * VAR6, VAR11);
    VAR9 = VAR3 - VAR7;
    VAR10 = FUN3(VAR4 - VAR8, VAR12[4]);
    VAR1[7] = VAR1[10] = VAR9 + VAR10;
    VAR1[1] = VAR1[4] = VAR9 - VAR10;
    VAR3 += VAR7 >> 1;
    VAR7 = VAR3 + VAR5;
    VAR4 += VAR8 >> 1;
    VAR8 = FUN3(VAR4 + VAR6, VAR12[1]);
    VAR1[8] = VAR1[9] = VAR7 + VAR8;
    VAR1[2] = VAR1[3] = VAR7 - VAR8;
    VAR3 -= VAR5;
    VAR4 = FUN3(VAR4 - VAR6, VAR12[7]);
    VAR1[0] = VAR1[5] = VAR3 - VAR4;
    VAR1[6] = VAR1[11] = VAR3 + VAR4;
}