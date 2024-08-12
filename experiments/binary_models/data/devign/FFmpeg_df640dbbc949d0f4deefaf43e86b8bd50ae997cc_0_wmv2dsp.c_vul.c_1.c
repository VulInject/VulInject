static void FUN1(short *VAR1)
{
    int VAR2, VAR3;
    int VAR4, VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    VAR5 = VAR12 * VAR1[1] + VAR13 * VAR1[7];
    VAR11 = VAR13 * VAR1[1] - VAR12 * VAR1[7];
    VAR9 = VAR14 * VAR1[5] + VAR15 * VAR1[3];
    VAR7 = VAR15 * VAR1[5] - VAR14 * VAR1[3];
    VAR6 = VAR16 * VAR1[2] + VAR17 * VAR1[6];
    VAR10 = VAR17 * VAR1[2] - VAR16 * VAR1[6];
    VAR4 = VAR18 * VAR1[0] + VAR18 * VAR1[4];
    VAR8 = VAR18 * VAR1[0] - VAR18 * VAR1[4];
    VAR2 = (181 * (VAR5 - VAR9 + VAR11 - VAR7) + 128) >> 8;
    VAR3 = (181 * (VAR5 - VAR9 - VAR11 + VAR7) + 128) >> 8;
    VAR1[0] = (VAR4 + VAR6 + VAR5 + VAR9 + (1 << 7)) >> 8;
    VAR1[1] = (VAR8 + VAR10 + VAR2 + (1 << 7)) >> 8;
    VAR1[2] = (VAR8 - VAR10 + VAR3 + (1 << 7)) >> 8;
    VAR1[3] = (VAR4 - VAR6 + VAR11 + VAR7 + (1 << 7)) >> 8;
    VAR1[4] = (VAR4 - VAR6 - VAR11 - VAR7 + (1 << 7)) >> 8;
    VAR1[5] = (VAR8 - VAR10 - VAR3 + (1 << 7)) >> 8;
    VAR1[6] = (VAR8 + VAR10 - VAR2 + (1 << 7)) >> 8;
    VAR1[7] = (VAR4 + VAR6 - VAR5 - VAR9 + (1 << 7)) >> 8;
}