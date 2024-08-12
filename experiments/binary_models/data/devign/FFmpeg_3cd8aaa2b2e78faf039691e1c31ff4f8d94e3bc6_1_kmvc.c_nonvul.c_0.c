static int FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    BitBuf VAR5;
    int VAR6, VAR7;
    int VAR8, VAR9;
    int VAR10, VAR11;
    int VAR12, VAR13, VAR14, VAR15;
    int VAR16, VAR17;
    FUN2(VAR5, &VAR2->VAR18);
    for (VAR11 = 0; VAR11 < VAR4; VAR11 += 8)
        for (VAR10 = 0; VAR10 < VAR3; VAR10 += 8)
        {
            FUN3(VAR5, &VAR2->VAR18, VAR6);
            if (!VAR6)
            {
                FUN3(VAR5, &VAR2->VAR18, VAR6);
                if (!VAR6)
                {
                    if (!FUN4(&VAR2->VAR18))
                    {
                        FUN5(VAR2->VAR19, VAR20, "");
                        return VAR21;
                    }
                    VAR7 = FUN6(&VAR2->VAR18);
                    for (VAR8 = 0; VAR8 < 64; VAR8++)
                        FUN7(VAR2->VAR22, VAR10 + (VAR8 & 0x7), VAR11 + (VAR8 >> 3)) = VAR7;
                }
                else
                {
                    for (VAR8 = 0; VAR8 < 64; VAR8++)
                        FUN7(VAR2->VAR22, VAR10 + (VAR8 & 0x7), VAR11 + (VAR8 >> 3)) = FUN7(VAR2->VAR23, VAR10 + (VAR8 & 0x7), VAR11 + (VAR8 >> 3));
                }
            }
            else
            {
                if (!FUN4(&VAR2->VAR18))
                {
                    FUN5(VAR2->VAR19, VAR20, "");
                    return VAR21;
                }
                for (VAR8 = 0; VAR8 < 4; VAR8++)
                {
                    VAR12 = VAR10 + (VAR8 & 1) * 4;
                    VAR14 = VAR11 + (VAR8 & 2) * 2;
                    FUN3(VAR5, &VAR2->VAR18, VAR6);
                    if (!VAR6)
                    {
                        FUN3(VAR5, &VAR2->VAR18, VAR6);
                        if (!VAR6)
                        {
                            VAR7 = FUN6(&VAR2->VAR18);
                            for (VAR9 = 0; VAR9 < 16; VAR9++)
                                FUN7(VAR2->VAR22, VAR12 + (VAR9 & 3), VAR14 + (VAR9 >> 2)) = VAR7;
                        }
                        else
                        {
                            VAR7 = FUN6(&VAR2->VAR18);
                            VAR16 = (VAR7 & 0xF) - 8;
                            VAR17 = (VAR7 >> 4) - 8;
                            if ((VAR12 + VAR16) + 320 * (VAR14 + VAR17) < 0 || (VAR12 + VAR16) + 320 * (VAR14 + VAR17) > 320 * 197 - 4)
                            {
                                FUN5(VAR2->VAR19, VAR20, "");
                                return VAR21;
                            }
                            for (VAR9 = 0; VAR9 < 16; VAR9++)
                                FUN7(VAR2->VAR22, VAR12 + (VAR9 & 3), VAR14 + (VAR9 >> 2)) = FUN7(VAR2->VAR23, VAR12 + (VAR9 & 3) + VAR16, VAR14 + (VAR9 >> 2) + VAR17);
                        }
                    }
                    else
                    {
                        for (VAR9 = 0; VAR9 < 4; VAR9++)
                        {
                            VAR13 = VAR12 + (VAR9 & 1) * 2;
                            VAR15 = VAR14 + (VAR9 & 2);
                            FUN3(VAR5, &VAR2->VAR18, VAR6);
                            if (!VAR6)
                            {
                                FUN3(VAR5, &VAR2->VAR18, VAR6);
                                if (!VAR6)
                                {
                                    VAR7 = FUN6(&VAR2->VAR18);
                                    FUN7(VAR2->VAR22, VAR13, VAR15) = VAR7;
                                    FUN7(VAR2->VAR22, VAR13 + 1, VAR15) = VAR7;
                                    FUN7(VAR2->VAR22, VAR13, VAR15 + 1) = VAR7;
                                    FUN7(VAR2->VAR22, VAR13 + 1, VAR15 + 1) = VAR7;
                                }
                                else
                                {
                                    VAR7 = FUN6(&VAR2->VAR18);
                                    VAR16 = (VAR7 & 0xF) - 8;
                                    VAR17 = (VAR7 >> 4) - 8;
                                    if ((VAR13 + VAR16) + 320 * (VAR15 + VAR17) < 0 || (VAR13 + VAR16) + 320 * (VAR15 + VAR17) > 320 * 199 - 2)
                                    {
                                        FUN5(VAR2->VAR19, VAR20, "");
                                        return VAR21;
                                    }
                                    FUN7(VAR2->VAR22, VAR13, VAR15) = FUN7(VAR2->VAR23, VAR13 + VAR16, VAR15 + VAR17);
                                    FUN7(VAR2->VAR22, VAR13 + 1, VAR15) = FUN7(VAR2->VAR23, VAR13 + 1 + VAR16, VAR15 + VAR17);
                                    FUN7(VAR2->VAR22, VAR13, VAR15 + 1) = FUN7(VAR2->VAR23, VAR13 + VAR16, VAR15 + 1 + VAR17);
                                    FUN7(VAR2->VAR22, VAR13 + 1, VAR15 + 1) = FUN7(VAR2->VAR23, VAR13 + 1 + VAR16, VAR15 + 1 + VAR17);
                                }
                            }
                            else
                            {
                                FUN7(VAR2->VAR22, VAR13, VAR15) = FUN6(&VAR2->VAR18);
                                FUN7(VAR2->VAR22, VAR13 + 1, VAR15) = FUN6(&VAR2->VAR18);
                                FUN7(VAR2->VAR22, VAR13, VAR15 + 1) = FUN6(&VAR2->VAR18);
                                FUN7(VAR2->VAR22, VAR13 + 1, VAR15 + 1) = FUN6(&VAR2->VAR18);
                            }
                        }
                    }
                }
            }
        }
    return 0;
}