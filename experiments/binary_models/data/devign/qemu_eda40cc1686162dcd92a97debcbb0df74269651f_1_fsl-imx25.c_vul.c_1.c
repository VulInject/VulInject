static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    uint8_t VAR7;
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
        } VAR19[VAR16] = {{VAR20, VAR21}, {VAR22, VAR23}, {VAR24, VAR25}, {VAR26, VAR27}, {VAR28, VAR29}};
        if (VAR7 < VAR30)
        {
            VAR31 *VAR32;
            VAR32 = VAR33[VAR7];
            if (!VAR32)
            {
                char VAR34[20];
                snprintf(VAR34, sizeof(VAR34), "", VAR7);
                VAR32 = FUN11(VAR34, "");
            }
            FUN12(FUN10(&VAR6->VAR35[VAR7]), "", VAR32);
        }
        FUN3(FUN4(&VAR6->VAR35[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN5(VAR4, VAR8);
            return;
        }
        FUN6(FUN7(&VAR6->VAR35[VAR7]), 0, VAR19[VAR7].VAR17);
        FUN8(FUN7(&VAR6->VAR35[VAR7]), 0, FUN9(FUN10(&VAR6->VAR10), VAR19[VAR7].VAR18));
    }
    for (VAR7 = 0; VAR7 < VAR36; VAR7++)
    {
        static const struct
        {
            hwaddr VAR17;
            unsigned int VAR18;
        } VAR37[VAR36] = {{VAR38, VAR39}, {VAR40, VAR41}, {VAR42, VAR43}, {VAR44, VAR45}};
        VAR6->VAR46[VAR7].VAR14 = FUN13(&VAR6->VAR14);
        FUN3(FUN4(&VAR6->VAR46[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN5(VAR4, VAR8);
            return;
        }
        FUN6(FUN7(&VAR6->VAR46[VAR7]), 0, VAR37[VAR7].VAR17);
        FUN8(FUN7(&VAR6->VAR46[VAR7]), 0, FUN9(FUN10(&VAR6->VAR10), VAR37[VAR7].VAR18));
    }
    for (VAR7 = 0; VAR7 < VAR47; VAR7++)
    {
        static const struct
        {
            hwaddr VAR17;
            unsigned int VAR18;
        } VAR48[VAR47] = {{VAR49, VAR50}, {VAR51, VAR52}};
        VAR6->VAR53[VAR7].VAR14 = FUN13(&VAR6->VAR14);
        FUN3(FUN4(&VAR6->VAR53[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN5(VAR4, VAR8);
            return;
        }
        FUN6(FUN7(&VAR6->VAR53[VAR7]), 0, VAR48[VAR7].VAR17);
        FUN8(FUN7(&VAR6->VAR53[VAR7]), 0, FUN9(FUN10(&VAR6->VAR10), VAR48[VAR7].VAR18));
    }
    FUN14(FUN10(&VAR6->VAR54), &VAR55[0]);
    FUN3(FUN4(&VAR6->VAR54), true, "", &VAR8);
    if (VAR8)
    {
        FUN5(VAR4, VAR8);
        return;
    }
    FUN6(FUN7(&VAR6->VAR54), 0, VAR56);
    FUN8(FUN7(&VAR6->VAR54), 0, FUN9(FUN10(&VAR6->VAR10), VAR57));
    for (VAR7 = 0; VAR7 < VAR58; VAR7++)
    {
        static const struct
        {
            hwaddr VAR17;
            unsigned int VAR18;
        } VAR59[VAR58] = {{VAR60, VAR61}, {VAR62, VAR63}, {VAR64, VAR65}};
        FUN3(FUN4(&VAR6->VAR66[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN5(VAR4, VAR8);
            return;
        }
        FUN6(FUN7(&VAR6->VAR66[VAR7]), 0, VAR59[VAR7].VAR17);
        FUN8(FUN7(&VAR6->VAR66[VAR7]), 0, FUN9(FUN10(&VAR6->VAR10), VAR59[VAR7].VAR18));
    }
    for (VAR7 = 0; VAR7 < VAR67; VAR7++)
    {
        static const struct
        {
            hwaddr VAR17;
            unsigned int VAR18;
        } VAR68[VAR67] = {{VAR69, VAR70}, {VAR71, VAR72}, {VAR73, VAR74}, {VAR75, VAR76}};
        FUN3(FUN4(&VAR6->VAR77[VAR7]), true, "", &VAR8);
        if (VAR8)
        {
            FUN5(VAR4, VAR8);
            return;
        }
        FUN6(FUN7(&VAR6->VAR77[VAR7]), 0, VAR68[VAR7].VAR17);
        FUN8(FUN7(&VAR6->VAR77[VAR7]), 0, FUN9(FUN10(&VAR6->VAR10), VAR68[VAR7].VAR18));
    }
    FUN15(&VAR6->VAR78[0], NULL, "", VAR79, &VAR8);
    if (VAR8)
    {
        FUN5(VAR4, VAR8);
        return;
    }
    FUN16(FUN17(), VAR80, &VAR6->VAR78[0]);
    FUN15(&VAR6->VAR78[1], NULL, "", VAR81, &VAR8);
    if (VAR8)
    {
        FUN5(VAR4, VAR8);
        return;
    }
    FUN16(FUN17(), VAR82, &VAR6->VAR78[1]);
    FUN18(&VAR6->VAR83, NULL, "", VAR84, &VAR8);
    if (VAR8)
    {
        FUN5(VAR4, VAR8);
        return;
    }
    FUN16(FUN17(), VAR85, &VAR6->VAR83);
    FUN19(&VAR6->VAR86, NULL, "", &VAR6->VAR83, 0, VAR87);
    FUN16(FUN17(), VAR88, &VAR6->VAR86);
}