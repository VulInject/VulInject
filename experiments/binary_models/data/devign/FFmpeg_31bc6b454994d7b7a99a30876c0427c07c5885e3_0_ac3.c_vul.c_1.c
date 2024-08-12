void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7, int VAR8, int VAR9, int VAR10, VAR11 *VAR12, VAR11 *VAR13, VAR11 *VAR14, VAR3 *VAR15)
{
    int16_t VAR16[50];
    int VAR17, VAR18;
    int VAR19, VAR20, VAR21, VAR22, VAR23;
    int VAR24, VAR25, VAR26;
    VAR19 = VAR27[VAR5];
    VAR20 = VAR27[VAR6 - 1] + 1;
    if (VAR19 == 0)
    {
        VAR24 = 0;
        VAR24 = FUN2(VAR24, VAR4[0], VAR4[1], 384);
        VAR16[0] = VAR4[0] - VAR7 - VAR24;
        VAR24 = FUN2(VAR24, VAR4[1], VAR4[2], 384);
        VAR16[1] = VAR4[1] - VAR7 - VAR24;
        VAR21 = 7;
        for (VAR17 = 2; VAR17 < 7; VAR17++)
        {
            if (!(VAR8 && VAR17 == 6))
                VAR24 = FUN2(VAR24, VAR4[VAR17], VAR4[VAR17 + 1], 384);
            VAR25 = VAR4[VAR17] - VAR7;
            VAR26 = VAR4[VAR17] - VAR2->VAR28;
            VAR16[VAR17] = VAR25 - VAR24;
            if (!(VAR8 && VAR17 == 6))
            {
                if (VAR4[VAR17] <= VAR4[VAR17 + 1])
                {
                    VAR21 = VAR17 + 1;
                    break;
                }
            }
        }
        VAR22 = VAR20;
        if (VAR22 > 22)
            VAR22 = 22;
        for (VAR17 = VAR21; VAR17 < VAR22; VAR17++)
        {
            if (!(VAR8 && VAR17 == 6))
                VAR24 = FUN3(VAR24, VAR4[VAR17], VAR4[VAR17 + 1], VAR17);
            VAR25 = FUN4(VAR25 - VAR2->VAR29, VAR4[VAR17] - VAR7);
            VAR26 = FUN4(VAR26 - VAR2->VAR30, VAR4[VAR17] - VAR2->VAR28);
            VAR16[VAR17] = FUN4(VAR25 - VAR24, VAR26);
        }
        VAR21 = 22;
    }
    else
    {
        VAR21 = VAR19;
        VAR25 = (VAR2->VAR31 << 8) + 768;
        VAR26 = (VAR2->VAR32 << 8) + 768;
    }
    for (VAR17 = VAR21; VAR17 < VAR20; VAR17++)
    {
        VAR25 = FUN4(VAR25 - VAR2->VAR29, VAR4[VAR17] - VAR7);
        VAR26 = FUN4(VAR26 - VAR2->VAR30, VAR4[VAR17] - VAR2->VAR28);
        VAR16[VAR17] = FUN4(VAR25, VAR26);
    }
    for (VAR17 = VAR19; VAR17 < VAR20; VAR17++)
    {
        VAR23 = VAR2->VAR33 - VAR4[VAR17];
        if (VAR23 > 0)
        {
            VAR16[VAR17] += VAR23 >> 2;
        }
        VAR15[VAR17] = FUN4(VAR34[VAR17 >> VAR2->VAR35][VAR2->VAR36], VAR16[VAR17]);
    }
    if (VAR9 == VAR37 || VAR9 == VAR38)
    {
        int VAR39, VAR40, VAR41;
        VAR39 = 0;
        for (VAR40 = 0; VAR40 < VAR10; VAR40++)
        {
            VAR39 += VAR12[VAR40];
            if (VAR14[VAR40] >= 4)
            {
                VAR41 = (VAR14[VAR40] - 3) << 7;
            }
            else
            {
                VAR41 = (VAR14[VAR40] - 4) << 7;
            }
            for (VAR18 = 0; VAR18 < VAR13[VAR40]; VAR18++)
            {
                VAR15[VAR39] += VAR41;
                VAR39++;
            }
        }
    }
}