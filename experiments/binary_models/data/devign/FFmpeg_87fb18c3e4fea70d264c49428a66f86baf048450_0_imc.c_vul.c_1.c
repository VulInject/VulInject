static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8, VAR9;
    const float VAR10 = -1.VAR11;
    float VAR12 = 0.0;
    int VAR13;
    int VAR14 = 0;
    int VAR15 = 1;
    float VAR16 = 0.0;
    int VAR17 = 0;
    int VAR18 = 0;
    int VAR19, VAR20;
    float VAR21 = 1.VAR22;
    int VAR23 = 0;
    float VAR24[32];
    int VAR25;
    int VAR26 = 0;
    for (VAR8 = 0; VAR8 < VAR27; VAR8++)
        VAR12 = FUN2(VAR12, VAR4->VAR28[VAR8]);
    for (VAR8 = 0; VAR8 < VAR27 - 1; VAR8++)
        VAR4->VAR29[VAR8] = VAR4->VAR30[VAR8] - FUN3(VAR4->VAR31[VAR8]);
    VAR4->VAR29[VAR27 - 1] = VAR10;
    VAR12 = VAR12 * 0.25;
    for (VAR8 = 0; VAR8 < VAR27; VAR8++)
    {
        VAR13 = -1;
        if ((VAR32[VAR8 + 1] - VAR32[VAR8]) == VAR4->VAR33[VAR8])
            VAR13 = 0;
        if ((VAR32[VAR8 + 1] - VAR32[VAR8]) > VAR4->VAR33[VAR8])
            VAR13 = 1;
        if (((VAR32[VAR8 + 1] - VAR32[VAR8]) / 2) >= VAR4->VAR33[VAR8])
            VAR13 = 2;
        if (VAR13 == -1)
            VAR4->VAR29[VAR8] += VAR34[(VAR13 * 2 + (VAR4->VAR28[VAR8] < VAR12)) * 2 + VAR7];
    }
    if (VAR5 & 0x2)
    {
        VAR4->VAR29[0] = VAR10;
        VAR4->VAR29[1] = VAR10;
        VAR4->VAR29[2] = VAR10;
        VAR4->VAR29[3] = VAR10;
    }
    for (VAR8 = (VAR5 & 0x2) ? 4 : 0; VAR8 < VAR27 - 1; VAR8++)
    {
        VAR17 += VAR4->VAR33[VAR8];
        VAR16 += VAR4->VAR33[VAR8] * VAR4->VAR29[VAR8];
    }
    VAR4->VAR33[VAR27 - 1] = 0;
    VAR16 = (VAR16 * 0.5 - VAR6) / VAR17;
    for (VAR8 = 0; VAR8 < VAR27 / 2; VAR8++)
    {
        VAR19 = VAR18 - VAR6;
        if ((VAR19 >= -8) && (VAR19 <= 8))
            break;
        VAR18 = 0;
        VAR17 = 0;
        for (VAR9 = (VAR5 & 0x2) ? 4 : 0; VAR9 < VAR27; VAR9++)
        {
            VAR20 = FUN4(((VAR4->VAR29[VAR9] * 0.5) - VAR16 + 0.5), 0, 6);
            VAR4->VAR35[VAR9] = VAR20;
            VAR18 += VAR4->VAR33[VAR9] * VAR20;
            if (VAR20 > 0)
                VAR17 += VAR4->VAR33[VAR9];
        }
        VAR25 = VAR15;
        VAR15 = 1;
        if (VAR6 < VAR18)
            VAR15 = -1;
        if (VAR8 == 0)
            VAR25 = VAR15;
        if (VAR25 != VAR15)
            VAR14++;
        VAR16 = (float)(VAR18 - VAR6) / ((VAR14 + 1) * VAR17) + VAR16;
    }
    for (VAR8 = (VAR5 & 0x2) ? 4 : 0; VAR8 < VAR27; VAR8++)
    {
        for (VAR9 = VAR32[VAR8]; VAR9 < VAR32[VAR8 + 1]; VAR9++)
            VAR4->VAR36[VAR9] = VAR4->VAR35[VAR8];
    }
    if (VAR6 > VAR18)
    {
        for (VAR8 = 0; VAR8 < VAR27; VAR8++)
        {
            VAR24[VAR8] = (VAR4->VAR35[VAR8] == 6) ? -1.VAR11 : (VAR4->VAR35[VAR8] * -2 + VAR4->VAR29[VAR8] - 0.415);
        }
        VAR12 = 0.0;
        do
        {
            if (VAR12 <= -1.VAR11)
                break;
            VAR26 = 0;
            VAR12 = -1.VAR11;
            for (VAR8 = 0; VAR8 < VAR27; VAR8++)
            {
                if (VAR24[VAR8] > VAR12)
                {
                    VAR12 = VAR24[VAR8];
                    VAR26 = VAR8;
                }
            }
            if (VAR12 > -1.VAR11)
            {
                VAR24[VAR26] -= 2.0;
                if (++VAR4->VAR35[VAR26] == 6)
                    VAR24[VAR26] = -1.VAR11;
                for (VAR9 = VAR32[VAR26]; VAR9 < VAR32[VAR26 + 1] && (VAR6 > VAR18); VAR9++)
                {
                    VAR4->VAR36[VAR9]++;
                    VAR18++;
                }
            }
        } while (VAR6 > VAR18);
    }
    if (VAR6 < VAR18)
    {
        for (VAR8 = 0; VAR8 < VAR27; VAR8++)
        {
            VAR24[VAR8] = VAR4->VAR35[VAR8] ? (VAR4->VAR35[VAR8] * -2 + VAR4->VAR29[VAR8] + 1.585) : 1.VAR11;
        }
        if (VAR5 & 0x2)
        {
            VAR24[0] = 1.VAR11;
            VAR24[1] = 1.VAR11;
            VAR24[2] = 1.VAR11;
            VAR24[3] = 1.VAR11;
        }
        while (VAR6 < VAR18)
        {
            VAR21 = 1.VAR22;
            VAR23 = 0;
            for (VAR8 = 0; VAR8 < VAR27; VAR8++)
            {
                if (VAR24[VAR8] < VAR21)
                {
                    VAR21 = VAR24[VAR8];
                    VAR23 = VAR8;
                }
            }
            VAR24[VAR23] = VAR21 + 2.0;
            if (!--VAR4->VAR35[VAR23])
                VAR24[VAR23] = 1.VAR11;
            for (VAR9 = VAR32[VAR23]; VAR9 < VAR32[VAR23 + 1] && (VAR6 < VAR18); VAR9++)
            {
                if (VAR4->VAR36[VAR9] > 0)
                {
                    VAR4->VAR36[VAR9]--;
                    VAR18--;
                }
            }
        }
    }
    return 0;