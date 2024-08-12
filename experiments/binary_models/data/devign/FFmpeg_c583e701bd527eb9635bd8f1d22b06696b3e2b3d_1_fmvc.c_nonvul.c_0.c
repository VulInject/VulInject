static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned VAR5 = 0, VAR6 = 1, VAR7 = 0;
    int VAR8, VAR9, VAR10;
    while (FUN2(VAR2) > 0)
    {
        GetByteContext VAR11;
        while (FUN2(VAR2) > 0)
        {
            if (VAR6)
            {
                VAR6 = 0;
                if (FUN3(VAR2) > 17)
                {
                    VAR9 = FUN4(VAR2) - 17;
                    if (VAR9 < 4)
                    {
                        do
                        {
                            FUN5(VAR4, FUN4(VAR2));
                            --VAR9;
                        } while (VAR9);
                        VAR7 = FUN3(VAR2);
                        continue;
                    }
                    else
                    {
                        do
                        {
                            FUN5(VAR4, FUN4(VAR2));
                            --VAR9;
                        } while (VAR9);
                        VAR7 = FUN3(VAR2);
                        if (VAR7 < 0x10)
                        {
                            FUN6(VAR2, 1);
                            VAR10 = -(VAR7 >> 2) - 4 * FUN4(VAR2) - 2049;
                            FUN7(&VAR11, VAR4->VAR12, VAR4->VAR13 - VAR4->VAR12);
                            FUN8(&VAR11, FUN9(VAR4) + VAR10, VAR14);
                            FUN5(VAR4, FUN4(&VAR11));
                            FUN5(VAR4, FUN4(&VAR11));
                            FUN5(VAR4, FUN4(&VAR11));
                            VAR9 = VAR7 & 3;
                            if (!VAR9)
                            {
                                VAR5 = 1;
                            }
                            else
                            {
                                do
                                {
                                    FUN5(VAR4, FUN4(VAR2));
                                    --VAR9;
                                } while (VAR9);
                                VAR7 = FUN3(VAR2);
                            }
                            continue;
                        }
                    }
                    VAR5 = 0;
                }
                VAR5 = 1;
            }
            if (VAR5)
            {
                VAR5 = 0;
                VAR7 = FUN3(VAR2);
                if (VAR7 < 0x10)
                {
                    FUN6(VAR2, 1);
                    if (!VAR7)
                    {
                        if (!FUN3(VAR2))
                        {
                            do
                            {
                                FUN6(VAR2, 1);
                                VAR7 += 255;
                            } while (!FUN3(VAR2) && FUN2(VAR2) > 0);
                        }
                        VAR7 += FUN4(VAR2) + 15;
                    }
                    FUN10(VAR4, FUN11(VAR2));
                    for (VAR8 = VAR7 - 1; VAR8 > 0; --VAR8)
                        FUN5(VAR4, FUN4(VAR2));
                    VAR7 = FUN3(VAR2);
                    if (VAR7 < 0x10)
                    {
                        FUN6(VAR2, 1);
                        VAR10 = -(VAR7 >> 2) - 4 * FUN4(VAR2) - 2049;
                        FUN7(&VAR11, VAR4->VAR12, VAR4->VAR13 - VAR4->VAR12);
                        FUN8(&VAR11, FUN9(VAR4) + VAR10, VAR14);
                        FUN5(VAR4, FUN4(&VAR11));
                        FUN5(VAR4, FUN4(&VAR11));
                        FUN5(VAR4, FUN4(&VAR11));
                        VAR9 = VAR7 & 3;
                        if (!VAR9)
                        {
                            VAR5 = 1;
                        }
                        else
                        {
                            do
                            {
                                FUN5(VAR4, FUN4(VAR2));
                                --VAR9;
                            } while (VAR9);
                            VAR7 = FUN3(VAR2);
                        }
                        continue;
                    }
                }
            }
            if (VAR7 >= 0x40)
            {
                FUN6(VAR2, 1);
                VAR10 = -((VAR7 >> 2) & 7) - 1 - 8 * FUN4(VAR2);
                VAR9 = (VAR7 >> 5) - 1;
                FUN7(&VAR11, VAR4->VAR12, VAR4->VAR13 - VAR4->VAR12);
                FUN8(&VAR11, FUN9(VAR4) + VAR10, VAR14);
                FUN5(VAR4, FUN4(&VAR11));
                FUN5(VAR4, FUN4(&VAR11));
                do
                {
                    FUN5(VAR4, FUN4(&VAR11));
                    --VAR9;
                } while (VAR9);
                VAR9 = VAR7 & 3;
                if (!VAR9)
                {
                    VAR5 = 1;
                }
                else
                {
                    do
                    {
                        FUN5(VAR4, FUN4(VAR2));
                        --VAR9;
                    } while (VAR9);
                    VAR7 = FUN3(VAR2);
                }
                continue;
            }
            else if (VAR7 < 0x20)
            {
                break;
            }
            VAR9 = VAR7 & 0x1F;
            FUN6(VAR2, 1);
            if (!VAR9)
            {
                if (!FUN3(VAR2))
                {
                    do
                    {
                        FUN6(VAR2, 1);
                        VAR9 += 255;
                    } while (!FUN3(VAR2) && FUN2(VAR2) > 0);
                }
                VAR9 += FUN4(VAR2) + 31;
            }
            VAR8 = FUN12(VAR2);
            VAR10 = -(VAR8 >> 2) - 1;
            FUN7(&VAR11, VAR4->VAR12, VAR4->VAR13 - VAR4->VAR12);
            FUN8(&VAR11, FUN9(VAR4) + VAR10, VAR14);
            if (VAR9 < 6 || FUN9(VAR4) - FUN13(&VAR11) < 4)
            {
                FUN5(VAR4, FUN4(&VAR11));
                FUN5(VAR4, FUN4(&VAR11));
                do
                {
                    FUN5(VAR4, FUN4(&VAR11));
                    --VAR9;
                } while (VAR9);
            }
            else
            {
                FUN10(VAR4, FUN11(&VAR11));
                for (VAR9 = VAR9 - 2; VAR9; --VAR9)
                    FUN5(VAR4, FUN4(&VAR11));
            }
            VAR9 = VAR8 & 3;
            if (!VAR9)
            {
                VAR5 = 1;
            }
            else
            {
                do
                {
                    FUN5(VAR4, FUN4(VAR2));
                    --VAR9;
                } while (VAR9);
                VAR7 = FUN3(VAR2);
            }
        }
        FUN6(VAR2, 1);
        if (VAR7 < 0x10)
        {
            VAR10 = -(VAR7 >> 2) - 1 - 4 * FUN4(VAR2);
            FUN7(&VAR11, VAR4->VAR12, VAR4->VAR13 - VAR4->VAR12);
            FUN8(&VAR11, FUN9(VAR4) + VAR10, VAR14);
            FUN5(VAR4, FUN4(&VAR11));
            FUN5(VAR4, FUN4(&VAR11));
            VAR9 = VAR7 & 3;
            if (!VAR9)
            {
                VAR5 = 1;
            }
            else
            {
                do
                {
                    FUN5(VAR4, FUN4(VAR2));
                    --VAR9;
                } while (VAR9);
                VAR7 = FUN3(VAR2);
            }
            continue;
        }
        VAR9 = VAR7 & 7;
        if (!VAR9)
        {
            if (!FUN3(VAR2))
            {
                do
                {
                    FUN6(VAR2, 1);
                    VAR9 += 255;
                } while (!FUN3(VAR2) && FUN2(VAR2) > 0);
            }
            VAR9 += FUN4(VAR2) + 7;
        }
        VAR8 = FUN12(VAR2);
        VAR10 = FUN9(VAR4) - 2048 * (VAR7 & 8);
        VAR10 = VAR10 - (VAR8 >> 2);
        if (VAR10 == FUN9(VAR4))
            break;
        VAR10 = VAR10 - 0x4000;
        FUN7(&VAR11, VAR4->VAR12, VAR4->VAR13 - VAR4->VAR12);
        FUN8(&VAR11, VAR10, VAR14);
        if (VAR9 < 6 || FUN9(VAR4) - FUN13(&VAR11) < 4)
        {
            FUN5(VAR4, FUN4(&VAR11));
            FUN5(VAR4, FUN4(&VAR11));
            do
            {
                FUN5(VAR4, FUN4(&VAR11));
                --VAR9;
            } while (VAR9);
        }
        else
        {
            FUN10(VAR4, FUN11(&VAR11));
            for (VAR9 = VAR9 - 2; VAR9; --VAR9)
                FUN5(VAR4, FUN4(&VAR11));
        }
        VAR9 = VAR8 & 3;
        if (!VAR9)
        {
            VAR5 = 1;
        }
        else
        {
            do
            {
                FUN5(VAR4, FUN4(VAR2));
                --VAR9;
            } while (VAR9);
            VAR7 = FUN3(VAR2);
        }
    }
    return 0;
}