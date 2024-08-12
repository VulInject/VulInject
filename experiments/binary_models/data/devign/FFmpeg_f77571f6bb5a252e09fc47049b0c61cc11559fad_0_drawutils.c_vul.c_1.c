int FUN1(VAR1 *VAR2[4], int VAR3[4], int VAR4, uint8_t VAR5[4], enum AVPixelFormat VAR6, uint8_t VAR7[4], int *VAR8, uint8_t VAR9[4])
{
    uint8_t VAR10[4] = {0};
    int VAR11;
    const VAR12 *VAR13 = FUN2(VAR6);
    int VAR14 = VAR13->VAR15;
    *VAR8 = FUN3(VAR10, VAR6) >= 0;
    if (*VAR8)
    {
        VAR3[0] = (FUN4(VAR13)) >> 3;
        for (VAR11 = 0; VAR11 < 4; VAR11++)
            VAR5[VAR10[VAR11]] = VAR7[VAR11];
        VAR2[0] = FUN5(VAR4, VAR3[0]);
        for (VAR11 = 0; VAR11 < VAR4; VAR11++)
            memcpy(VAR2[0] + VAR11 * VAR3[0], VAR5, VAR3[0]);
        if (VAR9)
            memcpy(VAR9, VAR10, sizeof(VAR10[0]) * 4);
    }
    else
    {
        int VAR16;
        VAR5[0] = FUN6(VAR7[0], VAR7[1], VAR7[2]);
        VAR5[1] = FUN7(VAR7[0], VAR7[1], VAR7[2], 0);
        VAR5[2] = FUN8(VAR7[0], VAR7[1], VAR7[2], 0);
        VAR5[3] = VAR7[3];
        for (VAR16 = 0; VAR16 < 4; VAR16++)
        {
            int VAR17;
            int VAR18 = (VAR16 == 1 || VAR16 == 2) ? VAR14 : 0;
            VAR3[VAR16] = 1;
            VAR17 = FUN9(VAR4, VAR18) * VAR3[VAR16];
            VAR2[VAR16] = FUN10(VAR17);
            if (!VAR2[VAR16])
            {
                while (VAR16 && VAR2[VAR16 - 1])
                    FUN11(&VAR2[--VAR16]);
            }
            memset(VAR2[VAR16], VAR5[VAR16], VAR17);
        }
    }
    return 0;