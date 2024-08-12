static void FUN1(void *VAR1)
{
    int32_t VAR2;
    int VAR3 = 0;
    int16_t VAR4;
    V9fsStat VAR5;
    size_t VAR6 = 7;
    struct stat VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11 = VAR1;
    VAR12 *VAR13 = VAR11->VAR13;
    FUN2(VAR11, VAR6, "", &VAR2, &VAR4, &VAR5);
    VAR9 = FUN3(VAR11, VAR2);
    if (VAR9 == NULL)
    {
        VAR3 = -VAR14;
        goto VAR15;
    }
    if (FUN4(&VAR5))
    {
        VAR3 = FUN5(VAR11, VAR9, 0);
        goto VAR16;
    }
    if (VAR5.VAR17 != -1)
    {
        uint32_t VAR18;
        VAR3 = FUN6(VAR11, &VAR9->VAR19, &VAR7);
        if (VAR3 < 0)
        {
            goto VAR16;
        }
        VAR18 = FUN7(&VAR7);
        if ((VAR5.VAR17 & VAR20) != (VAR18 & VAR20))
        {
            VAR3 = -VAR21;
            goto VAR16;
        }
        VAR3 = FUN8(VAR11, &VAR9->VAR19, FUN9(VAR5.VAR17, &VAR5.VAR22));
        if (VAR3 < 0)
        {
            goto VAR16;
        }
    }
    if (VAR5.VAR23 != -1 || VAR5.VAR24 != -1)
    {
        struct timespec VAR25[2];
        if (VAR5.VAR24 != -1)
        {
            VAR25[0].VAR26 = VAR5.VAR24;
            VAR25[0].VAR27 = 0;
        }
        else
        {
            VAR25[0].VAR27 = VAR28;
        }
        if (VAR5.VAR23 != -1)
        {
            VAR25[1].VAR26 = VAR5.VAR23;
            VAR25[1].VAR27 = 0;
        }
        else
        {
            VAR25[1].VAR27 = VAR28;
        }
        VAR3 = FUN10(VAR11, &VAR9->VAR19, VAR25);
        if (VAR3 < 0)
        {
            goto VAR16;
        }
    }
    if (VAR5.VAR29 != -1 || VAR5.VAR30 != -1)
    {
        VAR3 = FUN11(VAR11, &VAR9->VAR19, VAR5.VAR30, VAR5.VAR29);
        if (VAR3 < 0)
        {
            goto VAR16;
        }
    }
    if (VAR5.VAR31.VAR32 != 0)
    {
        VAR3 = FUN12(VAR11, VAR9, -1, &VAR5.VAR31);
        if (VAR3 < 0)
        {
            goto VAR16;
        }
    }
    if (VAR5.VAR33 != -1)
    {
        VAR3 = FUN13(VAR11, &VAR9->VAR19, VAR5.VAR33);
        if (VAR3 < 0)
        {
            goto VAR16;
        }
    }
    VAR3 = VAR6;
VAR16:
    FUN14(VAR11, VAR9);
VAR15:
    FUN15(&VAR5);
    FUN16(VAR13, VAR11, VAR3);