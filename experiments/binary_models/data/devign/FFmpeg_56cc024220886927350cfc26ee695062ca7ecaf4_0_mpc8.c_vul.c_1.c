static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    VAR8 *VAR9;
    int VAR10 = 0;
    int64_t VAR11, VAR12;
    VAR4->VAR13 = FUN2(VAR7);
    if (FUN3(VAR7) != VAR14)
    {
        FUN4(VAR2, VAR15, "");
        while (!FUN5(VAR7))
        {
            VAR12 = FUN2(VAR7);
            FUN6(VAR7, &VAR10, &VAR11);
            if (VAR10 == VAR16)
                break;
            FUN7(VAR2, VAR10, VAR12, VAR11);
            if (VAR10 != VAR16)
            {
                FUN4(VAR2, VAR15, "");
                VAR12 = FUN2(VAR7);
                FUN8(VAR7, 4);
                VAR4->VAR17 = FUN9(VAR7);
                if (VAR4->VAR17 != 8)
                {
                    FUN4(VAR2, VAR15, "", VAR4->VAR17);
                    return VAR18;
                    VAR4->VAR19 = FUN10(VAR7);
                    FUN10(VAR7);
                    VAR9 = FUN11(VAR2, NULL);
                    if (!VAR9)
                        return FUN12(VAR20);
                    VAR9->VAR21->VAR22 = VAR23;
                    VAR9->VAR21->VAR24 = VAR25;
                    VAR9->VAR21->VAR26 = 16;
                    if (FUN13(VAR9->VAR21, VAR7, 2) < 0)
                        return FUN12(VAR20);
                    VAR9->VAR21->VAR27 = (VAR9->VAR21->VAR28[1] >> 4) + 1;
                    VAR9->VAR21->VAR29 = VAR30[VAR9->VAR21->VAR28[0] >> 5];
                    FUN14(VAR9, 32, 1152 << (VAR9->VAR21->VAR28[1] & 3) * 2, VAR9->VAR21->VAR29);
                    VAR9->VAR31 = 0;
                    VAR9->VAR32 = VAR4->VAR19 / (1152 << (VAR9->VAR21->VAR28[1] & 3) * 2);
                    VAR11 -= FUN2(VAR7) - VAR12;
                    if (VAR11 > 0)
                        FUN8(VAR7, VAR11);
                    if (VAR7->VAR33)
                    {
                        int64_t VAR12 = FUN2(VAR2->VAR7);
                        VAR4->VAR34 = FUN15(VAR2);
                        FUN16(VAR2->VAR7, VAR12, VAR35);
                        return 0;