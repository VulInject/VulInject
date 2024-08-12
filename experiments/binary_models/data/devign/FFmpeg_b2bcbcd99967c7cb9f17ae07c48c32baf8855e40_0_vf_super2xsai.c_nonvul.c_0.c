static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, VAR3 *VAR6, int VAR7, int VAR8, int VAR9)
{
    VAR10 *VAR11 = VAR2->VAR12;
    unsigned int VAR13, VAR14;
    uint32_t VAR15[4][4];
    unsigned char *VAR16[4];
    const int VAR17 = VAR11->VAR17;
    const uint32_t VAR18 = VAR11->VAR18;
    const uint32_t VAR19 = VAR11->VAR19;
    const uint32_t VAR20 = VAR11->VAR20;
    const uint32_t VAR21 = VAR11->VAR21;
    VAR16[0] = VAR4;
    VAR16[1] = VAR4;
    VAR16[2] = VAR4 + VAR5 * FUN2(1, VAR9 - 1);
    VAR16[3] = VAR4 + VAR5 * FUN2(2, VAR9 - 1);
    for (VAR14 = 0; VAR14 < VAR9; VAR14++)
    {
        VAR3 *VAR22[2];
        VAR22[0] = VAR6 + VAR7 * 2 * VAR14;
        VAR22[1] = VAR6 + VAR7 * (2 * VAR14 + 1);
        switch (VAR17)
        {
        case 4:
            FUN3(VAR15[0][0], VAR16[0], 0);
            VAR15[0][1] = VAR15[0][0];
            FUN3(VAR15[0][2], VAR16[0], 1);
            FUN3(VAR15[0][3], VAR16[0], 2);
            FUN3(VAR15[1][0], VAR16[1], 0);
            VAR15[1][1] = VAR15[1][0];
            FUN3(VAR15[1][2], VAR16[1], 1);
            FUN3(VAR15[1][3], VAR16[1], 2);
            FUN3(VAR15[2][0], VAR16[2], 0);
            VAR15[2][1] = VAR15[2][0];
            FUN3(VAR15[2][2], VAR16[2], 1);
            FUN3(VAR15[2][3], VAR16[2], 2);
            FUN3(VAR15[3][0], VAR16[3], 0);
            VAR15[3][1] = VAR15[3][0];
            FUN3(VAR15[3][2], VAR16[3], 1);
            FUN3(VAR15[3][3], VAR16[3], 2);
            break;
        case 3:
            FUN4(VAR15[0][0], VAR16[0], 0);
            VAR15[0][1] = VAR15[0][0];
            FUN4(VAR15[0][2], VAR16[0], 1);
            FUN4(VAR15[0][3], VAR16[0], 2);
            FUN4(VAR15[1][0], VAR16[1], 0);
            VAR15[1][1] = VAR15[1][0];
            FUN4(VAR15[1][2], VAR16[1], 1);
            FUN4(VAR15[1][3], VAR16[1], 2);
            FUN4(VAR15[2][0], VAR16[2], 0);
            VAR15[2][1] = VAR15[2][0];
            FUN4(VAR15[2][2], VAR16[2], 1);
            FUN4(VAR15[2][3], VAR16[2], 2);
            FUN4(VAR15[3][0], VAR16[3], 0);
            VAR15[3][1] = VAR15[3][0];
            FUN4(VAR15[3][2], VAR16[3], 1);
            FUN4(VAR15[3][3], VAR16[3], 2);
            break;
        default:
            FUN5(VAR15[0][0], VAR16[0], 0);
            VAR15[0][1] = VAR15[0][0];
            FUN5(VAR15[0][2], VAR16[0], 1);
            FUN5(VAR15[0][3], VAR16[0], 2);
            FUN5(VAR15[1][0], VAR16[1], 0);
            VAR15[1][1] = VAR15[1][0];
            FUN5(VAR15[1][2], VAR16[1], 1);
            FUN5(VAR15[1][3], VAR16[1], 2);
            FUN5(VAR15[2][0], VAR16[2], 0);
            VAR15[2][1] = VAR15[2][0];
            FUN5(VAR15[2][2], VAR16[2], 1);
            FUN5(VAR15[2][3], VAR16[2], 2);
            FUN5(VAR15[3][0], VAR16[3], 0);
            VAR15[3][1] = VAR15[3][0];
            FUN5(VAR15[3][2], VAR16[3], 1);
            FUN5(VAR15[3][3], VAR16[3], 2);
        }
        for (VAR13 = 0; VAR13 < VAR8; VAR13++)
        {
            uint32_t VAR23, VAR24, VAR25, VAR26;
            if (VAR15[2][1] == VAR15[1][2] && VAR15[1][1] != VAR15[2][2])
            {
                VAR26 = VAR15[2][1];
                VAR24 = VAR26;
            }
            else if (VAR15[1][1] == VAR15[2][2] && VAR15[2][1] != VAR15[1][2])
            {
                VAR26 = VAR15[1][1];
                VAR24 = VAR26;
            }
            else if (VAR15[1][1] == VAR15[2][2] && VAR15[2][1] == VAR15[1][2])
            {
                int VAR27 = 0;
                VAR27 += FUN6(VAR15[1][2], VAR15[1][1], VAR15[1][0], VAR15[3][1]);
                VAR27 += FUN6(VAR15[1][2], VAR15[1][1], VAR15[2][0], VAR15[0][1]);
                VAR27 += FUN6(VAR15[1][2], VAR15[1][1], VAR15[3][2], VAR15[2][3]);
                VAR27 += FUN6(VAR15[1][2], VAR15[1][1], VAR15[0][2], VAR15[1][3]);
                if (VAR27 > 0)
                    VAR24 = VAR15[1][2];
                else if (VAR27 < 0)
                    VAR24 = VAR15[1][1];
                else
                    VAR24 = FUN7(VAR15[1][1], VAR15[1][2]);
                VAR26 = VAR24;
            }
            else
            {
                if (VAR15[1][2] == VAR15[2][2] && VAR15[2][2] == VAR15[3][1] && VAR15[2][1] != VAR15[3][2] && VAR15[2][2] != VAR15[3][0])
                    VAR26 = FUN8(VAR15[2][2], VAR15[2][2], VAR15[2][2], VAR15[2][1]);
                else if (VAR15[1][1] == VAR15[2][1] && VAR15[2][1] == VAR15[3][2] && VAR15[3][1] != VAR15[2][2] && VAR15[2][1] != VAR15[3][3])
                    VAR26 = FUN8(VAR15[2][1], VAR15[2][1], VAR15[2][1], VAR15[2][2]);
                else
                    VAR26 = FUN7(VAR15[2][1], VAR15[2][2]);
                if (VAR15[1][2] == VAR15[2][2] && VAR15[1][2] == VAR15[0][1] && VAR15[1][1] != VAR15[0][2] && VAR15[1][2] != VAR15[0][0])
                    VAR24 = FUN8(VAR15[1][2], VAR15[1][2], VAR15[1][2], VAR15[1][1]);
                else if (VAR15[1][1] == VAR15[2][1] && VAR15[1][1] == VAR15[0][2] && VAR15[0][1] != VAR15[1][2] && VAR15[1][1] != VAR15[0][3])
                    VAR24 = FUN8(VAR15[1][2], VAR15[1][1], VAR15[1][1], VAR15[1][1]);
                else
                    VAR24 = FUN7(VAR15[1][1], VAR15[1][2]);
            }
            if (VAR15[1][1] == VAR15[2][2] && VAR15[2][1] != VAR15[1][2] && VAR15[1][0] == VAR15[1][1] && VAR15[1][1] != VAR15[3][2])
                VAR25 = FUN7(VAR15[2][1], VAR15[1][1]);
            else if (VAR15[1][1] == VAR15[2][0] && VAR15[1][2] == VAR15[1][1] && VAR15[1][0] != VAR15[2][1] && VAR15[1][1] != VAR15[3][0])
                VAR25 = FUN7(VAR15[2][1], VAR15[1][1]);
            else
                VAR25 = VAR15[2][1];
            if (VAR15[2][1] == VAR15[1][2] && VAR15[1][1] != VAR15[2][2] && VAR15[2][0] == VAR15[2][1] && VAR15[2][1] != VAR15[0][2])
                VAR23 = FUN7(VAR15[2][1], VAR15[1][1]);
            else if (VAR15[1][0] == VAR15[2][1] && VAR15[2][2] == VAR15[2][1] && VAR15[2][0] != VAR15[1][1] && VAR15[2][1] != VAR15[0][0])
                VAR23 = FUN7(VAR15[2][1], VAR15[1][1]);
            else
                VAR23 = VAR15[1][1];
            switch (VAR17)
            {
            case 4:
                FUN9(VAR22[0] + VAR13 * 8, VAR23);
                FUN9(VAR22[0] + VAR13 * 8 + 4, VAR24);
                FUN9(VAR22[1] + VAR13 * 8, VAR25);
                FUN9(VAR22[1] + VAR13 * 8 + 4, VAR26);
                break;
            case 3:
                FUN10(VAR22[0] + VAR13 * 6, VAR23);
                FUN10(VAR22[0] + VAR13 * 6 + 3, VAR24);
                FUN10(VAR22[1] + VAR13 * 6, VAR25);
                FUN10(VAR22[1] + VAR13 * 6 + 3, VAR26);
                break;
            default:
                FUN9(VAR22[0] + VAR13 * 4, VAR23 | (VAR24 << 16));
                FUN9(VAR22[1] + VAR13 * 4, VAR25 | (VAR26 << 16));
            }
            VAR15[0][0] = VAR15[0][1];
            VAR15[0][1] = VAR15[0][2];
            VAR15[0][2] = VAR15[0][3];
            VAR15[1][0] = VAR15[1][1];
            VAR15[1][1] = VAR15[1][2];
            VAR15[1][2] = VAR15[1][3];
            VAR15[2][0] = VAR15[2][1];
            VAR15[2][1] = VAR15[2][2];
            VAR15[2][2] = VAR15[2][3];
            VAR15[3][0] = VAR15[3][1];
            VAR15[3][1] = VAR15[3][2];
            VAR15[3][2] = VAR15[3][3];
            if (VAR13 < VAR8 - 3)
            {
                VAR13 += 3;
                switch (VAR17)
                {
                case 4:
                    FUN3(VAR15[0][3], VAR16[0], VAR13);
                    FUN3(VAR15[1][3], VAR16[1], VAR13);
                    FUN3(VAR15[2][3], VAR16[2], VAR13);
                    FUN3(VAR15[3][3], VAR16[3], VAR13);
                    break;
                case 3:
                    FUN4(VAR15[0][3], VAR16[0], VAR13);
                    FUN4(VAR15[1][3], VAR16[1], VAR13);
                    FUN4(VAR15[2][3], VAR16[2], VAR13);
                    FUN4(VAR15[3][3], VAR16[3], VAR13);
                    break;
                default:
                    FUN5(VAR15[0][3], VAR16[0], VAR13);
                    FUN5(VAR15[1][3], VAR16[1], VAR13);
                    FUN5(VAR15[2][3], VAR16[2], VAR13);
                    FUN5(VAR15[3][3], VAR16[3], VAR13);
                }
                VAR13 -= 3;
            }
        }
        VAR16[0] = VAR16[1];
        VAR16[1] = VAR16[2];
        VAR16[2] = VAR16[3];
        VAR16[3] = VAR16[2];
        if (VAR14 < VAR9 - 3)
            VAR16[3] += VAR5;
    }
}