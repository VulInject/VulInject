static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR2->VAR7;
    int VAR8, VAR9;
    MOVAtom VAR10 = {FUN2("")};
    int VAR11;
    if (VAR4->VAR12 != 0 && VAR4->VAR12 != VAR13)
    {
        FUN3(VAR2, VAR14, "", VAR4->VAR12, VAR13);
        return FUN4(VAR15);
    }
    VAR4->VAR16 = VAR2;
    VAR4->VAR17 = -1;
    if (VAR7->VAR18)
        VAR10.VAR19 = FUN5(VAR7);
    else
        VAR10.VAR19 = VAR20;
    do
    {
        if (VAR4->VAR21)
            FUN6(VAR7, 0, VAR22);
        if ((VAR9 = FUN7(VAR4, VAR7, VAR10)) < 0)
        {
            FUN3(VAR2, VAR14, "");
            FUN8(VAR2);
            return VAR9;
        }
    } while (VAR7->VAR18 && !VAR4->VAR23 && !VAR4->VAR21++);
    if (!VAR4->VAR23)
    {
        FUN3(VAR2, VAR14, "");
        FUN8(VAR2);
        return VAR24;
    }
    FUN3(VAR4->VAR16, VAR25, "" VAR26 "", FUN9(VAR7));
    if (VAR7->VAR18)
    {
        if (VAR4->VAR27 > 0 && !VAR4->VAR28)
            FUN10(VAR2);
        for (VAR11 = 0; VAR11 < VAR2->VAR29; VAR11++)
            if (VAR2->VAR30[VAR11]->VAR31->VAR32 == FUN2(""))
            {
                FUN11(VAR2, VAR2->VAR30[VAR11]);
            }
            else if (VAR2->VAR30[VAR11]->VAR31->VAR32 == FUN2(""))
            {
                FUN12(VAR2, VAR2->VAR30[VAR11]);
            }
    }
    for (VAR11 = 0; VAR11 < VAR2->VAR29; VAR11++)
    {
        VAR33 *VAR34 = VAR2->VAR30[VAR11];
        VAR35 *VAR36 = VAR34->VAR5;
        if (VAR36->VAR37 > 0)
        {
            VAR38 *VAR39;
            int VAR40 = -1;
            for (VAR8 = 0; VAR8 < VAR2->VAR29; VAR8++)
                if (VAR2->VAR30[VAR8]->VAR41 == VAR36->VAR37)
                    VAR40 = VAR8;
            if (VAR40 < 0 || VAR40 == VAR11)
                continue;
            VAR39 = FUN13(VAR2->VAR30[VAR40]->VAR42, "", NULL, 0);
            if (VAR39)
                FUN14(&VAR34->VAR42, "", VAR39->VAR43, 0);
        }
    }
    FUN15(VAR2);
    for (VAR11 = 0; VAR11 < VAR2->VAR29; VAR11++)
    {
        VAR33 *VAR34 = VAR2->VAR30[VAR11];
        VAR35 *VAR36 = VAR34->VAR5;
        FUN16(VAR4, VAR36);
        if (VAR34->VAR31->VAR44 == VAR45 && VAR34->VAR31->VAR46 == VAR47)
        {
            VAR34->VAR48 = VAR36->VAR49;
        }
        if (VAR34->VAR31->VAR44 == VAR50 && VAR36->VAR51 > 0 && VAR36->VAR52 > 0)
            FUN17(&VAR34->VAR53.VAR54, &VAR34->VAR53.VAR55, VAR36->VAR56 * (VAR57)VAR36->VAR51, VAR36->VAR52, VAR58);
        if (VAR34->VAR31->VAR44 == VAR59)
        {
            if (VAR34->VAR31->VAR60 <= 0 || VAR34->VAR31->VAR61 <= 0)
            {
                VAR34->VAR31->VAR60 = VAR36->VAR60;
                VAR34->VAR31->VAR61 = VAR36->VAR61;
            }
            if (VAR34->VAR31->VAR46 == VAR62)
            {
                if ((VAR9 = FUN18(VAR34)) < 0)
                    return VAR9;
            }
        }
        if (VAR4->VAR63 && VAR4->VAR63 <= 1000000 * 0 + 1000 * 10 + 2 && VAR34->VAR31->VAR46 == VAR64)
        {
            FUN3(VAR2, VAR65, "");
            VAR34->VAR66 = VAR67;
        }
    }
    if (VAR4->VAR68)
    {
        for (VAR11 = 0; VAR11 < VAR2->VAR29; VAR11++)
        {
            VAR33 *VAR34 = VAR2->VAR30[VAR11];
            VAR35 *VAR36 = VAR34->VAR5;
            if (VAR34->VAR69 > 0)
                VAR34->VAR31->VAR70 = VAR36->VAR71 * 8 * VAR36->VAR56 / VAR34->VAR69;
        }
    }
    if (VAR4->VAR72 > 0)
    {
        for (VAR11 = 0; VAR11 < VAR2->VAR29; VAR11++)
        {
            VAR33 *VAR34 = VAR2->VAR30[VAR11];
            VAR35 *VAR36 = VAR34->VAR5;
            if (VAR36->VAR52 > 0)
            {
                VAR34->VAR31->VAR70 = VAR36->VAR71 * 8 * VAR36->VAR56 / VAR36->VAR52;
            }
        }
    }
    for (VAR11 = 0; VAR11 < VAR4->VAR73 && VAR11 < VAR2->VAR29; VAR11++)
    {
        if (VAR4->VAR74[VAR11])
        {
            VAR2->VAR30[VAR11]->VAR31->VAR70 = VAR4->VAR74[VAR11];
        }
    }
    FUN19(VAR2);
    for (VAR11 = 0; VAR11 < VAR2->VAR29; VAR11++)
    {
        VAR33 *VAR34 = VAR2->VAR30[VAR11];
        VAR35 *VAR36 = VAR34->VAR5;
        switch (VAR34->VAR31->VAR44)
        {
        case VAR45:
            VAR9 = FUN20(VAR34, VAR2->VAR42);
            if (VAR9 < 0)
            {
                FUN8(VAR2);
                return VAR9;
            }
            break;
        case VAR50:
            if (VAR36->VAR75)
            {
                VAR9 = FUN21(VAR34, VAR76, (VAR77 *)VAR36->VAR75, sizeof(VAR78) * 9);
                if (VAR9 < 0)
                    return VAR9;
                VAR36->VAR75 = NULL;
            }
            if (VAR36->VAR79)
            {
                VAR9 = FUN21(VAR34, VAR80, (VAR77 *)VAR36->VAR79, sizeof(*VAR36->VAR79));
                if (VAR9 < 0)
                    return VAR9;
                VAR36->VAR79 = NULL;
            }
            if (VAR36->VAR81)
            {
                VAR9 = FUN21(VAR34, VAR82, (VAR77 *)VAR36->VAR81, VAR36->VAR83);
                if (VAR9 < 0)
                    return VAR9;
                VAR36->VAR81 = NULL;
            }
            break;
        }
    }
    FUN22(VAR2, VAR84);
    return 0;
}