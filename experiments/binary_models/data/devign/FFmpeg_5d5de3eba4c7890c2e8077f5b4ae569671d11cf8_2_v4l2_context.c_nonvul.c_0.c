static VAR1 *FUN1(VAR2 *VAR3, int VAR4)
{
    struct v4l2_plane VAR5[VAR6];
    struct v4l2_buffer VAR7 = {0};
    VAR1 *VAR8 = NULL;
    struct pollfd VAR9 = {
        .VAR10 = VAR11 | VAR12 | VAR13 | VAR14 | VAR15,
        .VAR16 = FUN2(VAR3)->VAR16,
    };
    int VAR17, VAR18;
    if (!FUN3(VAR3->VAR19) && FUN2(VAR3)->VAR20)
    {
        for (VAR17 = 0; VAR17 < VAR3->VAR21; VAR17++)
        {
            if (VAR3->VAR22[VAR17].VAR23 == VAR24)
                goto VAR25;
        }
        VAR3->VAR26 = 1;
        return NULL;
    }
VAR25:
    if (FUN3(VAR3->VAR19))
        VAR9.VAR10 = VAR14 | VAR15;
    else
    {
        if (FUN2(VAR3)->VAR20)
            VAR9.VAR10 = VAR11 | VAR12 | VAR13;
    }
    for (;;)
    {
        VAR18 = FUN4(&VAR9, 1, VAR4);
        if (VAR18 > 0)
            break;
        if (VAR27 == VAR28)
            continue;
        return NULL;
    }
    if (VAR9.VAR29 & VAR30)
    {
        FUN5(FUN6(VAR3), VAR31, "", VAR3->VAR32);
        return NULL;
    }
    if (VAR9.VAR29 & VAR13)
    {
        VAR18 = FUN7(VAR3);
        if (VAR18 < 0)
        {
            VAR3->VAR26 = 1;
            return NULL;
        }
        if (VAR18)
        {
            return NULL;
        }
    }
    if (VAR9.VAR29 & (VAR11 | VAR12 | VAR14 | VAR15))
    {
        if (!FUN3(VAR3->VAR19))
        {
            if (VAR9.VAR29 & (VAR11 | VAR12))
                goto VAR33;
            if (VAR9.VAR29 & (VAR14 | VAR15))
                return NULL;
        }
    VAR33:
        memset(&VAR7, 0, sizeof(VAR7));
        VAR7.VAR34 = VAR35;
        VAR7.VAR19 = VAR3->VAR19;
        if (FUN8(VAR3->VAR19))
        {
            memset(VAR5, 0, sizeof(VAR5));
            VAR7.VAR36 = VAR6;
            VAR7.VAR37.VAR5 = VAR5;
        }
        VAR18 = FUN9(FUN2(VAR3)->VAR16, VAR38, &VAR7);
        if (VAR18)
        {
            if (VAR27 != VAR39)
            {
                VAR3->VAR26 = 1;
                if (VAR27 != VAR40)
                    FUN5(FUN6(VAR3), VAR41, "", VAR3->VAR32, FUN10(FUN11(VAR27)));
            }
            return NULL;
        }
        VAR8 = &VAR3->VAR22[VAR7.VAR42];
        VAR8->VAR23 = VAR43;
        VAR8->VAR7 = VAR7;
        if (FUN8(VAR3->VAR19))
        {
            memcpy(VAR8->VAR5, VAR5, sizeof(VAR5));
            VAR8->VAR7.VAR37.VAR5 = VAR8->VAR5;
        }
        return VAR8;
    }
    return NULL;
}