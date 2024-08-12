static int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    int VAR7;
    for (VAR7 = 0; VAR7 < VAR5->VAR8.VAR9; VAR7++)
    {
        f0r_param_info_t VAR10;
        char *VAR11;
        int VAR12;
        VAR5->FUN2(&VAR10, VAR7);
        if (*VAR3)
        {
            if (!(VAR11 = FUN3(&VAR3, "")))
                return FUN4(VAR13);
            VAR3++;
            VAR12 = FUN5(VAR2, VAR10, VAR7, VAR11);
            FUN6(VAR11);
            if (VAR12 < 0)
                return VAR12;
        }
        FUN7(VAR2, VAR14, "", VAR7, VAR10.VAR15, VAR10.VAR16 == VAR17 ? "" : VAR10.VAR16 == VAR18 ? ""
                                                                                                                                   : VAR10.VAR16 == VAR19    ? ""
                                                                                                                                   : VAR10.VAR16 == VAR20 ? ""
                                                                                                                                   : VAR10.VAR16 == VAR21   ? ""
                                                                                                                                                                     : "",
               VAR10.VAR22);
        FUN7(VAR2, VAR23, "");
        switch (VAR10.VAR16)
        {
            void *VAR24;
            double VAR25;
            char VAR26[128];
            f0r_param_color_t VAR27;
            f0r_param_position_t VAR28;
        case VAR17:
            VAR24 = &VAR25;
            VAR5->FUN8(VAR5->VAR29, VAR24, VAR7);
            FUN7(VAR2, VAR23, "", VAR25 >= 0.5 && VAR25 <= 1.0 ? "" : "");
            break;
        case VAR18:
            VAR24 = &VAR25;
            VAR5->FUN8(VAR5->VAR29, VAR24, VAR7);
            FUN7(VAR2, VAR23, "", VAR25);
            break;
        case VAR19:
            VAR24 = &VAR27;
            VAR5->FUN8(VAR5->VAR29, VAR24, VAR7);
            FUN7(VAR2, VAR23, "", VAR27.VAR30, VAR27.VAR31, VAR27.VAR32);
            break;
        case VAR20:
            VAR24 = &VAR28;
            VAR5->FUN8(VAR5->VAR29, VAR24, VAR7);
            FUN7(VAR2, VAR23, "", VAR28.VAR33, VAR28.VAR34);
            break;
        default:
            VAR24 = VAR26;
            VAR5->FUN8(VAR5->VAR29, VAR24, VAR7);
            FUN7(VAR2, VAR23, "", VAR26);
            break;
        }
        FUN7(VAR2, VAR14, "");
    }