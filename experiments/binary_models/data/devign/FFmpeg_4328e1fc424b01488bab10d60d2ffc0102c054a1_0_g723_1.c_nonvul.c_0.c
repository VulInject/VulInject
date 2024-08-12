static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR3 *VAR5, int VAR6, int VAR7)
{
    FCBParam VAR8;
    int16_t VAR9[VAR10];
    int16_t VAR11[VAR10];
    int16_t VAR12[VAR10];
    int VAR13[VAR10];
    int VAR14[VAR10];
    int VAR15, VAR16, VAR17, VAR18, VAR19, VAR20, VAR21, VAR22, VAR23, VAR24;
    int64_t VAR25;
    memcpy(VAR9, VAR4, sizeof(VAR3) * VAR10);
    VAR8.VAR26 = 0;
    if (VAR7 < VAR10 - 2)
    {
        VAR8.VAR26 = 1;
        FUN2(VAR9, VAR7);
    }
    for (VAR21 = 0; VAR21 < VAR10; VAR21++)
        VAR11[VAR21] = VAR9[VAR21] >> 1;
    VAR25 = FUN3(VAR11, VAR11, VAR10);
    VAR20 = FUN4(VAR25);
    VAR12[0] = FUN5((VAR25 << VAR20) + (1 << 15)) >> 16;
    for (VAR21 = 1; VAR21 < VAR10; VAR21++)
    {
        VAR25 = FUN3(VAR11 + VAR21, VAR11, VAR10 - VAR21);
        VAR12[VAR21] = FUN5((VAR25 << VAR20) + (1 << 15)) >> 16;
    }
    VAR20 -= 4;
    for (VAR21 = 0; VAR21 < VAR10; VAR21++)
    {
        VAR25 = FUN3(VAR5 + VAR21, VAR9, VAR10 - VAR21);
        if (VAR20 < 0)
            VAR13[VAR21] = VAR25 >> -VAR20;
        else
            VAR13[VAR21] = FUN5(VAR25 << VAR20);
    }
    for (VAR21 = 0; VAR21 < VAR27; VAR21++)
    {
        VAR17 = 0;
        for (VAR22 = VAR21; VAR22 < VAR10; VAR22 += VAR27)
        {
            VAR25 = FUN6(VAR13[VAR22]);
            if (VAR25 >= VAR17)
            {
                VAR17 = VAR25;
                VAR8.VAR28[0] = VAR22;
            }
        }
        VAR15 = VAR17;
        VAR19 = 1 << 30;
        VAR18 = VAR29 - 2;
        for (VAR22 = VAR18; VAR22 >= 2; VAR22--)
        {
            VAR25 = FUN5((VAR30)VAR31[VAR22] * VAR12[0] << 1);
            VAR25 = FUN6(VAR25 - VAR15);
            if (VAR25 < VAR19)
            {
                VAR19 = VAR25;
                VAR18 = VAR22;
            }
        }
        VAR18--;
        for (VAR22 = 1; VAR22 < 5; VAR22++)
        {
            for (VAR23 = VAR21; VAR23 < VAR10; VAR23 += VAR27)
            {
                VAR11[VAR23] = 0;
                VAR14[VAR23] = VAR13[VAR23];
            }
            VAR8.VAR32 = VAR18 + VAR22 - 2;
            VAR15 = VAR31[VAR8.VAR32];
            VAR8.VAR33[0] = (VAR14[VAR8.VAR28[0]] < 0) ? -VAR15 : VAR15;
            VAR11[VAR8.VAR28[0]] = 1;
            for (VAR23 = 1; VAR23 < VAR6; VAR23++)
            {
                VAR17 = VAR34;
                for (VAR24 = VAR21; VAR24 < VAR10; VAR24 += VAR27)
                {
                    if (VAR11[VAR24])
                        continue;
                    VAR25 = VAR12[FUN6(VAR24 - VAR8.VAR28[VAR23 - 1])];
                    VAR25 = FUN5((VAR30)VAR25 * VAR8.VAR33[VAR23 - 1] << 1);
                    VAR14[VAR24] -= VAR25;
                    VAR25 = FUN6(VAR14[VAR24]);
                    if (VAR25 > VAR17)
                    {
                        VAR17 = VAR25;
                        VAR8.VAR28[VAR23] = VAR24;
                    }
                }
                VAR8.VAR33[VAR23] = (VAR14[VAR8.VAR28[VAR23]] < 0) ? -VAR15 : VAR15;
                VAR11[VAR8.VAR28[VAR23]] = 1;
            }
            memset(VAR11, 0, sizeof(VAR3) * VAR10);
            for (VAR23 = 0; VAR23 < VAR6; VAR23++)
                VAR11[VAR8.VAR28[VAR23]] = VAR8.VAR33[VAR23];
            for (VAR23 = VAR10 - 1; VAR23 >= 0; VAR23--)
            {
                VAR25 = 0;
                for (VAR24 = 0; VAR24 <= VAR23; VAR24++)
                {
                    int VAR35 = FUN5((VAR30)VAR11[VAR24] * VAR9[VAR23 - VAR24] << 1);
                    VAR25 = FUN5(VAR25 + VAR35);
                }
                VAR11[VAR23] = VAR25 << 2 >> 16;
            }
            VAR16 = 0;
            for (VAR23 = 0; VAR23 < VAR10; VAR23++)
            {
                int64_t VAR35;
                VAR35 = FUN5((VAR30)VAR5[VAR23] * VAR11[VAR23] << 1);
                VAR16 = FUN5(VAR16 - VAR35);
                VAR35 = FUN5((VAR30)VAR11[VAR23] * VAR11[VAR23]);
                VAR16 = FUN5(VAR16 + VAR35);
            }
            if (VAR16 < VAR2->VAR36)
            {
                VAR2->VAR36 = VAR16;
                VAR2->VAR37 = VAR21;
                VAR2->VAR32 = VAR8.VAR32;
                VAR2->VAR26 = VAR8.VAR26;
                for (VAR23 = 0; VAR23 < VAR6; VAR23++)
                {
                    VAR2->VAR33[VAR23] = VAR8.VAR33[VAR23];
                    VAR2->VAR28[VAR23] = VAR8.VAR28[VAR23];
                }
            }
        }
    }
}