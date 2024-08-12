static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    uint16_t VAR7;
    VAR3 *VAR8 = NULL;
    FUN3(FUN4(&VAR6->VAR9), true, "", &VAR8);
    if (VAR8)
    {
        FUN5(VAR4, VAR8);
        return;
    }
    FUN3(FUN4(&VAR6->VAR10), true, "", &VAR8);
    if (VAR8)
    {
        FUN5(VAR4, VAR8);
        return;
    }
    FUN6(FUN7(&VAR6->VAR10), 0, VAR11);
    FUN8(FUN7(&VAR6->VAR10), 0, FUN9(FUN10(&VAR6->VAR9), VAR12));
    FUN8(FUN7(&VAR6->VAR10), 1, FUN9(FUN10(&VAR6->VAR9), VAR13));
    FUN3(FUN4(&VAR6->VAR14), true, "", &VAR8);
    if (VAR8)
    {
        FUN5(VAR4, VAR8);
        return;
    }
    FUN6(FUN7(&VAR6->VAR14), 0, VAR15);
    for (VAR7 = 0; VAR7 < VAR16; VAR7++)
    {
        static const struct
        {
            hwaddr VAR17;
            unsigned int VAR18;
        } VAR19[VAR16] = {
            {VAR20, VAR21},
            {VAR22, VAR23},
        };
        if (VAR7 < VAR24)
        {
            VAR25 *VAR26;
            VAR26 = VAR27[VAR7];
            if (!VAR26)
            {
                char VAR28[20];
                snprintf(VAR28, sizeof(VAR28), "", VAR7);
                VAR26 = FUN11(VAR28, "");
            }
            FUN12(FUN10(&VAR6->VAR29[VAR7]), "", VAR26);
        }
        FUN3(FUN4(&VAR6->VAR29[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN5(VAR4, VAR8);
            return;
        }
        FUN6(FUN7(&VAR6->VAR29[VAR7]), 0, VAR19[VAR7].VAR17);
        FUN8(FUN7(&VAR6->VAR29[VAR7]), 0, FUN9(FUN10(&VAR6->VAR10), VAR19[VAR7].VAR18));
    }
    VAR6->VAR30.VAR14 = FUN13(&VAR6->VAR14);
    FUN3(FUN4(&VAR6->VAR30), true, "", &VAR8);
    if (VAR8)
    {
        FUN5(VAR4, VAR8);
        return;
    }
    FUN6(FUN7(&VAR6->VAR30), 0, VAR31);
    FUN8(FUN7(&VAR6->VAR30), 0, FUN9(FUN10(&VAR6->VAR10), VAR32));
    for (VAR7 = 0; VAR7 < VAR33; VAR7++)
    {
        static const struct
        {
            hwaddr VAR17;
            unsigned int VAR18;
        } VAR34[VAR33] = {
            {VAR35, VAR36},
            {VAR37, VAR38},
        };
        VAR6->VAR39[VAR7].VAR14 = FUN13(&VAR6->VAR14);
        FUN3(FUN4(&VAR6->VAR39[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN5(VAR4, VAR8);
            return;
        }
        FUN6(FUN7(&VAR6->VAR39[VAR7]), 0, VAR34[VAR7].VAR17);
        FUN8(FUN7(&VAR6->VAR39[VAR7]), 0, FUN9(FUN10(&VAR6->VAR10), VAR34[VAR7].VAR18));
    }
    for (VAR7 = 0; VAR7 < VAR40; VAR7++)
    {
        static const struct
        {
            hwaddr VAR17;
            unsigned int VAR18;
        } VAR41[VAR40] = {{VAR42, VAR43}, {VAR44, VAR45}, {VAR46, VAR47}};
        FUN3(FUN4(&VAR6->VAR48[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN5(VAR4, VAR8);
            return;
        }
        FUN6(FUN7(&VAR6->VAR48[VAR7]), 0, VAR41[VAR7].VAR17);
        FUN8(FUN7(&VAR6->VAR48[VAR7]), 0, FUN9(FUN10(&VAR6->VAR10), VAR41[VAR7].VAR18));
    }
    for (VAR7 = 0; VAR7 < VAR49; VAR7++)
    {
        static const struct
        {
            hwaddr VAR17;
            unsigned int VAR18;
        } VAR50[VAR49] = {{VAR51, VAR52}, {VAR53, VAR54}, {VAR55, VAR56}};
        FUN3(FUN4(&VAR6->VAR57[VAR7]), false, "", &VAR58);
        FUN3(FUN4(&VAR6->VAR57[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN5(VAR4, VAR8);
            return;
        }
        FUN6(FUN7(&VAR6->VAR57[VAR7]), 0, VAR50[VAR7].VAR17);
        FUN8(FUN7(&VAR6->VAR57[VAR7]), 0, FUN9(FUN10(&VAR6->VAR10), VAR50[VAR7].VAR18));
    }
    FUN14(&VAR6->VAR59, NULL, "", VAR60, &VAR8);
    if (VAR8)
    {
        FUN5(VAR4, VAR8);
        return;
    }
    FUN15(FUN16(), VAR61, &VAR6->VAR59);
    FUN14(&VAR6->VAR62, NULL, "", VAR63, &VAR8);
    if (VAR8)
    {
        FUN5(VAR4, VAR8);
        return;
    }
    FUN15(FUN16(), VAR64, &VAR6->VAR62);
    FUN17(&VAR6->VAR65, NULL, "", VAR66, &VAR8);
    if (VAR8)
    {
        FUN5(VAR4, VAR8);
        return;
    }
    FUN15(FUN16(), VAR67, &VAR6->VAR65);
    FUN18(&VAR6->VAR68, NULL, "", &VAR6->VAR65, 0, VAR69);
    FUN15(FUN16(), VAR70, &VAR6->VAR68);
}