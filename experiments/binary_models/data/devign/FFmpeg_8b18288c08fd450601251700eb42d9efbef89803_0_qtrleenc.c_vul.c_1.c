static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR6 **VAR7)
{
    int VAR8 = VAR2->VAR9;
    int VAR10;
    signed char VAR11;
    unsigned int VAR12;
    unsigned int VAR13;
    unsigned int VAR14;
    int VAR15;
    int VAR16;
    int VAR17;
    int VAR18;
    int VAR19;
    VAR6 *VAR20 = VAR4->VAR21[0] + VAR5 * VAR4->VAR22[0] + (VAR8 - 1) * VAR2->VAR23;
    VAR6 *VAR24 = VAR2->VAR25.VAR21[0] + VAR5 * VAR2->VAR25.VAR22[0] + (VAR8 - 1) * VAR2->VAR23;
    VAR2->VAR26[VAR8] = 0;
    VAR13 = 0;
    for (VAR10 = VAR8 - 1; VAR10 >= 0; VAR10--)
    {
        if (!VAR2->VAR27.VAR28 && !memcmp(VAR20, VAR24, VAR2->VAR23))
            VAR13 = FUN2(VAR13 + 1, VAR29);
        else
            VAR13 = 0;
        VAR16 = VAR2->VAR26[VAR10 + VAR13] + 2;
        VAR2->VAR30[VAR10] = VAR13;
        if (VAR10 < VAR8 - 1 && !memcmp(VAR20, VAR20 + VAR2->VAR23, VAR2->VAR23))
            VAR14 = FUN2(VAR14 + 1, VAR31);
        else
            VAR14 = 1;
        VAR17 = VAR2->VAR26[VAR10 + VAR14] + 1 + VAR2->VAR23;
        if (VAR10 == 0)
        {
            VAR16--;
            VAR17++;
        }
        if (VAR14 > 1 && (VAR13 == 0 || VAR17 < VAR16))
        {
            VAR2->VAR26[VAR10] = VAR17;
            VAR2->VAR32[VAR10] = -VAR14;
        }
        else if (VAR13 > 0)
        {
            VAR2->VAR26[VAR10] = VAR16;
            VAR2->VAR32[VAR10] = 0;
        }
        else
        {
            int VAR33 = FUN2(VAR8 - VAR10, VAR34);
            VAR18 = 1 + VAR2->VAR23 + !VAR10;
            VAR15 = VAR35;
            for (VAR19 = 1; VAR19 <= VAR33; VAR19++)
            {
                if (VAR2->VAR26[VAR10 + VAR19] + VAR18 < VAR15)
                {
                    VAR15 = VAR2->VAR26[VAR10 + VAR19] + VAR18;
                    VAR12 = VAR19;
                }
                VAR18 += VAR2->VAR23;
            }
            VAR2->VAR26[VAR10] = VAR15;
            VAR2->VAR32[VAR10] = VAR12;
        }
        VAR20 -= VAR2->VAR23;
        VAR24 -= VAR2->VAR23;
    }
    VAR10 = 0;
    VAR20 = VAR4->VAR21[0] + VAR5 * VAR4->VAR22[0];
    if (VAR2->VAR32[0] == 0)
    {
        FUN3(VAR7, VAR2->VAR30[0] + 1);
        VAR10 += VAR2->VAR30[0];
    }
    else
        FUN3(VAR7, 1);
    while (VAR10 < VAR8)
    {
        VAR11 = VAR2->VAR32[VAR10];
        FUN3(VAR7, VAR11);
        if (VAR11 == 0)
        {
            FUN3(VAR7, VAR2->VAR30[VAR10] + 1);
            VAR10 += VAR2->VAR30[VAR10];
        }
        else if (VAR11 > 0)
        {
            if (VAR2->VAR36->VAR37 == VAR38)
            {
                int VAR19;
                for (VAR19 = 0; VAR19 < VAR11 * VAR2->VAR23; ++VAR19)
                    FUN3(VAR7, *(VAR20 + VAR10 * VAR2->VAR23 + VAR19) ^ 0xff);
            }
            else
            {
                FUN4(VAR7, VAR20 + VAR10 * VAR2->VAR23, VAR11 * VAR2->VAR23);
            }
            VAR10 += VAR11;
        }
        else
        {
            if (VAR2->VAR36->VAR37 == VAR38)
            {
                int VAR19;
                for (VAR19 = 0; VAR19 < VAR2->VAR23; ++VAR19)
                    FUN3(VAR7, *(VAR20 + VAR10 * VAR2->VAR23 + VAR19) ^ 0xff);
            }
            else
            {
                FUN4(VAR7, VAR20 + VAR10 * VAR2->VAR23, VAR2->VAR23);
            }
            VAR10 -= VAR11;
        }
    }
    FUN3(VAR7, -1);
}