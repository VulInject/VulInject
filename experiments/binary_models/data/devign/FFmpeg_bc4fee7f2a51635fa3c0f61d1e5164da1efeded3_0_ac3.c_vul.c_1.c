int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, VAR11 *VAR12, VAR11 *VAR13, VAR11 *VAR14, VAR3 *VAR15)
{
    int16_t VAR16[VAR17];
    int VAR18;
    int VAR19, VAR20, VAR21, VAR22;
    int VAR23, VAR24, VAR25;
    VAR19 = VAR26[VAR5];
    VAR20 = VAR26[VAR6 - 1] + 1;
    if (VAR19 == 0)
    {
        VAR23 = 0;
        VAR23 = FUN2(VAR23, VAR4[0], VAR4[1], 384);
        VAR16[0] = VAR4[0] - VAR7 - VAR23;
        VAR23 = FUN2(VAR23, VAR4[1], VAR4[2], 384);
        VAR16[1] = VAR4[1] - VAR7 - VAR23;
        VAR21 = 7;
        for (VAR18 = 2; VAR18 < 7; VAR18++)
        {
            if (!(VAR8 && VAR18 == 6))
                VAR23 = FUN2(VAR23, VAR4[VAR18], VAR4[VAR18 + 1], 384);
            VAR24 = VAR4[VAR18] - VAR7;
            VAR25 = VAR4[VAR18] - VAR2->VAR27;
            VAR16[VAR18] = VAR24 - VAR23;
            if (!(VAR8 && VAR18 == 6))
            {
                if (VAR4[VAR18] <= VAR4[VAR18 + 1])
                {
                    VAR21 = VAR18 + 1;
                    break;
                }
            }
        }
        VAR22 = FUN3(VAR20, 22);
        for (VAR18 = VAR21; VAR18 < VAR22; VAR18++)
        {
            if (!(VAR8 && VAR18 == 6))
                VAR23 = FUN4(VAR23, VAR4[VAR18], VAR4[VAR18 + 1], VAR18);
            VAR24 = FUN5(VAR24 - VAR2->VAR28, VAR4[VAR18] - VAR7);
            VAR25 = FUN5(VAR25 - VAR2->VAR29, VAR4[VAR18] - VAR2->VAR27);
            VAR16[VAR18] = FUN5(VAR24 - VAR23, VAR25);
        }
        VAR21 = 22;
    }
    else
    {
        VAR21 = VAR19;
        VAR24 = (VAR2->VAR30 << 8) + 768;
        VAR25 = (VAR2->VAR31 << 8) + 768;
    }
    for (VAR18 = VAR21; VAR18 < VAR20; VAR18++)
    {
        VAR24 = FUN5(VAR24 - VAR2->VAR28, VAR4[VAR18] - VAR7);
        VAR25 = FUN5(VAR25 - VAR2->VAR29, VAR4[VAR18] - VAR2->VAR27);
        VAR16[VAR18] = FUN5(VAR24, VAR25);
    }
    for (VAR18 = VAR19; VAR18 < VAR20; VAR18++)
    {
        int VAR32 = VAR2->VAR33 - VAR4[VAR18];
        if (VAR32 > 0)
        {
            VAR16[VAR18] += VAR32 >> 2;
        }
        VAR15[VAR18] = FUN5(VAR34[VAR18 >> VAR2->VAR35][VAR2->VAR36], VAR16[VAR18]);
    }
    if (VAR9 == VAR37 || VAR9 == VAR38)
    {
        int VAR39, VAR40, VAR41;
        if (VAR10 > 8)
            return -1;
        VAR18 = VAR19;
        for (VAR40 = 0; VAR40 < VAR10; VAR40++)
        {
            VAR18 += VAR12[VAR40];
            if (VAR18 >= VAR17 || VAR13[VAR40] > VAR17 - VAR18)
                return -1;
            if (VAR14[VAR40] >= 4)
            {
                VAR41 = (VAR14[VAR40] - 3) * 128;
            }
            else
            {
                VAR41 = (VAR14[VAR40] - 4) * 128;
            }
            for (VAR39 = 0; VAR39 < VAR13[VAR40]; VAR39++)
            {
                VAR15[VAR18++] += VAR41;
            }
        }
    }
    return 0;