static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = &VAR2->VAR5;
    int VAR6, VAR7;
    int VAR8, VAR9, VAR10;
    VAR11 *VAR12, *VAR13;
    int VAR14, VAR15, VAR16 = 0, VAR17 = 0;
    VAR6 = VAR3 * VAR5->VAR18;
    for (VAR7 = 0; VAR7 < VAR5->VAR19; VAR7++, VAR6++)
    {
        int VAR20 = VAR5->VAR21->VAR22[VAR6];
        if (FUN2(VAR20) || FUN3(VAR20))
            VAR2->VAR23[VAR6] = 0xFFFF;
        if (FUN2(VAR20))
            VAR2->VAR24[VAR6] = 0xFF;
    }
    VAR6 = VAR3 * VAR5->VAR18;
    for (VAR7 = 0; VAR7 < VAR5->VAR19; VAR7++, VAR6++)
    {
        VAR15 = VAR25[VAR5->VAR21->VAR26[VAR6]];
        if (VAR7)
            VAR16 = VAR25[VAR5->VAR21->VAR26[VAR6 - 1]];
        for (VAR9 = 0; VAR9 < 16; VAR9 += 4)
        {
            VAR12 = VAR5->VAR21->VAR27.VAR28[0] + VAR7 * 16 + (VAR3 * 16 + VAR9) * VAR5->VAR29 + 4 * !VAR7;
            for (VAR8 = !VAR7; VAR8 < 4; VAR8++, VAR12 += 4)
            {
                int VAR30 = VAR8 + VAR9;
                VAR14 = 0;
                if (VAR2->VAR23[VAR6] & (1 << VAR30))
                    VAR14 = VAR15;
                else if (!VAR8 && VAR2->VAR23[VAR6 - 1] & (1 << (VAR30 + 3)))
                    VAR14 = VAR16;
                else if (VAR8 && VAR2->VAR23[VAR6] & (1 << (VAR30 - 1)))
                    VAR14 = VAR15;
                if (VAR14)
                    FUN4(VAR12, 1, VAR5->VAR29, VAR14);
            }
        }
        for (VAR10 = 0; VAR10 < 2; VAR10++)
        {
            int VAR31, VAR32 = 0;
            VAR31 = (VAR2->VAR24[VAR6] >> (VAR10 * 4)) & 0xF;
            if (VAR7)
                VAR32 = (VAR2->VAR24[VAR6 - 1] >> (VAR10 * 4)) & 0xF;
            for (VAR9 = 0; VAR9 < 8; VAR9 += 4)
            {
                VAR13 = VAR5->VAR21->VAR27.VAR28[VAR10 + 1] + VAR7 * 8 + (VAR3 * 8 + VAR9) * VAR5->VAR33 + 4 * !VAR7;
                for (VAR8 = !VAR7; VAR8 < 2; VAR8++, VAR13 += 4)
                {
                    int VAR30 = VAR8 + (VAR9 >> 1);
                    VAR14 = 0;
                    if (VAR31 & (1 << VAR30))
                        VAR14 = VAR15;
                    else if (!VAR8 && VAR32 & (1 << (VAR30 + 1)))
                        VAR14 = VAR16;
                    else if (VAR8 && VAR31 & (1 << (VAR30 - 1)))
                        VAR14 = VAR15;
                    if (VAR14)
                        FUN4(VAR13, 1, VAR5->VAR33, VAR14);
                }
            }
        }
    }
    VAR6 = VAR3 * VAR5->VAR18;
    for (VAR7 = 0; VAR7 < VAR5->VAR19; VAR7++, VAR6++)
    {
        VAR15 = VAR25[VAR5->VAR21->VAR26[VAR6]];
        if (VAR3)
            VAR17 = VAR25[VAR5->VAR21->VAR26[VAR6 - VAR5->VAR18]];
        for (VAR9 = 4 * !VAR3; VAR9 < 16; VAR9 += 4)
        {
            VAR12 = VAR5->VAR21->VAR27.VAR28[0] + VAR7 * 16 + (VAR3 * 16 + VAR9) * VAR5->VAR29;
            for (VAR8 = 0; VAR8 < 4; VAR8++, VAR12 += 4)
            {
                int VAR30 = VAR8 + VAR9;
                VAR14 = 0;
                if (VAR2->VAR23[VAR6] & (1 << VAR30))
                    VAR14 = VAR15;
                else if (!VAR9 && VAR2->VAR23[VAR6 - VAR5->VAR18] & (1 << (VAR30 + 12)))
                    VAR14 = VAR17;
                else if (VAR9 && VAR2->VAR23[VAR6] & (1 << (VAR30 - 4)))
                    VAR14 = VAR15;
                if (VAR14)
                    FUN4(VAR12, VAR5->VAR29, 1, VAR14);
            }
        }
        for (VAR10 = 0; VAR10 < 2; VAR10++)
        {
            int VAR31, VAR34 = 0;
            VAR31 = (VAR2->VAR24[VAR6] >> (VAR10 * 4)) & 0xF;
            if (VAR3)
                VAR34 = (VAR2->VAR24[VAR6 - VAR5->VAR18] >> (VAR10 * 4)) & 0xF;
            for (VAR9 = 4 * !VAR3; VAR9 < 8; VAR9 += 4)
            {
                VAR13 = VAR5->VAR21->VAR27.VAR28[VAR10 + 1] + VAR7 * 8 + (VAR3 * 8 + VAR9) * VAR5->VAR33;
                for (VAR8 = 0; VAR8 < 2; VAR8++, VAR13 += 4)
                {
                    int VAR30 = VAR8 + (VAR9 >> 1);
                    VAR14 = 0;
                    if (VAR2->VAR24[VAR6] & (1 << VAR30))
                        VAR14 = VAR15;
                    else if (!VAR9 && VAR34 & (1 << (VAR30 + 2)))
                        VAR14 = VAR17;
                    else if (VAR9 && VAR31 & (1 << (VAR30 - 2)))
                        VAR14 = VAR15;
                    if (VAR14)
                        FUN4(VAR13, VAR5->VAR33, 1, VAR14);
                }
            }
        }
    }
}