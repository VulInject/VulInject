static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR7.VAR6;
    uint8_t VAR8[4][6];
    int32_t VAR9[2][6];
    int VAR10, VAR11, VAR12, VAR13, VAR14;
    for (VAR10 = 0; VAR10 < 4; VAR10++)
        for (VAR11 = 0; VAR11 < (VAR10 == 3 ? 2 : 6); VAR11++)
        {
            VAR8[VAR10][VAR11] = FUN2(VAR6);
            if (!VAR8[VAR10][VAR11])
            {
                VAR14 = FUN3(VAR6);
                if (VAR14)
                {
                    if (VAR11 - VAR14 < 0)
                    {
                        FUN4(VAR2->VAR15, VAR16, "", VAR14);
                        return VAR17;
                    }
                    memcpy(VAR4->VAR4[VAR10][VAR11], VAR4->VAR4[VAR10][VAR11 - VAR14], VAR10 > 0 ? 64 : 16);
                    if (VAR10 > 1)
                        VAR4->VAR18[VAR10 - 2][VAR11] = VAR4->VAR18[VAR10 - 2][VAR11 - VAR14];
                }
            }
            else
            {
                int VAR19, VAR20;
                int32_t VAR21;
                VAR19 = 8;
                VAR20 = FUN5(64, 1 << (4 + (VAR10 << 1)));
                if (VAR10 > 1)
                {
                    VAR9[VAR10 - 2][VAR11] = FUN6(VAR6) + 8;
                    VAR19 = VAR9[VAR10 - 2][VAR11];
                    VAR4->VAR18[VAR10 - 2][VAR11] = VAR19;
                }
                for (VAR12 = 0; VAR12 < VAR20; VAR12++)
                {
                    if (VAR10 == 0)
                        VAR13 = 4 * VAR22[VAR12] + VAR23[VAR12];
                    else
                        VAR13 = 8 * VAR24[VAR12] + VAR25[VAR12];
                    VAR21 = FUN6(VAR6);
                    VAR19 = (VAR19 + VAR21 + 256) % 256;
                    VAR4->VAR4[VAR10][VAR11][VAR13] = VAR19;
                }
            }
        }
    return 0;
}