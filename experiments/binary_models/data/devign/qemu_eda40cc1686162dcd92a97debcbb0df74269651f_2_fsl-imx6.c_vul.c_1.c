static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    uint16_t VAR7;
    VAR3 *VAR8 = NULL;
    for (VAR7 = 0; VAR7 < VAR9; VAR7++)
    {
        if (VAR9 > 1)
        {
            FUN3(FUN4(&VAR6->VAR10[VAR7]), VAR11, "", &VAR12);
        }
        if (VAR7)
        {
            FUN5(FUN4(&VAR6->VAR10[VAR7]), true, "", &VAR12);
        }
        FUN5(FUN4(&VAR6->VAR10[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN6(VAR4, VAR8);
            return;
        }
    }
    FUN3(FUN4(&VAR6->VAR13), VAR9, "", &VAR12);
    FUN3(FUN4(&VAR6->VAR13), VAR14 + VAR15, "", &VAR12);
    FUN5(FUN4(&VAR6->VAR13), true, "", &VAR8);
    if (VAR8)
    {
        FUN6(VAR4, VAR8);
        return;
    }
    FUN7(FUN8(&VAR6->VAR13), 0, VAR11);
    for (VAR7 = 0; VAR7 < VAR9; VAR7++)
    {
        FUN9(FUN8(&VAR6->VAR13), VAR7, FUN10(FUN11(&VAR6->VAR10[VAR7]), VAR16));
        FUN9(FUN8(&VAR6->VAR13), VAR7 + VAR9, FUN10(FUN11(&VAR6->VAR10[VAR7]), VAR17));
    }
    FUN5(FUN4(&VAR6->VAR18), true, "", &VAR8);
    if (VAR8)
    {
        FUN6(VAR4, VAR8);
        return;
    }
    FUN7(FUN8(&VAR6->VAR18), 0, VAR19);
    FUN5(FUN4(&VAR6->VAR20), true, "", &VAR8);
    if (VAR8)
    {
        FUN6(VAR4, VAR8);
        return;
    }
    FUN7(FUN8(&VAR6->VAR20), 0, VAR21);
    for (VAR7 = 0; VAR7 < VAR22; VAR7++)
    {
        static const struct
        {
            hwaddr VAR23;
            unsigned int VAR24;
        } VAR25[VAR22] = {
            {VAR26, VAR27},
            {VAR28, VAR29},
            {VAR30, VAR31},
            {VAR32, VAR33},
            {VAR34, VAR35},
        };
        if (VAR7 < VAR36)
        {
            VAR37 *VAR38;
            VAR38 = VAR39[VAR7];
            if (!VAR38)
            {
                char *VAR40 = FUN12("", VAR7 + 1);
                VAR38 = FUN13(VAR40, "");
                FUN14(VAR40);
                VAR39[VAR7] = VAR38;
            }
            FUN15(FUN11(&VAR6->VAR41[VAR7]), "", VAR38);
        }
        FUN5(FUN4(&VAR6->VAR41[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN6(VAR4, VAR8);
            return;
        }
        FUN7(FUN8(&VAR6->VAR41[VAR7]), 0, VAR25[VAR7].VAR23);
        FUN9(FUN8(&VAR6->VAR41[VAR7]), 0, FUN10(FUN11(&VAR6->VAR13), VAR25[VAR7].VAR24));
    }
    VAR6->VAR42.VAR18 = FUN16(&VAR6->VAR18);
    FUN5(FUN4(&VAR6->VAR42), true, "", &VAR8);
    if (VAR8)
    {
        FUN6(VAR4, VAR8);
        return;
    }
    FUN7(FUN8(&VAR6->VAR42), 0, VAR43);
    FUN9(FUN8(&VAR6->VAR42), 0, FUN10(FUN11(&VAR6->VAR13), VAR44));
    for (VAR7 = 0; VAR7 < VAR45; VAR7++)
    {
        static const struct
        {
            hwaddr VAR23;
            unsigned int VAR24;
        } VAR46[VAR45] = {
            {VAR47, VAR48},
            {VAR49, VAR50},
        };
        VAR6->VAR51[VAR7].VAR18 = FUN16(&VAR6->VAR18);
        FUN5(FUN4(&VAR6->VAR51[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN6(VAR4, VAR8);
            return;
        }
        FUN7(FUN8(&VAR6->VAR51[VAR7]), 0, VAR46[VAR7].VAR23);
        FUN9(FUN8(&VAR6->VAR51[VAR7]), 0, FUN10(FUN11(&VAR6->VAR13), VAR46[VAR7].VAR24));
    }
    for (VAR7 = 0; VAR7 < VAR52; VAR7++)
    {
        static const struct
        {
            hwaddr VAR23;
            unsigned int VAR24;
        } VAR53[VAR52] = {{VAR54, VAR55}, {VAR56, VAR57}, {VAR58, VAR59}};
        FUN5(FUN4(&VAR6->VAR60[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN6(VAR4, VAR8);
            return;
        }
        FUN7(FUN8(&VAR6->VAR60[VAR7]), 0, VAR53[VAR7].VAR23);
        FUN9(FUN8(&VAR6->VAR60[VAR7]), 0, FUN10(FUN11(&VAR6->VAR13), VAR53[VAR7].VAR24));
    }
    for (VAR7 = 0; VAR7 < VAR61; VAR7++)
    {
        static const struct
        {
            hwaddr VAR23;
            unsigned int VAR62;
            unsigned int VAR63;
        } VAR64[VAR61] = {
            {VAR65, VAR66, VAR67},
            {VAR68, VAR69, VAR70},
            {VAR71, VAR72, VAR73},
            {VAR74, VAR75, VAR76},
            {VAR77, VAR78, VAR79},
            {VAR80, VAR81, VAR82},
            {VAR83, VAR84, VAR85},
        };
        FUN5(FUN4(&VAR6->VAR86[VAR7]), true, "", &VAR12);
        FUN5(FUN4(&VAR6->VAR86[VAR7]), true, "", &VAR12);
        FUN5(FUN4(&VAR6->VAR86[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN6(VAR4, VAR8);
            return;
        }
        FUN7(FUN8(&VAR6->VAR86[VAR7]), 0, VAR64[VAR7].VAR23);
        FUN9(FUN8(&VAR6->VAR86[VAR7]), 0, FUN10(FUN11(&VAR6->VAR13), VAR64[VAR7].VAR62));
        FUN9(FUN8(&VAR6->VAR86[VAR7]), 1, FUN10(FUN11(&VAR6->VAR13), VAR64[VAR7].VAR63));
    }
    for (VAR7 = 0; VAR7 < VAR87; VAR7++)
    {
        static const struct
        {
            hwaddr VAR23;
            unsigned int VAR24;
        } VAR88[VAR87] = {
            {VAR89, VAR90},
            {VAR91, VAR92},
            {VAR93, VAR94},
            {VAR95, VAR96},
        };
        FUN5(FUN4(&VAR6->VAR97[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN6(VAR4, VAR8);
            return;
        }
        FUN7(FUN8(&VAR6->VAR97[VAR7]), 0, VAR88[VAR7].VAR23);
        FUN9(FUN8(&VAR6->VAR97[VAR7]), 0, FUN10(FUN11(&VAR6->VAR13), VAR88[VAR7].VAR24));
    }
    for (VAR7 = 0; VAR7 < VAR98; VAR7++)
    {
        static const struct
        {
            hwaddr VAR23;
            unsigned int VAR24;
        } VAR99[VAR98] = {
            {VAR100, VAR101},
            {VAR102, VAR103},
            {VAR104, VAR105},
            {VAR106, VAR107},
            {VAR108, VAR109},
        };
        FUN5(FUN4(&VAR6->VAR110[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN6(VAR4, VAR8);
            return;
        }
        FUN7(FUN8(&VAR6->VAR110[VAR7]), 0, VAR99[VAR7].VAR23);
        FUN9(FUN8(&VAR6->VAR110[VAR7]), 0, FUN10(FUN11(&VAR6->VAR13), VAR99[VAR7].VAR24));
    }
    FUN5(FUN4(&VAR6->VAR111), true, "", &VAR8);
    if (VAR8)
    {
        FUN6(VAR4, VAR8);
        return;
    }
    FUN7(FUN8(&VAR6->VAR111), 0, VAR112);
    FUN9(FUN8(&VAR6->VAR111), 0, FUN10(FUN11(&VAR6->VAR13), VAR113));
    FUN9(FUN8(&VAR6->VAR111), 1, FUN10(FUN11(&VAR6->VAR13), VAR114));
    FUN17(&VAR6->VAR115, NULL, "", VAR116, &VAR8);
    if (VAR8)
    {
        FUN6(VAR4, VAR8);
        return;
    }
    FUN18(FUN19(), VAR117, &VAR6->VAR115);
    FUN17(&VAR6->VAR118, NULL, "", VAR119, &VAR8);
    if (VAR8)
    {
        FUN6(VAR4, VAR8);
        return;
    }
    FUN18(FUN19(), VAR120, &VAR6->VAR118);
    FUN20(&VAR6->VAR121, NULL, "", VAR122, &VAR8);
    if (VAR8)
    {
        FUN6(VAR4, VAR8);
        return;
    }
    FUN18(FUN19(), VAR123, &VAR6->VAR121);
    FUN21(&VAR6->VAR124, NULL, "", &VAR6->VAR121, 0, VAR125);
    FUN18(FUN19(), VAR126, &VAR6->VAR124);
}