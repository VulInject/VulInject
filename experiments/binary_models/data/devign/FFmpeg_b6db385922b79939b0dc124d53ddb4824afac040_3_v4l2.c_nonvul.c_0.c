static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = VAR2->VAR7;
    struct v4l2_input VAR8 = {0};
    struct v4l2_standard VAR9 = {0};
    struct v4l2_streamparm VAR10 = {0};
    struct VAR11 *VAR12 = &VAR10.VAR13.VAR14.VAR15;
    AVRational VAR16 = {0};
    int VAR17, VAR18;
    VAR10.VAR19 = VAR20;
    if (VAR6->VAR21 && (VAR18 = FUN2(&VAR16, VAR6->VAR21)) < 0)
    {
        FUN3(VAR2, VAR22, "", VAR6->VAR21);
        return VAR18;
    }
    VAR8.VAR23 = VAR6->VAR24;
    if (FUN4(VAR6->VAR25, VAR26, &VAR8) < 0)
    {
        FUN3(VAR2, VAR22, "");
        return FUN5(VAR27);
    }
    FUN3(VAR2, VAR28, "", VAR6->VAR24, VAR8.VAR29);
    if (FUN4(VAR6->VAR25, VAR30, &VAR8.VAR23) < 0)
    {
        FUN3(VAR2, VAR22, "", VAR6->VAR24);
        return FUN5(VAR27);
    }
    if (VAR6->VAR9)
    {
        FUN3(VAR2, VAR28, "", VAR6->VAR9);
        for (VAR17 = 0;; VAR17++)
        {
            VAR9.VAR23 = VAR17;
            if (FUN4(VAR6->VAR25, VAR31, &VAR9) < 0)
            {
                FUN3(VAR2, VAR22, "", VAR6->VAR9);
                return FUN5(VAR27);
            }
            if (!FUN6(VAR9.VAR29, VAR6->VAR9))
            {
                break;
            }
        }
        FUN3(VAR2, VAR28, "" VAR32 "", VAR6->VAR9, (VAR33)VAR9.VAR34);
        if (FUN4(VAR6->VAR25, VAR35, &VAR9.VAR34) < 0)
        {
            FUN3(VAR2, VAR22, "", VAR6->VAR9);
            return FUN5(VAR27);
        }
    }
    if (VAR16.VAR36 && VAR16.VAR37)
    {
        FUN3(VAR2, VAR28, "", VAR16.VAR37, VAR16.VAR36);
        VAR12->VAR38 = VAR16.VAR37;
        VAR12->VAR39 = VAR16.VAR36;
        if (FUN4(VAR6->VAR25, VAR40, &VAR10) != 0)
        {
            FUN3(VAR2, VAR22, "", VAR16.VAR37, VAR16.VAR36);
            return FUN5(VAR27);
        }
        if (VAR16.VAR36 != VAR12->VAR39 || VAR16.VAR37 != VAR12->VAR38)
        {
            FUN3(VAR2, VAR41, ""
                                    "",
                   VAR16.VAR37, VAR16.VAR36, VAR12->VAR38, VAR12->VAR39);
        }
    }
    else
    {
        if (FUN4(VAR6->VAR25, VAR42, &VAR10) != 0)
        {
            FUN3(VAR2, VAR22, "", strerror(VAR43));
            return FUN5(VAR43);
        }
    }
    VAR2->VAR44[0]->VAR45->VAR46.VAR37 = VAR12->VAR39;
    VAR2->VAR44[0]->VAR45->VAR46.VAR36 = VAR12->VAR38;
    VAR6->VAR47 = 100 + FUN7(1, VAR2->VAR44[0]->VAR45->VAR46, (VAR48){1, 1000});
    return 0;
}