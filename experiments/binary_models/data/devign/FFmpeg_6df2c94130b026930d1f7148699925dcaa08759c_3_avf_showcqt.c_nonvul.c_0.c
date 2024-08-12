static void FUN1(VAR1 *VAR2, const float *VAR3, const float *VAR4, const VAR5 *VAR6, int VAR7)
{
    int VAR8, VAR9, VAR10, VAR11 = VAR2->VAR12;
    float VAR13, VAR14, VAR15 = 1.0f / VAR7;
    VAR16 *VAR17 = VAR2->VAR18[0], *VAR19 = VAR2->VAR18[1], *VAR20 = VAR2->VAR18[2];
    VAR16 *VAR21, *VAR22, *VAR23;
    int VAR24 = VAR2->VAR25[0], VAR26 = VAR2->VAR25[1], VAR27 = VAR2->VAR25[2];
    int VAR28 = VAR2->VAR29;
    for (VAR9 = 0; VAR9 < VAR7; VAR9 += 2)
    {
        VAR10 = (VAR28 == VAR30) ? VAR9 / 2 : VAR9;
        VAR14 = (VAR7 - VAR9) * VAR15;
        VAR21 = VAR17 + VAR9 * VAR24;
        VAR22 = VAR19 + VAR10 * VAR26;
        VAR23 = VAR20 + VAR10 * VAR27;
        for (VAR8 = 0; VAR8 < VAR11; VAR8 += 2)
        {
            if (VAR3[VAR8] <= VAR14)
            {
                *VAR21++ = 16;
                *VAR22++ = 128;
                *VAR23++ = 128;
            }
            else
            {
                VAR13 = (VAR3[VAR8] - VAR14) * VAR4[VAR8];
                *VAR21++ = VAR13 * VAR6[VAR8].VAR31.VAR9 + 16.5f;
                *VAR22++ = VAR13 * VAR6[VAR8].VAR31.VAR32 + 128.5f;
                *VAR23++ = VAR13 * VAR6[VAR8].VAR31.VAR33 + 128.5f;
            }
            if (VAR28 == VAR34)
            {
                if (VAR3[VAR8 + 1] <= VAR14)
                {
                    *VAR21++ = 16;
                    *VAR22++ = 128;
                    *VAR23++ = 128;
                }
                else
                {
                    VAR13 = (VAR3[VAR8 + 1] - VAR14) * VAR4[VAR8 + 1];
                    *VAR21++ = VAR13 * VAR6[VAR8 + 1].VAR31.VAR9 + 16.5f;
                    *VAR22++ = VAR13 * VAR6[VAR8 + 1].VAR31.VAR32 + 128.5f;
                    *VAR23++ = VAR13 * VAR6[VAR8 + 1].VAR31.VAR33 + 128.5f;
                }
            }
            else
            {
                if (VAR3[VAR8 + 1] <= VAR14)
                {
                    *VAR21++ = 16;
                }
                else
                {
                    VAR13 = (VAR3[VAR8 + 1] - VAR14) * VAR4[VAR8 + 1];
                    *VAR21++ = VAR13 * VAR6[VAR8 + 1].VAR31.VAR9 + 16.5f;
                }
            }
        }
        VAR14 = (VAR7 - (VAR9 + 1)) * VAR15;
        VAR21 = VAR17 + (VAR9 + 1) * VAR24;
        VAR22 = VAR19 + (VAR9 + 1) * VAR26;
        VAR23 = VAR20 + (VAR9 + 1) * VAR27;
        for (VAR8 = 0; VAR8 < VAR11; VAR8 += 2)
        {
            if (VAR28 != VAR30)
            {
                if (VAR3[VAR8] <= VAR14)
                {
                    *VAR21++ = 16;
                    *VAR22++ = 128;
                    *VAR23++ = 128;
                }
                else
                {
                    VAR13 = (VAR3[VAR8] - VAR14) * VAR4[VAR8];
                    *VAR21++ = VAR13 * VAR6[VAR8].VAR31.VAR9 + 16.5f;
                    *VAR22++ = VAR13 * VAR6[VAR8].VAR31.VAR32 + 128.5f;
                    *VAR23++ = VAR13 * VAR6[VAR8].VAR31.VAR33 + 128.5f;
                }
            }
            else
            {
                if (VAR3[VAR8] <= VAR14)
                {
                    *VAR21++ = 16;
                }
                else
                {
                    VAR13 = (VAR3[VAR8] - VAR14) * VAR4[VAR8];
                    *VAR21++ = VAR13 * VAR6[VAR8].VAR31.VAR9 + 16.5f;
                }
            }
            if (VAR2->VAR29 == VAR34)
            {
                if (VAR3[VAR8 + 1] <= VAR14)
                {
                    *VAR21++ = 16;
                    *VAR22++ = 128;
                    *VAR23++ = 128;
                }
                else
                {
                    VAR13 = (VAR3[VAR8 + 1] - VAR14) * VAR4[VAR8 + 1];
                    *VAR21++ = VAR13 * VAR6[VAR8 + 1].VAR31.VAR9 + 16.5f;
                    *VAR22++ = VAR13 * VAR6[VAR8 + 1].VAR31.VAR32 + 128.5f;
                    *VAR23++ = VAR13 * VAR6[VAR8 + 1].VAR31.VAR33 + 128.5f;
                }
            }
            else
            {
                if (VAR3[VAR8 + 1] <= VAR14)
                {
                    *VAR21++ = 16;
                }
                else
                {
                    VAR13 = (VAR3[VAR8 + 1] - VAR14) * VAR4[VAR8 + 1];
                    *VAR21++ = VAR13 * VAR6[VAR8 + 1].VAR31.VAR9 + 16.5f;
                }
            }
        }
    }
}