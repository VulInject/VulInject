bool FUN1(VAR1 *VAR2, hwaddr VAR3, VAR4 *VAR5, int VAR6, bool VAR7)
{
    hwaddr VAR8;
    VAR4 *VAR9;
    uint64_t VAR10;
    hwaddr VAR11;
    VAR12 *VAR13;
    bool VAR14 = false;
    while (VAR6 > 0)
    {
        VAR8 = VAR6;
        VAR13 = FUN2(VAR2, VAR3, &VAR11, &VAR8, VAR7);
        if (VAR7)
        {
            if (!FUN3(VAR13, VAR7))
            {
                VAR8 = FUN4(VAR13, VAR8, VAR11);
                switch (VAR8)
                {
                case 8:
                    VAR10 = FUN5(VAR5);
                    VAR14 |= FUN6(VAR13, VAR11, VAR10, 8);
                    break;
                case 4:
                    VAR10 = FUN7(VAR5);
                    VAR14 |= FUN6(VAR13, VAR11, VAR10, 4);
                    break;
                case 2:
                    VAR10 = FUN8(VAR5);
                    VAR14 |= FUN6(VAR13, VAR11, VAR10, 2);
                    break;
                case 1:
                    VAR10 = FUN9(VAR5);
                    VAR14 |= FUN6(VAR13, VAR11, VAR10, 1);
                    break;
                default:
                    FUN10();
                }
            }
            else
            {
                VAR11 += FUN11(VAR13);
                VAR9 = FUN12(VAR11);
                memcpy(VAR9, VAR5, VAR8);
                FUN13(VAR11, VAR8);
            }
        }
        else
        {
            if (!FUN3(VAR13, VAR7))
            {
                VAR8 = FUN4(VAR13, VAR8, VAR11);
                switch (VAR8)
                {
                case 8:
                    VAR14 |= FUN14(VAR13, VAR11, &VAR10, 8);
                    FUN15(VAR5, VAR10);
                    break;
                case 4:
                    VAR14 |= FUN14(VAR13, VAR11, &VAR10, 4);
                    FUN16(VAR5, VAR10);
                    break;
                case 2:
                    VAR14 |= FUN14(VAR13, VAR11, &VAR10, 2);
                    FUN17(VAR5, VAR10);
                    break;
                case 1:
                    VAR14 |= FUN14(VAR13, VAR11, &VAR10, 1);
                    FUN18(VAR5, VAR10);
                    break;
                default:
                    FUN10();
                }
            }
            else
            {
                VAR9 = FUN12(VAR13->VAR15 + VAR11);
                memcpy(VAR5, VAR9, VAR8);
            }
        }
        VAR6 -= VAR8;
        VAR5 += VAR8;
        VAR3 += VAR8;
    }
    return VAR14;
}