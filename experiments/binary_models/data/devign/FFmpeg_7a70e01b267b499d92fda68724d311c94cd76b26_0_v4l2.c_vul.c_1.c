static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct VAR5 *VAR6 = VAR2->VAR7;
    struct v4l2_input VAR8;
    struct v4l2_standard VAR9;
    struct v4l2_streamparm VAR10 = {0};
    struct VAR11 *VAR12 = &VAR10.VAR13.VAR14.VAR15;
    int VAR16;
    VAR10.VAR17 = VAR18;
    if (VAR4->VAR19 > 0)
        VAR6->VAR19 = VAR4->VAR19;
    memset(&VAR8, 0, sizeof(VAR8));
    VAR8.VAR20 = VAR6->VAR19;
    if (FUN2(VAR6->VAR21, VAR22, &VAR8) < 0)
    {
        FUN3(VAR2, VAR23, "");
        return FUN4(VAR24);
    }
    FUN3(VAR2, VAR25, "", VAR6->VAR19, VAR8.VAR26);
    if (FUN2(VAR6->VAR21, VAR27, &VAR8.VAR20) < 0)
    {
        FUN3(VAR2, VAR23, "", VAR6->VAR19);
        return FUN4(VAR24);
    }
    if (VAR4->VAR9)
    {
        FUN5(&VAR6->VAR9);
        VAR6->VAR9 = FUN6(VAR4->VAR9);
    }
    if (VAR6->VAR9)
    {
        FUN3(VAR2, VAR25, "", VAR6->VAR9);
        memset(&VAR9, 0, sizeof(VAR9));
        for (VAR16 = 0;; VAR16++)
        {
            VAR9.VAR20 = VAR16;
            if (FUN2(VAR6->VAR21, VAR28, &VAR9) < 0)
            {
                FUN3(VAR2, VAR23, "", VAR6->VAR9);
                return FUN4(VAR24);
            }
            if (!FUN7(VAR9.VAR26, VAR6->VAR9))
            {
                break;
            }
        }
        FUN3(VAR2, VAR25, "" VAR29 "", VAR6->VAR9, (VAR30)VAR9.VAR31);
        if (FUN2(VAR6->VAR21, VAR32, &VAR9.VAR31) < 0)
        {
            FUN3(VAR2, VAR23, "", VAR6->VAR9);
            return FUN4(VAR24);
        }
    }
    FUN5(&VAR6->VAR9);
    if (VAR4->VAR33.VAR34 && VAR4->VAR33.VAR35)
    {
        FUN3(VAR2, VAR25, "", VAR4->VAR33.VAR34, VAR4->VAR33.VAR35);
        VAR12->VAR36 = VAR4->VAR33.VAR34;
        VAR12->VAR37 = VAR4->VAR33.VAR35;
        if (FUN2(VAR6->VAR21, VAR38, &VAR10) != 0)
        {
            FUN3(VAR2, VAR23, "", VAR4->VAR33.VAR34, VAR4->VAR33.VAR35);
            return FUN4(VAR24);
        }
        if (VAR4->VAR33.VAR35 != VAR12->VAR37 || VAR4->VAR33.VAR34 != VAR12->VAR36)
        {
            FUN3(VAR2, VAR39, "", VAR4->VAR33.VAR34, VAR4->VAR33.VAR35, VAR12->VAR36, VAR12->VAR37);
        }
    }
    else
    {
        if (FUN2(VAR6->VAR21, VAR40, &VAR10) != 0)
        {
            FUN3(VAR2, VAR23, "", strerror(VAR41));
            return FUN4(VAR41);
        }
    }
    VAR4->VAR33.VAR34 = VAR12->VAR36;
    VAR4->VAR33.VAR35 = VAR12->VAR37;
    return 0;
}