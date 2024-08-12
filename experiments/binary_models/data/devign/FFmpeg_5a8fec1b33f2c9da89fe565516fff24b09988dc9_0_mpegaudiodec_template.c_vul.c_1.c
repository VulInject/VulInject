static void FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    INTFLOAT VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    VAR4 = VAR3[0 * 3];
    VAR5 = VAR3[1 * 3] + VAR3[0 * 3];
    VAR6 = VAR3[2 * 3] + VAR3[1 * 3];
    VAR7 = VAR3[3 * 3] + VAR3[2 * 3];
    VAR8 = VAR3[4 * 3] + VAR3[3 * 3];
    VAR9 = VAR3[5 * 3] + VAR3[4 * 3];
    VAR9 += VAR7;
    VAR7 += VAR5;
    VAR6 = FUN2(VAR6, VAR12, 2);
    VAR7 = FUN2(VAR7, VAR12, 4);
    VAR10 = VAR4 - VAR8;
    VAR11 = FUN2(VAR5 - VAR9, VAR13, 2);
    VAR2[7] = VAR2[10] = VAR10 + VAR11;
    VAR2[1] = VAR2[4] = VAR10 - VAR11;
    VAR4 += FUN3(VAR8, 1);
    VAR8 = VAR4 + VAR6;
    VAR9 += 2 * VAR5;
    VAR5 = FUN2(VAR9 + VAR7, VAR14, 1);
    VAR2[8] = VAR2[9] = VAR8 + VAR5;
    VAR2[2] = VAR2[3] = VAR8 - VAR5;
    VAR4 -= VAR6;
    VAR9 = FUN2(VAR9 - VAR7, VAR15, 2);
    VAR2[0] = VAR2[5] = VAR4 - VAR9;
    VAR2[6] = VAR2[11] = VAR4 + VAR9;
}