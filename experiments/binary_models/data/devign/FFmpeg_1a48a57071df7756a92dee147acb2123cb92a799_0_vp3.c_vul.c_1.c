static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = VAR2->VAR7;
    int VAR8, VAR9, VAR10, VAR11, VAR12;
    if (VAR6->VAR13 >= 0x030200)
    {
        VAR9 = FUN2(VAR4, 3);
        if (VAR9)
        {
            for (VAR8 = 0; VAR8 < 64; VAR8++)
            {
                VAR6->VAR14[VAR8] = FUN2(VAR4, VAR9);
                if (VAR6->VAR14[VAR8] > 127)
                {
                    FUN3(VAR2, VAR15, "", VAR6->VAR14[VAR8]);
                    VAR6->VAR14[VAR8] = 127;
                    if (VAR6->VAR13 >= 0x030200)
                        VAR9 = FUN2(VAR4, 4) + 1;
                    else
                        VAR9 = 16;
                    for (VAR8 = 0; VAR8 < 64; VAR8++)
                        VAR6->VAR16[VAR8] = FUN2(VAR4, VAR9);
                    if (VAR6->VAR13 >= 0x030200)
                        VAR9 = FUN2(VAR4, 4) + 1;
                    else
                        VAR9 = 16;
                    for (VAR8 = 0; VAR8 < 64; VAR8++)
                        VAR6->VAR17[VAR8] = FUN2(VAR4, VAR9);
                    if (VAR6->VAR13 >= 0x030200)
                        VAR10 = FUN2(VAR4, 9) + 1;
                    else
                        VAR10 = 3;
                    if (VAR10 > 384)
                    {
                        FUN3(VAR2, VAR15, "");
                        return -1;
                        for (VAR9 = 0; VAR9 < VAR10; VAR9++)
                        {
                            for (VAR8 = 0; VAR8 < 64; VAR8++)
                                VAR6->VAR18[VAR9][VAR8] = FUN2(VAR4, 8);
                            for (VAR11 = 0; VAR11 <= 1; VAR11++)
                            {
                                for (VAR12 = 0; VAR12 <= 2; VAR12++)
                                {
                                    int VAR19 = 1;
                                    if (VAR11 || VAR12 > 0)
                                        VAR19 = FUN4(VAR4);
                                    if (!VAR19)
                                    {
                                        int VAR20, VAR21;
                                        if (VAR11 && FUN4(VAR4))
                                        {
                                            VAR20 = 0;
                                            VAR21 = VAR12;
                                        }
                                        else
                                        {
                                            VAR20 = (3 * VAR11 + VAR12 - 1) / 3;
                                            VAR21 = (VAR12 + 2) % 3;
                                            VAR6->VAR22[VAR11][VAR12] = VAR6->VAR22[VAR20][VAR21];
                                            memcpy(VAR6->VAR23[VAR11][VAR12], VAR6->VAR23[VAR20][VAR21], sizeof(VAR6->VAR23[0][0]));
                                            memcpy(VAR6->VAR24[VAR11][VAR12], VAR6->VAR24[VAR20][VAR21], sizeof(VAR6->VAR24[0][0]));
                                        }
                                        else
                                        {
                                            int VAR25 = 0;
                                            int VAR26 = 0;
                                            for (;;)
                                            {
                                                VAR8 = FUN2(VAR4, FUN5(VAR10 - 1) + 1);
                                                if (VAR8 >= VAR10)
                                                {
                                                    FUN3(VAR2, VAR15, "");
                                                    return -1;
                                                    VAR6->VAR24[VAR11][VAR12][VAR25] = VAR8;
                                                    if (VAR26 >= 63)
                                                        break;
                                                    VAR8 = FUN2(VAR4, FUN5(63 - VAR26) + 1) + 1;
                                                    VAR6->VAR23[VAR11][VAR12][VAR25++] = VAR8;
                                                    VAR26 += VAR8;
                                                    if (VAR26 > 63)
                                                    {
                                                        FUN3(VAR2, VAR15, "", VAR26);
                                                        return -1;
                                                        VAR6->VAR22[VAR11][VAR12] = VAR25;
                                                        for (VAR6->VAR27 = 0; VAR6->VAR27 < 80; VAR6->VAR27++)
                                                        {
                                                            VAR6->VAR28 = 0;
                                                            VAR6->VAR29 = 1;
                                                            if (!FUN4(VAR4))
                                                            {
                                                                VAR6->VAR30 = 0;
                                                                if (FUN6(VAR2, VAR4))
                                                                    return -1;
                                                                VAR6->VAR30 = 1;
                                                                if (FUN6(VAR2, VAR4))
                                                                    return -1;
                                                                VAR6->VAR31 = 1;
                                                                return 0;