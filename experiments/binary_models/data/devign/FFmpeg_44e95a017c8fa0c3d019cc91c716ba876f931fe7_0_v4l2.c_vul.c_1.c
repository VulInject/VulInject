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
            VAR12 = 0;
            FUN3(VAR2, VAR16, "", VAR4->VAR6);
            for (VAR11 = 0;; VAR11++)
            {
                VAR6.VAR17 = VAR11;
                if (FUN4(VAR4->VAR18, VAR19, &VAR6) < 0)
                {
                    VAR12 = FUN5(VAR20);
                    break;
                }
                if (!FUN6(VAR6.VAR21, VAR4->VAR6))
                    break;
            }
            if (VAR12 < 0)
            {
                FUN3(VAR2, VAR14, "", VAR4->VAR6);
                return VAR12;
            }
            if (FUN4(VAR4->VAR18, VAR22, &VAR6.VAR23) < 0)
            {
                VAR12 = FUN5(VAR20);
                FUN3(VAR2, VAR14, "", FUN7(VAR12));
                return VAR12;
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
            if (FUN4(VAR4->VAR18, VAR19, &VAR6) < 0)
            {
                VAR12 = FUN5(VAR20);
                if (VAR12 == FUN5(VAR27))
                {
                    VAR9 = &VAR7.VAR28.VAR29.VAR30;
                    break;
                }
                FUN3(VAR2, VAR14, "", FUN7(VAR12));
                return VAR12;
            }
            if (VAR6.VAR23 == VAR4->VAR15)
            {
                FUN3(VAR2, VAR16, "" VAR31 "", VAR6.VAR21, (VAR32)VAR6.VAR23, VAR9->VAR33, VAR9->VAR34);
                break;
            }
        }
    }
    else
    {
        VAR9 = &VAR7.VAR28.VAR29.VAR30;
    }
    VAR7.VAR35 = VAR36;
    if (FUN4(VAR4->VAR18, VAR37, &VAR7) < 0)
    {
        VAR12 = FUN5(VAR20);
        FUN3(VAR2, VAR14, "", FUN7(VAR12));
        return VAR12;
    }
    if (VAR10.VAR38 && VAR10.VAR39)
    {
        if (VAR7.VAR28.VAR29.VAR40 & VAR41)
        {
            VAR9 = &VAR7.VAR28.VAR29.VAR30;
            FUN3(VAR2, VAR16, "", VAR10.VAR39, VAR10.VAR38);
            VAR9->VAR33 = VAR10.VAR39;
            VAR9->VAR34 = VAR10.VAR38;
            if (FUN4(VAR4->VAR18, VAR42, &VAR7) < 0)
            {
                VAR12 = FUN5(VAR20);
                FUN3(VAR2, VAR14, "", FUN7(VAR12));
                return VAR12;
            }
            if (VAR10.VAR38 != VAR9->VAR34 || VAR10.VAR39 != VAR9->VAR33)
            {
                FUN3(VAR2, VAR43, ""
                                        "",
                       VAR10.VAR39, VAR10.VAR38, VAR9->VAR33, VAR9->VAR34);
            }
        }
        else
        {
            FUN3(VAR2, VAR24, "");
        }
    }
    if (VAR9->VAR34 > 0 && VAR9->VAR33 > 0)
    {
        VAR2->VAR44[0]->VAR45.VAR38 = VAR9->VAR34;
        VAR2->VAR44[0]->VAR45.VAR39 = VAR9->VAR33;
        VAR2->VAR44[0]->VAR46 = VAR2->VAR44[0]->VAR45;
    }
    else
        FUN3(VAR2, VAR24, "");
    return 0;
}