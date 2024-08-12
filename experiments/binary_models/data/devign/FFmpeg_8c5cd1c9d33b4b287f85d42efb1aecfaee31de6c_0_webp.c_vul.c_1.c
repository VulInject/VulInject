static int FUN1(VAR1 *VAR2, enum ImageRole VAR3, int VAR4, int VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    int VAR10, VAR11, VAR12, VAR13, VAR14, VAR15;
    VAR7 = &VAR2->VAR16[VAR3];
    VAR7->VAR3 = VAR3;
    if (!VAR7->VAR17)
    {
        VAR7->VAR17 = FUN2();
        if (!VAR7->VAR17)
            return FUN3(VAR18);
    }
    VAR7->VAR17->VAR19 = VAR20;
    VAR7->VAR17->VAR15 = VAR4;
    VAR7->VAR17->VAR21 = VAR5;
    if (VAR3 == VAR22 && !VAR7->VAR23)
    {
        ThreadFrame VAR24 = {.VAR25 = VAR7->VAR17};
        VAR12 = FUN4(VAR2->VAR26, &VAR24, 0);
    }
    else
        VAR12 = FUN5(VAR7->VAR17, 1);
    if (VAR12 < 0)
        return VAR12;
    if (FUN6(&VAR2->VAR27))
    {
        VAR7->VAR28 = FUN7(&VAR2->VAR27, 4);
        if (VAR7->VAR28 < 1 || VAR7->VAR28 > 11)
        {
            FUN8(VAR2->VAR26, VAR29, "", VAR7->VAR28);
            return VAR30;
        }
        VAR7->VAR31 = FUN9(1 << VAR7->VAR28, sizeof(*VAR7->VAR31));
        if (!VAR7->VAR31)
            return FUN3(VAR18);
    }
    else
    {
        VAR7->VAR28 = 0;
    }
    VAR7->VAR32 = 1;
    if (VAR3 == VAR22 && FUN6(&VAR2->VAR27))
    {
        VAR12 = FUN10(VAR2);
        if (VAR12 < 0)
            return VAR12;
        VAR7->VAR32 = VAR2->VAR32;
    }
    VAR7->VAR33 = FUN9(VAR7->VAR32 * VAR34, sizeof(*VAR7->VAR33));
    if (!VAR7->VAR33)
        return FUN3(VAR18);
    for (VAR10 = 0; VAR10 < VAR7->VAR32; VAR10++)
    {
        VAR9 = &VAR7->VAR33[VAR10 * VAR34];
        for (VAR11 = 0; VAR11 < VAR34; VAR11++)
        {
            int VAR35 = VAR36[VAR11];
            if (!VAR11 && VAR7->VAR28 > 0)
                VAR35 += 1 << VAR7->VAR28;
            if (FUN6(&VAR2->VAR27))
            {
                FUN11(VAR2, &VAR9[VAR11]);
            }
            else
            {
                VAR12 = FUN12(VAR2, &VAR9[VAR11], VAR35);
                if (VAR12 < 0)
                    return VAR12;
            }
        }
    }
    VAR15 = VAR7->VAR17->VAR15;
    if (VAR3 == VAR22 && VAR2->VAR37 > 0)
        VAR15 = VAR2->VAR37;
    VAR13 = 0;
    VAR14 = 0;
    while (VAR14 < VAR7->VAR17->VAR21)
    {
        int VAR38;
        VAR9 = FUN13(VAR2, VAR7, VAR13, VAR14);
        VAR38 = FUN14(&VAR9[VAR39], &VAR2->VAR27);
        if (VAR38 < VAR40)
        {
            VAR41 *VAR42 = FUN15(VAR7->VAR17, VAR13, VAR14);
            VAR42[2] = VAR38;
            VAR42[1] = FUN14(&VAR9[VAR43], &VAR2->VAR27);
            VAR42[3] = FUN14(&VAR9[VAR44], &VAR2->VAR27);
            VAR42[0] = FUN14(&VAR9[VAR45], &VAR2->VAR27);
            if (VAR7->VAR28)
                FUN16(VAR7, FUN17(VAR42));
            VAR13++;
            if (VAR13 == VAR15)
            {
                VAR13 = 0;
                VAR14++;
            }
        }
        else if (VAR38 < VAR40 + VAR46)
        {
            int VAR47, VAR48, VAR49, VAR50, VAR51;
            VAR47 = VAR38 - VAR40;
            if (VAR47 < 4)
            {
                VAR48 = VAR47 + 1;
            }
            else
            {
                int VAR52 = (VAR47 - 2) >> 1;
                int VAR53 = 2 + (VAR47 & 1) << VAR52;
                VAR48 = VAR53 + FUN7(&VAR2->VAR27, VAR52) + 1;
            }
            VAR47 = FUN14(&VAR9[VAR54], &VAR2->VAR27);
            if (VAR47 > 39)
            {
                FUN8(VAR2->VAR26, VAR29, "", VAR47);
                return VAR30;
            }
            if (VAR47 < 4)
            {
                VAR49 = VAR47 + 1;
            }
            else
            {
                int VAR52 = VAR47 - 2 >> 1;
                int VAR53 = 2 + (VAR47 & 1) << VAR52;
                VAR49 = VAR53 + FUN7(&VAR2->VAR27, VAR52) + 1;
            }
            if (VAR49 <= VAR55)
            {
                int VAR56 = VAR57[VAR49 - 1][0];
                int VAR58 = VAR57[VAR49 - 1][1];
                VAR49 = FUN18(1, VAR56 + VAR58 * VAR15);
            }
            else
            {
                VAR49 -= VAR55;
            }
            VAR50 = VAR13;
            VAR51 = VAR14;
            if (VAR49 <= VAR13)
            {
                VAR50 -= VAR49;
                VAR49 = 0;
            }
            else
            {
                VAR50 = 0;
                VAR49 -= VAR13;
            }
            while (VAR49 >= VAR15)
            {
                VAR51--;
                VAR49 -= VAR15;
            }
            if (VAR49 > 0)
            {
                VAR50 = VAR15 - VAR49;
                VAR51--;
            }
            VAR50 = FUN18(0, VAR50);
            VAR51 = FUN18(0, VAR51);
            for (VAR10 = 0; VAR10 < VAR48; VAR10++)
            {
                VAR41 *VAR59 = FUN15(VAR7->VAR17, VAR50, VAR51);
                VAR41 *VAR42 = FUN15(VAR7->VAR17, VAR13, VAR14);
                FUN19(VAR42, VAR59);
                if (VAR7->VAR28)
                    FUN16(VAR7, FUN17(VAR42));
                VAR13++;
                VAR50++;
                if (VAR13 == VAR15)
                {
                    VAR13 = 0;
                    VAR14++;
                }
                if (VAR50 == VAR15)
                {
                    VAR50 = 0;
                    VAR51++;
                }
                if (VAR14 == VAR7->VAR17->VAR21 || VAR51 == VAR7->VAR17->VAR21)
                    break;
            }
        }
        else
        {
            VAR41 *VAR42 = FUN15(VAR7->VAR17, VAR13, VAR14);
            int VAR60 = VAR38 - (VAR40 + VAR46);
            if (!VAR7->VAR28)
            {
                FUN8(VAR2->VAR26, VAR29, "");
                return VAR30;
            }
            if (VAR60 >= 1 << VAR7->VAR28)
            {
                FUN8(VAR2->VAR26, VAR29, "");
                return VAR30;
            }
            FUN20(VAR42, VAR7->VAR31[VAR60]);
            VAR13++;
            if (VAR13 == VAR15)
            {
                VAR13 = 0;
                VAR14++;
            }
        }
    }
    return 0;
}