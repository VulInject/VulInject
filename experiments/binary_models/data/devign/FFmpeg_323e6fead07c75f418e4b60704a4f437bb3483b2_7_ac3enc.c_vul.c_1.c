static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int8_t VAR5, VAR6 *VAR7, VAR6 *VAR8, VAR9 *VAR10, int VAR11)
{
    int VAR12;
    for (VAR12 = 0; VAR12 < VAR11; VAR12++)
    {
        int VAR13;
        int VAR14 = VAR4[VAR12];
        int VAR15 = VAR7[VAR12] - VAR5;
        int VAR16 = VAR8[VAR12];
        switch (VAR16)
        {
        case 0:
            VAR13 = 0;
            break;
        case 1:
            VAR13 = FUN2(VAR14, VAR15, 3);
            switch (VAR2->VAR17)
            {
            case 0:
                VAR2->VAR18 = &VAR10[VAR12];
                VAR13 = 9 * VAR13;
                VAR2->VAR17 = 1;
                break;
            case 1:
                *VAR2->VAR18 += 3 * VAR13;
                VAR2->VAR17 = 2;
                VAR13 = 128;
                break;
            default:
                *VAR2->VAR18 += VAR13;
                VAR2->VAR17 = 0;
                VAR13 = 128;
                break;
            }
            break;
        case 2:
            VAR13 = FUN2(VAR14, VAR15, 5);
            switch (VAR2->VAR19)
            {
            case 0:
                VAR2->VAR20 = &VAR10[VAR12];
                VAR13 = 25 * VAR13;
                VAR2->VAR19 = 1;
                break;
            case 1:
                *VAR2->VAR20 += 5 * VAR13;
                VAR2->VAR19 = 2;
                VAR13 = 128;
                break;
            default:
                *VAR2->VAR20 += VAR13;
                VAR2->VAR19 = 0;
                VAR13 = 128;
                break;
            }
            break;
        case 3:
            VAR13 = FUN2(VAR14, VAR15, 7);
            break;
        case 4:
            VAR13 = FUN2(VAR14, VAR15, 11);
            switch (VAR2->VAR21)
            {
            case 0:
                VAR2->VAR22 = &VAR10[VAR12];
                VAR13 = 11 * VAR13;
                VAR2->VAR21 = 1;
                break;
            default:
                *VAR2->VAR22 += VAR13;
                VAR2->VAR21 = 0;
                VAR13 = 128;
                break;
            }
            break;
        case 5:
            VAR13 = FUN2(VAR14, VAR15, 15);
            break;
        case 14:
            VAR13 = FUN3(VAR14, VAR15, 14);
            break;
        case 15:
            VAR13 = FUN3(VAR14, VAR15, 16);
            break;
        default:
            VAR13 = FUN3(VAR14, VAR15, VAR16 - 1);
            break;
        }
        VAR10[VAR12] = VAR13;
    }
}