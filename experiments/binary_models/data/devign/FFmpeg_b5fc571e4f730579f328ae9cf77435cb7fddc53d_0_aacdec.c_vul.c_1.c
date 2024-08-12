static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = &VAR2->VAR8;
    VAR9 *VAR10 = VAR7->VAR10;
    MPEG4AudioConfig VAR11 = {0};
    int VAR12 = FUN2(VAR4);
    int VAR13 = 0;
    int VAR14, VAR15;
    if (VAR5)
    {
        VAR13 = 1;
        VAR5 = FUN3(VAR5, FUN4(VAR4));
    }
    else
        VAR5 = FUN4(VAR4);
    if (VAR12 % 8)
    {
        FUN5(VAR2->VAR8.VAR10, ""
                                                       "",
                               1);
    }
    VAR14 = FUN6(NULL, VAR10, &VAR11, VAR4->VAR16 + (VAR12 / 8), VAR5, VAR13);
    if (VAR14 < 0)
        if (VAR7->VAR11.VAR17 != VAR11.VAR17 || VAR7->VAR11.VAR18 != VAR11.VAR18)
        {
            FUN7(VAR10, VAR19, "");
            VAR2->VAR20 = 0;
            VAR15 = (VAR14 + 7) / 8;
            if (VAR10->VAR21 < VAR15)
            {
                FUN8(VAR10->VAR22);
                VAR10->VAR22 = FUN9(VAR15 + VAR23);
                if (!VAR10->VAR22)
                    return FUN10(VAR24);
            }
            VAR10->VAR21 = VAR15;
            memcpy(VAR10->VAR22, VAR4->VAR16 + (VAR12 / 8), VAR15);
            memset(VAR10->VAR22 + VAR15, 0, VAR23);
        }
    FUN11(VAR4, VAR14);
    return VAR14;