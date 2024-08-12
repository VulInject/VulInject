static void FUN1(INTFLOAT VAR1[VAR2])
{
    VAR1[0] = (int)(((VAR3)(VAR1[0] + (VAR1[1] >> 1)) * 1431655765 + 0x40000000) >> 31);
    VAR1[1] = (int)(((VAR3)((VAR1[1] >> 1) + VAR1[2]) * 1431655765 + 0x40000000) >> 31);
    VAR1[2] = (int)(((VAR3)(VAR1[3] + (VAR1[4] >> 1)) * 1431655765 + 0x40000000) >> 31);
    VAR1[3] = (int)(((VAR3)((VAR1[4] >> 1) + VAR1[5]) * 1431655765 + 0x40000000) >> 31);
    VAR1[0] = (2 * VAR1[0] + VAR1[1]) * 0.33333333f;
    VAR1[1] = (VAR1[1] + 2 * VAR1[2]) * 0.33333333f;
    VAR1[2] = (2 * VAR1[3] + VAR1[4]) * 0.33333333f;
    VAR1[3] = (VAR1[4] + 2 * VAR1[5]) * 0.33333333f;
    VAR1[4] = FUN2(VAR1[6], VAR1[7]);
    VAR1[5] = FUN2(VAR1[8], VAR1[9]);
    VAR1[6] = VAR1[10];
    VAR1[7] = VAR1[11];
    VAR1[8] = FUN2(VAR1[12], VAR1[13]);
    VAR1[9] = FUN2(VAR1[14], VAR1[15]);
    VAR1[10] = VAR1[16];
    VAR1[11] = VAR1[17];
    VAR1[12] = VAR1[18];
    VAR1[13] = VAR1[19];
    VAR1[14] = FUN2(VAR1[20], VAR1[21]);
    VAR1[15] = FUN2(VAR1[22], VAR1[23]);
    VAR1[16] = FUN2(VAR1[24], VAR1[25]);
    VAR1[17] = FUN2(VAR1[26], VAR1[27]);
    VAR1[18] = (((VAR1[28] + 2) >> 2) + ((VAR1[29] + 2) >> 2) + ((VAR1[30] + 2) >> 2) + ((VAR1[31] + 2) >> 2));
    VAR1[18] = (VAR1[28] + VAR1[29] + VAR1[30] + VAR1[31]) * 0.25f;
    VAR1[19] = FUN2(VAR1[32], VAR1[33]);
}