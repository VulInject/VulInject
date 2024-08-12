static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, unsigned char VAR5, signed char VAR6, signed char VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    unsigned char *VAR13, *VAR14;
    VAR8 = VAR3 + 8 - (VAR5 >> 4) - VAR6;
    VAR9 = VAR4 + 8 - (VAR5 & 0xf) - VAR7;
    if ((VAR8 < 0) || (VAR8 > VAR2->VAR15->VAR16 - 8) || (VAR9 < 0) || (VAR9 > VAR2->VAR15->VAR17 - 8))
    {
        FUN2(VAR2->VAR15, VAR18, "", VAR8, VAR9, VAR2->VAR15->VAR16, VAR2->VAR15->VAR17);
        return;
    }
    VAR13 = VAR2->VAR19.VAR20[0] + (VAR4 * VAR2->VAR21) + VAR3;
    VAR14 = VAR2->VAR22.VAR20[0] + (VAR9 * VAR2->VAR21) + VAR8;
    for (VAR10 = 0; VAR10 < 8; VAR10++)
    {
        VAR13[0] = VAR14[0];
        VAR13[1] = VAR14[1];
        VAR13[2] = VAR14[2];
        VAR13[3] = VAR14[3];
        VAR13[4] = VAR14[4];
        VAR13[5] = VAR14[5];
        VAR13[6] = VAR14[6];
        VAR13[7] = VAR14[7];
        VAR13 += VAR2->VAR21;
        VAR14 += VAR2->VAR21;
    }
    VAR12 = VAR2->VAR23;
    VAR13 = VAR2->VAR19.VAR20[1] + (VAR4 * VAR2->VAR21) / 4 + VAR3 / 2;
    VAR14 = VAR2->VAR22.VAR20[1] + (VAR9 / 2) * (VAR2->VAR21 / 2) + (VAR8 + 1) / 2;
    for (VAR11 = 0; VAR11 < 2; VAR11++)
    {
        for (VAR10 = 0; VAR10 < 4; VAR10++)
        {
            switch (((VAR9 & 0x01) << 1) | (VAR8 & 0x01))
            {
            case 0:
                VAR13[0] = VAR14[0];
                VAR13[1] = VAR14[1];
                VAR13[2] = VAR14[2];
                VAR13[3] = VAR14[3];
                break;
            case 1:
                VAR13[0] = FUN3(VAR14[0], VAR14[1]);
                VAR13[1] = FUN3(VAR14[1], VAR14[2]);
                VAR13[2] = FUN3(VAR14[2], VAR14[3]);
                VAR13[3] = FUN3(VAR14[3], VAR14[4]);
                break;
            case 2:
                VAR13[0] = FUN3(VAR14[0], VAR14[VAR12]);
                VAR13[1] = FUN3(VAR14[1], VAR14[VAR12 + 1]);
                VAR13[2] = FUN3(VAR14[2], VAR14[VAR12 + 2]);
                VAR13[3] = FUN3(VAR14[3], VAR14[VAR12 + 3]);
                break;
            case 3:
                VAR13[0] = FUN4(VAR14[0], VAR14[1], VAR14[VAR12], VAR14[VAR12 + 1]);
                VAR13[1] = FUN4(VAR14[1], VAR14[2], VAR14[VAR12 + 1], VAR14[VAR12 + 2]);
                VAR13[2] = FUN4(VAR14[2], VAR14[3], VAR14[VAR12 + 2], VAR14[VAR12 + 3]);
                VAR13[3] = FUN4(VAR14[3], VAR14[4], VAR14[VAR12 + 3], VAR14[VAR12 + 4]);
                break;
            }
            VAR13 += VAR2->VAR23;
            VAR14 += VAR2->VAR23;
        }
        VAR13 = VAR2->VAR19.VAR20[2] + (VAR4 * VAR2->VAR21) / 4 + VAR3 / 2;
        VAR14 = VAR2->VAR22.VAR20[2] + (VAR9 / 2) * (VAR2->VAR21 / 2) + (VAR8 + 1) / 2;
    }
}