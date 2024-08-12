int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6, VAR7, VAR8, VAR9;
    int VAR10, VAR11;
    const int VAR12 = VAR2->VAR13 ? 1 : 8;
    int VAR14, VAR15;
    VAR3 = FUN2(&VAR2->VAR16, 16);
    VAR4 = FUN2(&VAR2->VAR16, 8);
    if (VAR3 != 6 + 2 * VAR4)
    {
        FUN3(VAR2->VAR17, VAR18, "", VAR3);
        for (VAR5 = 0; VAR5 < VAR4; VAR5++)
        {
            VAR11 = FUN2(&VAR2->VAR16, 8) - 1;
            FUN3(VAR2->VAR17, VAR19, "", VAR11);
            for (VAR10 = 0; VAR10 < VAR2->VAR4; VAR10++)
                if (VAR11 == VAR2->VAR20[VAR10])
                    break;
            if (VAR10 == VAR2->VAR4)
            {
                FUN3(VAR2->VAR17, VAR18, "", VAR10);
                VAR2->VAR21[VAR5] = VAR10;
                VAR2->VAR22[VAR5] = VAR2->VAR23[VAR10] * VAR2->VAR24[VAR10];
                VAR2->VAR25[VAR5] = VAR2->VAR23[VAR10];
                VAR2->VAR26[VAR5] = VAR2->VAR24[VAR10];
                VAR2->VAR27[VAR5] = FUN2(&VAR2->VAR16, 4);
                VAR2->VAR28[VAR5] = FUN2(&VAR2->VAR16, 4);
                if (VAR2->VAR27[VAR5] < 0 || VAR2->VAR28[VAR5] < 0 || VAR2->VAR27[VAR5] >= 4 || VAR2->VAR28[VAR5] >= 4)
                    goto VAR29;
                if (!VAR2->VAR30[0][VAR2->VAR27[VAR5]].VAR31 || !VAR2->VAR30[1][VAR2->VAR28[VAR5]].VAR31)
                    goto VAR29;
                VAR8 = FUN2(&VAR2->VAR16, 8);
                VAR14 = FUN2(&VAR2->VAR16, 8);
                VAR15 = FUN2(&VAR2->VAR16, 4);
                VAR9 = FUN2(&VAR2->VAR16, 4);
                for (VAR5 = 0; VAR5 < VAR4; VAR5++)
                    VAR2->VAR32[VAR5] = 1024;
                if (VAR4 > 1)
                {
                    VAR2->VAR33 = (VAR2->VAR34 + VAR2->VAR35 * VAR12 - 1) / (VAR2->VAR35 * VAR12);
                    VAR2->VAR36 = (VAR2->VAR37 + VAR2->VAR38 * VAR12 - 1) / (VAR2->VAR38 * VAR12);
                }
                else if (!VAR2->VAR39)
                {
                    VAR6 = VAR2->VAR35 / VAR2->VAR25[0];
                    VAR7 = VAR2->VAR38 / VAR2->VAR26[0];
                    VAR2->VAR33 = (VAR2->VAR34 + VAR6 * VAR12 - 1) / (VAR6 * VAR12);
                    VAR2->VAR36 = (VAR2->VAR37 + VAR7 * VAR12 - 1) / (VAR7 * VAR12);
                    VAR2->VAR22[0] = 1;
                    VAR2->VAR25[0] = 1;
                    VAR2->VAR26[0] = 1;
                    if (VAR2->VAR17->VAR40 & VAR41)
                        FUN3(VAR2->VAR17, VAR19, "", VAR2->VAR13 ? "" : "", VAR2->VAR42 ? "" : "", VAR8, VAR9, VAR14, VAR2->VAR43, VAR2->VAR44 ? "" : (VAR2->VAR45 ? "" : ""));
                    for (VAR5 = VAR2->VAR46; VAR5 > 0; VAR5--)
                        FUN4(&VAR2->VAR16, 8);
                    if (VAR2->VAR13)
                    {
                        if (VAR47 && VAR2->VAR39)
                        {
                            if (FUN5(VAR2, VAR8, VAR9, VAR14) < 0)
                        }
                        else
                        {
                            if (VAR2->VAR42)
                            {
                                if (FUN6(VAR2, VAR8, VAR9) < 0)
                            }
                            else
                            {
                                if (FUN7(VAR2, VAR8, VAR9) < 0)
                            }
                            else
                            {
                                if (VAR2->VAR48 && VAR8)
                                {
                                    if (FUN8(VAR2, VAR8, VAR14, VAR15, VAR9) < 0)
                                }
                                else
                                {
                                    if (FUN9(VAR2, VAR4, VAR15, VAR9) < 0)
                                        FUN10();
                                    return 0;
                                VAR29:
                                    FUN3(VAR2->VAR17, VAR18, "");