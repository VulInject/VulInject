static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, unsigned char VAR5, signed char VAR6, signed char VAR7)
{
    int VAR8, VAR9, VAR10, VAR11;
    unsigned char *VAR12, *VAR13;
    VAR10 = VAR3 + 8 - (VAR5 >> 4) - VAR6;
    VAR11 = VAR4 + 8 - (VAR5 & 0xf) - VAR7;
    if ((VAR10 < 0) || (VAR10 > VAR2->VAR14->VAR15 - 4) || (VAR11 < 0) || (VAR11 > VAR2->VAR14->VAR16 - 4))
    {
        FUN2(VAR2->VAR14, VAR17, "", VAR10, VAR11, VAR2->VAR14->VAR15, VAR2->VAR14->VAR16);
        return;
    }
    VAR12 = VAR2->VAR18.VAR19[0] + (VAR4 * VAR2->VAR20) + VAR3;
    VAR13 = VAR2->VAR21.VAR19[0] + (VAR11 * VAR2->VAR20) + VAR10;
    for (VAR8 = 0; VAR8 < 4; VAR8++)
    {
        VAR12[0] = VAR13[0];
        VAR12[1] = VAR13[1];
        VAR12[2] = VAR13[2];
        VAR12[3] = VAR13[3];
        VAR12 += VAR2->VAR20;
        VAR13 += VAR2->VAR20;
    }
    VAR9 = VAR2->VAR20 / 2;
    VAR12 = VAR2->VAR18.VAR19[1] + (VAR4 * VAR2->VAR20) / 4 + VAR3 / 2;
    VAR13 = VAR2->VAR21.VAR19[1] + (VAR11 / 2) * (VAR2->VAR20 / 2) + (VAR10 + 1) / 2;
    for (VAR8 = 0; VAR8 < 2; VAR8++)
    {
        switch (((VAR11 & 0x01) << 1) | (VAR10 & 0x01))
        {
        case 0:
            VAR12[0] = VAR13[0];
            VAR12[1] = VAR13[1];
            VAR12[VAR9] = VAR13[VAR9];
            VAR12[VAR9 + 1] = VAR13[VAR9 + 1];
            break;
        case 1:
            VAR12[0] = FUN3(VAR13[0], VAR13[1]);
            VAR12[1] = FUN3(VAR13[1], VAR13[2]);
            VAR12[VAR9] = FUN3(VAR13[VAR9], VAR13[VAR9 + 1]);
            VAR12[VAR9 + 1] = FUN3(VAR13[VAR9 + 1], VAR13[VAR9 + 2]);
            break;
        case 2:
            VAR12[0] = FUN3(VAR13[0], VAR13[VAR9]);
            VAR12[1] = FUN3(VAR13[1], VAR13[VAR9 + 1]);
            VAR12[VAR9] = FUN3(VAR13[VAR9], VAR13[VAR9 * 2]);
            VAR12[VAR9 + 1] = FUN3(VAR13[VAR9 + 1], VAR13[(VAR9 * 2) + 1]);
            break;
        case 3:
            VAR12[0] = FUN4(VAR13[0], VAR13[1], VAR13[VAR9], VAR13[VAR9 + 1]);
            VAR12[1] = FUN4(VAR13[1], VAR13[2], VAR13[VAR9 + 1], VAR13[VAR9 + 2]);
            VAR12[VAR9] = FUN4(VAR13[VAR9], VAR13[VAR9 + 1], VAR13[VAR9 * 2], VAR13[(VAR9 * 2) + 1]);
            VAR12[VAR9 + 1] = FUN4(VAR13[VAR9 + 1], VAR13[VAR9 + 2], VAR13[(VAR9 * 2) + 1], VAR13[(VAR9 * 2) + 1]);
            break;
        }
        VAR12 = VAR2->VAR18.VAR19[2] + (VAR4 * VAR2->VAR20) / 4 + VAR3 / 2;
        VAR13 = VAR2->VAR21.VAR19[2] + (VAR11 / 2) * (VAR2->VAR20 / 2) + (VAR10 + 1) / 2;
    }
}