int FUN1(VAR1 *VAR2, int VAR3, int VAR4, int *VAR5, int *VAR6)
{
    VAR7 *VAR8, *VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15, VAR16, VAR17, VAR18;
    int VAR19, VAR20, VAR21, VAR22;
    int VAR23, VAR24, VAR25, VAR26;
    int VAR27 = 0, VAR28 = 0;
    int VAR29[5][2];
    const int VAR30 = 1 + VAR2->VAR31;
    VAR15 = 8 * (1 << (VAR2->VAR32 - 1));
    if (VAR2->VAR33 == VAR34 && !VAR2->VAR35)
        VAR15 = VAR15 * 2;
    if (VAR2->VAR36)
    {
        VAR19 = -16;
        VAR20 = -16;
        if (VAR2->VAR37)
            VAR15 *= 2;
        if (VAR2->VAR38 == NULL || VAR2->VAR38->VAR39->VAR40 != VAR41)
        {
            VAR21 = VAR2->VAR42 * 16;
            VAR22 = VAR2->VAR43 * 16;
        }
        else
        {
            VAR21 = VAR2->VAR44;
            VAR22 = VAR2->VAR45;
        }
    }
    else
    {
        VAR19 = 0;
        VAR20 = 0;
        VAR21 = VAR2->VAR42 * 16 - 16;
        VAR22 = VAR2->VAR43 * 16 - 16;
    }
    switch (VAR2->VAR46)
    {
    case VAR47:
    default:
        FUN2(VAR2, &VAR13, &VAR14);
        VAR16 = 0;
        break;
    case VAR48:
        VAR16 = FUN3(VAR2, &VAR13, &VAR14, VAR15, VAR19, VAR20, VAR21, VAR22);
        break;
    case VAR49:
        VAR16 = FUN4(VAR2, &VAR13, &VAR14, VAR15 / 2, VAR19, VAR20, VAR21, VAR22);
        break;
    case VAR50:
        VAR16 = FUN5(VAR2, &VAR13, &VAR14, VAR15 / 2, VAR19, VAR20, VAR21, VAR22);
        break;
    case VAR51:
    case VAR52:
        VAR23 = VAR19 - VAR2->VAR3 * 16;
        VAR25 = VAR21 - VAR2->VAR3 * 16;
        VAR24 = VAR20 - VAR2->VAR4 * 16;
        VAR26 = VAR22 - VAR2->VAR4 * 16;
        if (VAR2->VAR33 == VAR34)
        {
            static const int VAR53[4] = {2, 1, 1, -1};
            const int VAR54 = VAR2->VAR55[0];
            const int VAR56 = VAR2->VAR57[0];
            VAR29[0][0] = VAR2->VAR58[VAR56][0];
            VAR29[0][1] = VAR2->VAR58[VAR56][1];
            VAR29[1][0] = VAR2->VAR58[VAR56 - 1][0];
            VAR29[1][1] = VAR2->VAR58[VAR56 - 1][1];
            if (VAR29[1][0] > (VAR25 << VAR30))
                VAR29[1][0] = (VAR25 << VAR30);
            if ((VAR2->VAR4 == 0 || VAR2->VAR59 || VAR2->VAR60))
            {
                VAR27 = VAR29[1][0];
                VAR28 = VAR29[1][1];
            }
            else
            {
                VAR29[2][0] = VAR2->VAR58[VAR56 - VAR54][0];
                VAR29[2][1] = VAR2->VAR58[VAR56 - VAR54][1];
                VAR29[3][0] = VAR2->VAR58[VAR56 - VAR54 + VAR53[0]][0];
                VAR29[3][1] = VAR2->VAR58[VAR56 - VAR54 + VAR53[0]][1];
                if (VAR29[2][1] > (VAR26 << VAR30))
                    VAR29[2][1] = (VAR26 << VAR30);
                if (VAR29[3][0] < (VAR23 << VAR30))
                    VAR29[3][0] = (VAR23 << VAR30);
                if (VAR29[3][1] > (VAR26 << VAR30))
                    VAR29[3][1] = (VAR26 << VAR30);
                VAR29[4][0] = VAR27 = FUN6(VAR29[1][0], VAR29[2][0], VAR29[3][0]);
                VAR29[4][1] = VAR28 = FUN6(VAR29[1][1], VAR29[2][1], VAR29[3][1]);
            }
        }
        else
        {
            const int VAR61 = VAR2->VAR4 * VAR2->VAR42 + VAR2->VAR3;
            VAR27 = VAR2->VAR62[0][0][0];
            VAR28 = VAR2->VAR62[0][0][1];
            VAR29[0][0] = VAR2->VAR63[0][VAR61];
            VAR29[0][1] = VAR2->VAR63[1][VAR61];
            if (VAR2->VAR3 == 0)
            {
                VAR29[1][0] = 0;
                VAR29[1][1] = 0;
            }
            else
            {
                VAR29[1][0] = VAR2->VAR63[0][VAR61 - 1];
                VAR29[1][1] = VAR2->VAR63[1][VAR61 - 1];
                if (VAR29[1][0] > (VAR25 << VAR30))
                    VAR29[1][0] = (VAR25 << VAR30);
            }
            if (!(VAR2->VAR4 == 0 || VAR2->VAR59 || VAR2->VAR60))
            {
                VAR29[2][0] = VAR2->VAR63[0][VAR61 - VAR2->VAR42];
                VAR29[2][1] = VAR2->VAR63[1][VAR61 - VAR2->VAR42];
                VAR29[3][0] = VAR2->VAR63[0][VAR61 - VAR2->VAR42 + 1];
                VAR29[3][1] = VAR2->VAR63[1][VAR61 - VAR2->VAR42 + 1];
                if (VAR29[2][1] > (VAR26 << VAR30))
                    VAR29[2][1] = (VAR26 << VAR30);
                if (VAR29[3][0] > (VAR25 << VAR30))
                    VAR29[3][0] = (VAR25 << VAR30);
                if (VAR29[3][0] < (VAR23 << VAR30))
                    VAR29[3][0] = (VAR23 << VAR30);
                if (VAR29[3][1] > (VAR26 << VAR30))
                    VAR29[3][1] = (VAR26 << VAR30);
                VAR29[4][0] = FUN6(VAR29[1][0], VAR29[2][0], VAR29[3][0]);
                VAR29[4][1] = FUN6(VAR29[1][1], VAR29[2][1], VAR29[3][1]);
            }
        }
        VAR16 = FUN7(VAR2, &VAR13, &VAR14, VAR29, VAR27, VAR28, VAR23, VAR24, VAR25, VAR26);
        VAR13 += VAR2->VAR3 * 16;
        VAR14 += VAR2->VAR4 * 16;
        break;
    }
    VAR17 = VAR3 * 16;
    VAR18 = VAR4 * 16;
    VAR8 = VAR2->VAR64[0] + (VAR18 * VAR2->VAR65) + VAR17;
    VAR9 = VAR2->VAR66[0] + (VAR14 * VAR2->VAR65) + VAR13;
    VAR10 = FUN8(VAR8, VAR2->VAR65);
    VAR11 = FUN9(VAR8, VAR2->VAR65);
    VAR12 = FUN10(VAR8, VAR9, VAR2->VAR65);
    VAR12 = VAR12 >> 8;
    VAR10 = VAR10 >> 8;
    VAR11 = (VAR11 >> 8) - (VAR10 * VAR10);
    VAR2->VAR67[VAR2->VAR42 * VAR4 + VAR3] = VAR11;
    VAR2->VAR68 += VAR11;
    VAR2->VAR69 += VAR12;
    FUN11("", VAR11, VAR2->VAR68, VAR10, VAR12, VAR13 - VAR17, VAR14 - VAR18);
    if (VAR12 <= 64 || VAR12 < VAR11)
    {
        if (VAR2->VAR46 != VAR47)
        {
            FUN12(VAR2, &VAR13, &VAR14, VAR16, VAR19, VAR20, VAR21, VAR22, VAR27, VAR28);
        }
        else
        {
            VAR13 -= 16 * VAR2->VAR3;
            VAR14 -= 16 * VAR2->VAR4;
        }
        *VAR5 = VAR13;
        *VAR6 = VAR14;
        return 0;
    }
    else
    {
        *VAR5 = 0;
        *VAR6 = 0;
        return 1;
    }
}