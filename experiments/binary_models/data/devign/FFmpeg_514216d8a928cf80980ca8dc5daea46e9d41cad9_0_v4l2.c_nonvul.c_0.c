static int FUN1(VAR1 *VAR2)
{
    struct VAR3 *VAR4 = VAR2->VAR5;
    struct v4l2_standard VAR6 = {0};
    struct v4l2_streamparm VAR7 = {0};
    struct VAR8 *VAR9;
    AVRational VAR10 = {0};
    int VAR11, VAR12;
    if (VAR4->VAR13 && (VAR12 = FUN2(&VAR10, VAR4->VAR13)) < 0)
    {
        FUN3(VAR2, VAR14, "", VAR4->VAR13);
        return VAR12;
    }
    if (VAR4->VAR6)
    {
        if (VAR4->VAR15)
        {
            FUN3(VAR2, VAR16, "", VAR4->VAR6);
            for (VAR11 = 0;; VAR11++)
            {
                VAR6.VAR17 = VAR11;
                VAR12 = FUN4(VAR4->VAR18, VAR19, &VAR6);
                if (VAR12 < 0 || !FUN5(VAR6.VAR20, VAR4->VAR6))
                    break;
            }
            if (VAR12 < 0)
            {
                VAR12 = VAR21;
                FUN3(VAR2, VAR14, "", VAR4->VAR6);
                return FUN6(VAR12);
            }
            if (FUN4(VAR4->VAR18, VAR22, &VAR6.VAR23) < 0)
            {
                VAR12 = VAR21;
                FUN3(VAR2, VAR14, "", strerror(VAR21));
                return FUN6(VAR12);
            }
        }
        else
        {
            FUN3(VAR2, VAR24, "");
        }
    }
    if (FUN4(VAR4->VAR18, VAR25, &VAR4->VAR15) == 0)
    {
        VAR9 = &VAR6.VAR26;
        for (VAR11 = 0;; VAR11++)
        {
            VAR6.VAR17 = VAR11;
            VAR12 = FUN4(VAR4->VAR18, VAR19, &VAR6);
            if (VAR12 < 0)
            {
                VAR12 = VAR21;
                FUN3(VAR2, VAR14, "", strerror(VAR21));
                return FUN6(VAR12);
            }
            if (VAR6.VAR23 == VAR4->VAR15)
            {
                FUN3(VAR2, VAR16, "" VAR27 "", VAR6.VAR20, (VAR28)VAR6.VAR23, VAR9->VAR29, VAR9->VAR30);
                break;
            }
        }
    }
    else
    {
        VAR9 = &VAR7.VAR31.VAR32.VAR33;
    }
    VAR7.VAR34 = VAR35;
    if (FUN4(VAR4->VAR18, VAR36, &VAR7) < 0)
    {
        VAR12 = VAR21;
        FUN3(VAR2, VAR14, "", strerror(VAR21));
        return FUN6(VAR12);
    }
    if (VAR10.VAR37 && VAR10.VAR38)
    {
        if (VAR7.VAR31.VAR32.VAR39 & VAR40)
        {
            VAR9 = &VAR7.VAR31.VAR32.VAR33;
            FUN3(VAR2, VAR16, "", VAR10.VAR38, VAR10.VAR37);
            VAR9->VAR29 = VAR10.VAR38;
            VAR9->VAR30 = VAR10.VAR37;
            if (FUN4(VAR4->VAR18, VAR41, &VAR7) < 0)
            {
                VAR12 = VAR21;
                FUN3(VAR2, VAR14, "", strerror(VAR21));
                return FUN6(VAR12);
            }
            if (VAR10.VAR37 != VAR9->VAR30 || VAR10.VAR38 != VAR9->VAR29)
            {
                FUN3(VAR2, VAR42, ""
                                        "",
                       VAR10.VAR38, VAR10.VAR37, VAR9->VAR29, VAR9->VAR30);
            }
        }
        else
        {
            FUN3(VAR2, VAR24, "");
        }
    }
    VAR2->VAR43[0]->VAR44.VAR37 = VAR9->VAR30;
    VAR2->VAR43[0]->VAR44.VAR38 = VAR9->VAR29;
    return 0;
}