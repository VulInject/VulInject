static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, int VAR7, int final)
{
    int VAR8, VAR9 = 0, VAR10 = 1;
    if (VAR6->VAR11)
    {
        VAR9 = FUN2(VAR2->VAR12 - VAR6->VAR11, 0);
        VAR10 = FUN2(VAR2->VAR13 - VAR6->VAR11, 1);
    }
    if (VAR6->VAR14)
    {
        int VAR15 = VAR6->VAR16 ? VAR2->VAR17->VAR18[0]->VAR19.VAR20 : VAR21;
        FUN3(VAR4, ""%VAR22\"", VAR15);
        if (!VAR6->VAR16)
            FUN3(VAR4, ""%""\"", VAR6->VAR23);
        FUN3(VAR4, ""%VAR24\""%VAR24\""%VAR22\"", VAR6->VAR25, VAR6->VAR26, VAR6->VAR16 ? VAR10 : 1);
        if (VAR6->VAR16)
        {
            int64_t VAR27 = 0;
            FUN3(VAR4, "");
            for (VAR8 = VAR9; VAR8 < VAR2->VAR12;)
            {
                VAR28 *VAR29 = VAR2->VAR30[VAR8];
                int VAR31 = 0;
                FUN3(VAR4, "");
                if (VAR8 == VAR9 || VAR29->VAR32 != VAR27)
                {
                    VAR27 = VAR29->VAR32;
                    FUN3(VAR4, ""%""\"", VAR29->VAR32);
                }
                FUN3(VAR4, ""%VAR22\"", VAR29->VAR33);
                while (VAR8 + VAR31 + 1 < VAR2->VAR12 && VAR2->VAR30[VAR8 + VAR31 + 1]->VAR33 == VAR29->VAR33 && VAR2->VAR30[VAR8 + VAR31 + 1]->VAR32 == VAR2->VAR30[VAR8 + VAR31]->VAR32 + VAR2->VAR30[VAR8 + VAR31]->VAR33)
                    VAR31++;
                if (VAR31 > 0)
                    FUN3(VAR4, ""%VAR22\"", VAR31);
                FUN3(VAR4, "");
                VAR8 += 1 + VAR31;
                VAR27 += (1 + VAR31) * VAR29->VAR33;
            }
            FUN3(VAR4, "");
        }
        FUN3(VAR4, "");
    }
    else if (VAR6->VAR34)
    {
        FUN3(VAR4, "", VAR2->VAR35);
        FUN3(VAR4, ""%VAR22\""%""\""%VAR22\"", VAR21, VAR6->VAR23, VAR10);
        FUN3(VAR4, ""%""-%""\"", VAR2->VAR36, VAR2->VAR36 + VAR2->VAR37 - 1);
        for (VAR8 = VAR9; VAR8 < VAR2->VAR12; VAR8++)
        {
            VAR28 *VAR29 = VAR2->VAR30[VAR8];
            FUN3(VAR4, ""%""-%""\"", VAR29->VAR38, VAR29->VAR38 + VAR29->VAR39 - 1);
            if (VAR29->VAR40)
                FUN3(VAR4, ""%""-%""\"", VAR29->VAR38, VAR29->VAR38 + VAR29->VAR40 - 1);
            FUN3(VAR4, "");
        }
        FUN3(VAR4, "");
    }
    else
    {
        FUN3(VAR4, ""%VAR22\""%""\""%VAR22\"", VAR21, VAR6->VAR23, VAR10);
        FUN3(VAR4, ""%VAR24\"", VAR2->VAR35);
        for (VAR8 = VAR9; VAR8 < VAR2->VAR12; VAR8++)
        {
            VAR28 *VAR29 = VAR2->VAR30[VAR8];
            FUN3(VAR4, ""%VAR24\"", VAR29->VAR41);
        }
        FUN3(VAR4, "");
    }
    if (VAR6->VAR42 && VAR9 < VAR2->VAR12)
    {
        int VAR15 = VAR2->VAR17->VAR18[0]->VAR19.VAR20;
        char VAR43[1024];
        char VAR44[1024];
        VAR3 *VAR45 = NULL;
        VAR46 *VAR47 = NULL;
        int VAR48 = 0;
        int VAR49 = 0;
        const char *VAR50 = FUN4(VAR6->VAR51);
        int VAR52 = VAR50 && !strcmp(VAR50, "");
        FUN5(VAR44, sizeof(VAR44), VAR6->VAR51, VAR7);
        snprintf(VAR43, sizeof(VAR43), VAR52 ? "" : "", VAR44);
        FUN6(&VAR47, VAR6);
        FUN7(&VAR45, VAR43, VAR53, NULL, &VAR47);
        FUN8(&VAR47);
        for (VAR8 = VAR9; VAR8 < VAR2->VAR12; VAR8++)
        {
            VAR28 *VAR29 = VAR2->VAR30[VAR8];
            double VAR33 = (double)VAR29->VAR33 / VAR15;
            if (VAR48 <= VAR33)
                VAR48 = FUN9(VAR33);
        }
        FUN10(VAR45, 6, -1, VAR48, VAR10, VAR54);
        FUN11(VAR45, VAR2->VAR35, VAR6->VAR34, VAR2->VAR37, VAR2->VAR36);
        for (VAR8 = VAR9; VAR8 < VAR2->VAR12; VAR8++)
        {
            VAR28 *VAR29 = VAR2->VAR30[VAR8];
            VAR49 = FUN12(VAR45, 0, VAR6->VAR34, (double)VAR29->VAR33 / VAR15, 0, VAR29->VAR39, VAR29->VAR38, NULL, VAR6->VAR34 ? VAR2->VAR35 : VAR29->VAR41, NULL);
            if (VAR49 < 0)
            {
                FUN13(VAR2->VAR17, VAR55, "");
            }
        }
        if (final)
            FUN14(VAR45);
        FUN15(VAR45);
        if (VAR52)
            if (FUN16(VAR43, VAR44) < 0)
            {
                FUN13(VAR2->VAR17, VAR55, "", VAR43, VAR44);
            }
    }
}