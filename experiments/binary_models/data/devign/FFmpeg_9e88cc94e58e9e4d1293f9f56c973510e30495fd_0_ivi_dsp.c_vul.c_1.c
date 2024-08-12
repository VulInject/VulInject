void FUN1(const VAR1 *VAR2, VAR3 *VAR4, ptrdiff_t VAR5, const VAR6 *VAR7)
{
    int VAR8, VAR9, VAR10, VAR11, VAR12, VAR13;
    const VAR1 *VAR14;
    VAR1 *VAR15;
    int VAR16[64];
    int VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25;
    VAR14 = VAR2;
    VAR15 = VAR16;
    for (VAR8 = 0; VAR8 < 8; VAR8++)
    {
        if (VAR7[VAR8])
        {
            VAR9 = !(VAR8 & 4);
            VAR10 = VAR14[0] << VAR9;
            VAR11 = VAR14[8] << VAR9;
            VAR12 = VAR14[16] << VAR9;
            VAR13 = VAR14[24] << VAR9;
            FUN2(VAR10, VAR11, VAR12, VAR13, VAR14[32], VAR14[40], VAR14[48], VAR14[56], VAR15[0], VAR15[8], VAR15[16], VAR15[24], VAR15[32], VAR15[40], VAR15[48], VAR15[56], VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25);
        }
        else
            VAR15[0] = VAR15[8] = VAR15[16] = VAR15[24] = VAR15[32] = VAR15[40] = VAR15[48] = VAR15[56] = 0;
        VAR14++;
        VAR15++;
    }
    VAR14 = VAR16;
    for (VAR8 = 0; VAR8 < 8; VAR8++)
    {
        if (!VAR14[0] && !VAR14[1] && !VAR14[2] && !VAR14[3] && !VAR14[4] && !VAR14[5] && !VAR14[6] && !VAR14[7])
        {
            memset(VAR4, 0, 8 * sizeof(VAR4[0]));
        }
        else
        {
            FUN2(VAR14[0], VAR14[1], VAR14[2], VAR14[3], VAR14[4], VAR14[5], VAR14[6], VAR14[7], VAR4[0], VAR4[1], VAR4[2], VAR4[3], VAR4[4], VAR4[5], VAR4[6], VAR4[7], VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24, VAR25);
        }
        VAR14 += 8;
        VAR4 += VAR5;
    }
}