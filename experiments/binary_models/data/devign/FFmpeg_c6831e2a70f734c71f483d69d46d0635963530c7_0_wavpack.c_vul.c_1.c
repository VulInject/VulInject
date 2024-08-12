static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int *VAR6)
{
    int VAR7, VAR8;
    int VAR9, VAR10, VAR11, VAR12;
    VAR13 *VAR14 = &VAR2->VAR15[VAR5];
    *VAR6 = 0;
    if ((VAR2->VAR15[0].VAR16[0] < 2U) && (VAR2->VAR15[1].VAR16[0] < 2U) && !VAR2->VAR17 && !VAR2->VAR18)
    {
        if (VAR2->VAR19)
        {
            VAR2->VAR19--;
            if (VAR2->VAR19)
            {
                VAR14->VAR20 -= FUN2(VAR14->VAR20);
                return 0;
            }
            else
            {
                VAR7 = FUN3(VAR4);
                if (VAR7 >= 2)
                {
                    if (FUN4(VAR4) < VAR7 - 1)
                        VAR7 = FUN5(VAR4, VAR7 - 1) | (1 << (VAR7 - 1));
                }
                else
                {
                    if (FUN4(VAR4) < 0)
                        VAR2->VAR19 = VAR7;
                    if (VAR2->VAR19)
                    {
                        memset(VAR2->VAR15[0].VAR16, 0, sizeof(VAR2->VAR15[0].VAR16));
                        memset(VAR2->VAR15[1].VAR16, 0, sizeof(VAR2->VAR15[1].VAR16));
                        VAR14->VAR20 -= FUN2(VAR14->VAR20);
                        return 0;
                        if (VAR2->VAR17)
                        {
                            VAR7 = 0;
                            VAR2->VAR17 = 0;
                        }
                        else
                        {
                            VAR7 = FUN3(VAR4);
                            if (FUN4(VAR4) < 0)
                                if (VAR7 == 16)
                                {
                                    VAR8 = FUN3(VAR4);
                                    if (VAR8 < 2)
                                    {
                                        if (FUN4(VAR4) < 0)
                                            VAR7 += VAR8;
                                    }
                                    else
                                    {
                                        if (FUN4(VAR4) < VAR8 - 1)
                                            VAR7 += FUN5(VAR4, VAR8 - 1) | (1 << (VAR8 - 1));
                                        if (VAR2->VAR18)
                                        {
                                            VAR2->VAR18 = VAR7 & 1;
                                            VAR7 = (VAR7 >> 1) + 1;
                                        }
                                        else
                                        {
                                            VAR2->VAR18 = VAR7 & 1;
                                            VAR7 >>= 1;
                                            VAR2->VAR17 = !VAR2->VAR18;
                                            if (VAR2->VAR21 && !VAR5)
                                                FUN6(VAR2);
                                            if (!VAR7)
                                            {
                                                VAR10 = 0;
                                                VAR11 = FUN7(0) - 1;
                                                FUN8(0);
                                            }
                                            else if (VAR7 == 1)
                                            {
                                                VAR10 = FUN7(0);
                                                VAR11 = FUN7(1) - 1;
                                                FUN9(0);
                                                FUN8(1);
                                            }
                                            else if (VAR7 == 2)
                                            {
                                                VAR10 = FUN7(0) + FUN7(1);
                                                VAR11 = FUN7(2) - 1;
                                                FUN9(0);
                                                FUN9(1);
                                                FUN8(2);
                                            }
                                            else
                                            {
                                                VAR10 = FUN7(0) + FUN7(1) + FUN7(2) * (VAR7 - 2);
                                                VAR11 = FUN7(2) - 1;
                                                FUN9(0);
                                                FUN9(1);
                                                FUN9(2);
                                                if (!VAR14->VAR22)
                                                {
                                                    VAR12 = VAR10 + FUN10(VAR4, VAR11);
                                                    if (FUN4(VAR4) <= 0)
                                                }
                                                else
                                                {
                                                    int VAR23 = (VAR10 * 2 + VAR11 + 1) >> 1;
                                                    while (VAR11 > VAR14->VAR22)
                                                    {
                                                        if (FUN4(VAR4) <= 0)
                                                            if (FUN11(VAR4))
                                                            {
                                                                VAR11 -= (VAR23 - VAR10);
                                                                VAR10 = VAR23;
                                                            }
                                                            else
                                                                VAR11 = VAR23 - VAR10 - 1;
                                                        VAR23 = (VAR10 * 2 + VAR11 + 1) >> 1;
                                                        VAR12 = VAR23;
                                                        VAR9 = FUN11(VAR4);
                                                        if (VAR2->VAR24)
                                                            VAR14->VAR20 += FUN12(VAR12) - FUN2(VAR14->VAR20);
                                                        return VAR9 ? ~VAR12 : VAR12;
                                                    VAR25:
                                                        *VAR6 = 1;
                                                        return 0;