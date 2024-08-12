static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6 = 1;
    VAR7 *VAR8[3], VAR9, VAR10, VAR11;
    float *VAR12[3], VAR13, VAR14, VAR15;
    for (VAR5 = 0; VAR5 < 3; VAR5++)
        if (VAR4->VAR16[0].VAR17 == VAR18)
            VAR12[VAR5] = VAR4->VAR19[VAR5].VAR20;
        else
            VAR8[VAR5] = VAR4->VAR19[VAR5].VAR21;
    for (VAR5 = 0; VAR5 < 2; VAR5++)
        VAR6 *= VAR4->VAR19[0].VAR22[VAR5][1] - VAR4->VAR19[0].VAR22[VAR5][0];
    switch (VAR4->VAR16[0].VAR17)
    {
    case VAR18:
        for (VAR5 = 0; VAR5 < VAR6; VAR5++)
        {
            VAR13 = *VAR12[0] + (VAR23[0] * *VAR12[2]);
            VAR14 = *VAR12[0] - (VAR23[1] * *VAR12[1]) - (VAR23[2] * *VAR12[2]);
            VAR15 = *VAR12[0] + (VAR23[3] * *VAR12[1]);
            *VAR12[0]++ = VAR13;
            *VAR12[1]++ = VAR14;
            *VAR12[2]++ = VAR15;
            break;
        case VAR24:
            for (VAR5 = 0; VAR5 < VAR6; VAR5++)
            {
                VAR9 = *VAR8[0] + (((VAR25[0] * *VAR8[2]) + (1 << 15)) >> 16);
                VAR10 = *VAR8[0] - (((VAR25[1] * *VAR8[1]) + (1 << 15)) >> 16) - (((VAR25[2] * *VAR8[2]) + (1 << 15)) >> 16);
                VAR11 = *VAR8[0] + (((VAR25[3] * *VAR8[1]) + (1 << 15)) >> 16);
                *VAR8[0]++ = VAR9;
                *VAR8[1]++ = VAR10;
                *VAR8[2]++ = VAR11;
                break;
            case VAR26:
                for (VAR5 = 0; VAR5 < VAR6; VAR5++)
                {
                    VAR10 = *VAR8[0] - (*VAR8[2] + *VAR8[1] >> 2);
                    VAR9 = VAR10 + *VAR8[2];
                    VAR11 = VAR10 + *VAR8[1];
                    *VAR8[0]++ = VAR9;
                    *VAR8[1]++ = VAR10;
                    *VAR8[2]++ = VAR11;
                    break