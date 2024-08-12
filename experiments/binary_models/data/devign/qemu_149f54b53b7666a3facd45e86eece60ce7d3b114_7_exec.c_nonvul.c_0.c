void FUN1(VAR1 *VAR2, hwaddr VAR3, VAR4 *VAR5, int VAR6, bool VAR7)
{
    hwaddr VAR8;
    VAR4 *VAR9;
    uint32_t VAR10;
    hwaddr VAR11;
    VAR12 *VAR13;
    while (VAR6 > 0)
    {
        VAR8 = VAR6;
        VAR13 = FUN2(VAR2, VAR3, &VAR11, &VAR8, VAR7);
        if (VAR7)
        {
            if (!FUN3(VAR13->VAR14))
            {
                if (VAR8 >= 4 && ((VAR11 & 3) == 0))
                {
                    VAR10 = FUN4(VAR5);
                    FUN5(VAR13->VAR14, VAR11, VAR10, 4);
                    VAR8 = 4;
                }
                else if (VAR8 >= 2 && ((VAR11 & 1) == 0))
                {
                    VAR10 = FUN6(VAR5);
                    FUN5(VAR13->VAR14, VAR11, VAR10, 2);
                    VAR8 = 2;
                }
                else
                {
                    VAR10 = FUN7(VAR5);
                    FUN5(VAR13->VAR14, VAR11, VAR10, 1);
                    VAR8 = 1;
                }
            }
            else if (!VAR13->VAR15)
            {
                VAR11 += FUN8(VAR13->VAR14);
                VAR9 = FUN9(VAR11);
                memcpy(VAR9, VAR5, VAR8);
                FUN10(VAR11, VAR8);
            }
        }
        else
        {
            if (!(FUN3(VAR13->VAR14) || FUN11(VAR13->VAR14)))
            {
                if (VAR8 >= 4 && ((VAR11 & 3) == 0))
                {
                    VAR10 = FUN12(VAR13->VAR14, VAR11, 4);
                    FUN13(VAR5, VAR10);
                    VAR8 = 4;
                }
                else if (VAR8 >= 2 && ((VAR11 & 1) == 0))
                {
                    VAR10 = FUN12(VAR13->VAR14, VAR11, 2);
                    FUN14(VAR5, VAR10);
                    VAR8 = 2;
                }
                else
                {
                    VAR10 = FUN12(VAR13->VAR14, VAR11, 1);
                    FUN15(VAR5, VAR10);
                    VAR8 = 1;
                }
            }
            else
            {
                VAR9 = FUN9(VAR13->VAR14->VAR16 + VAR11);
                memcpy(VAR5, VAR9, VAR8);
            }
        }
        VAR6 -= VAR8;
        VAR5 += VAR8;
        VAR3 += VAR8;
    }
}