static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6, VAR7;
    int64_t VAR8[2] = {0};
    int64_t VAR9 = 0;
    Type VAR10, VAR11;
    int VAR12 = 0;
    for (VAR7 = 0; VAR7 < VAR4->VAR13->VAR14; VAR7++)
    {
        int VAR15 = VAR4->VAR16->VAR17->VAR15;
        int VAR18 = VAR4->VAR16->VAR17->VAR18;
        int VAR19 = VAR4->VAR16->VAR20[VAR7];
        if (VAR7 && VAR7 < 3)
        {
            VAR15 >>= VAR4->VAR13->VAR21;
            VAR18 >>= VAR4->VAR13->VAR22;
        }
        for (VAR6 = 2; VAR6 < VAR18 - 2; VAR6++)
        {
            VAR23 *VAR24 = &VAR4->VAR24->VAR25[VAR7][VAR6 * VAR19];
            VAR23 *VAR16 = &VAR4->VAR16->VAR25[VAR7][VAR6 * VAR19];
            VAR23 *VAR26 = &VAR4->VAR26->VAR25[VAR7][VAR6 * VAR19];
            VAR8[VAR6 & 1] += VAR4->FUN2(VAR16 - VAR19, VAR24, VAR16 + VAR19, VAR15);
            VAR8[(VAR6 ^ 1) & 1] += VAR4->FUN2(VAR16 - VAR19, VAR26, VAR16 + VAR19, VAR15);
            VAR9 += VAR4->FUN2(VAR16 - VAR19, VAR16, VAR16 + VAR19, VAR15);
        }
    }
    if (VAR8[0] / (float)VAR8[1] > VAR4->VAR27)
    {
        VAR10 = VAR28;
    }
    else if (VAR8[1] / (float)VAR8[0] > VAR4->VAR27)
    {
        VAR10 = VAR29;
    }
    else if (VAR8[1] / (float)VAR9 > VAR4->VAR30)
    {
        VAR10 = VAR31;
    }
    else
    {
        VAR10 = VAR32;
    }
    memmove(VAR4->VAR33 + 1, VAR4->VAR33, VAR34 - 1);
    VAR4->VAR33[0] = VAR10;
    VAR11 = VAR32;
    for (VAR7 = 0; VAR7 < VAR34; VAR7++)
    {
        if (VAR4->VAR33[VAR7] != VAR32)
        {
            if (VAR11 == VAR32)
                VAR11 = VAR4->VAR33[VAR7];
            if (VAR4->VAR33[VAR7] == VAR11)
            {
                VAR12++;
            }
            else
            {
                VAR12 = 0;
                break;
            }
        }
    }
    if (VAR4->VAR35 == VAR32)
    {
        if (VAR12)
            VAR4->VAR35 = VAR11;
    }
    else
    {
        if (VAR12 > 2)
            VAR4->VAR35 = VAR11;
    }
    if (VAR4->VAR35 == VAR28)
    {
        VAR4->VAR16->VAR17->VAR36 = 1;
        VAR4->VAR16->VAR17->VAR37 = 1;
    }
    else if (VAR4->VAR35 == VAR29)
    {
        VAR4->VAR16->VAR17->VAR36 = 0;
        VAR4->VAR16->VAR17->VAR37 = 1;
    }
    else if (VAR4->VAR35 == VAR31)
    {
        VAR4->VAR16->VAR17->VAR37 = 0;
    }
    VAR4->VAR38[VAR10]++;
    VAR4->VAR39[VAR4->VAR35]++;
    FUN3(VAR2, VAR40, "", FUN4(VAR10), FUN4(VAR4->VAR35));
}