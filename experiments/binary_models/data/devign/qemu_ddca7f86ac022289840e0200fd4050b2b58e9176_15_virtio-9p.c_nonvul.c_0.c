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
    FUN2(&VAR5);
    VAR3 = FUN3(VAR11, VAR6, "", &VAR2, &VAR4, &VAR5);
    if (VAR3 < 0)
    {
        goto VAR14;
    }
    FUN4(VAR11->VAR15, VAR11->VAR16, VAR2, VAR5.VAR17, VAR5.VAR18, VAR5.VAR19);
    VAR9 = FUN5(VAR11, VAR2);
    if (VAR9 == NULL)
    {
        VAR3 = -VAR20;
        goto VAR14;
    }
    if (FUN6(&VAR5))
    {
        VAR3 = FUN7(VAR11, VAR9, 0);
        goto VAR21;
    }
    if (VAR5.VAR17 != -1)
    {
        uint32_t VAR22;
        VAR3 = FUN8(VAR11, &VAR9->VAR23, &VAR7);
        if (VAR3 < 0)
        {
            goto VAR21;
        }
        VAR22 = FUN9(&VAR7);
        if ((VAR5.VAR17 & VAR24) != (VAR22 & VAR24))
        {
            VAR3 = -VAR25;
            goto VAR21;
        }
        VAR3 = FUN10(VAR11, &VAR9->VAR23, FUN11(VAR5.VAR17, &VAR5.VAR26));
        if (VAR3 < 0)
        {
            goto VAR21;
        }
    }
    if (VAR5.VAR19 != -1 || VAR5.VAR18 != -1)
    {
        struct timespec VAR27[2];
        if (VAR5.VAR18 != -1)
        {
            VAR27[0].VAR28 = VAR5.VAR18;
            VAR27[0].VAR29 = 0;
        }
        else
        {
            VAR27[0].VAR29 = VAR30;
        }
        if (VAR5.VAR19 != -1)
        {
            VAR27[1].VAR28 = VAR5.VAR19;
            VAR27[1].VAR29 = 0;
        }
        else
        {
            VAR27[1].VAR29 = VAR30;
        }
        VAR3 = FUN12(VAR11, &VAR9->VAR23, VAR27);
        if (VAR3 < 0)
        {
            goto VAR21;
        }
    }
    if (VAR5.VAR31 != -1 || VAR5.VAR32 != -1)
    {
        VAR3 = FUN13(VAR11, &VAR9->VAR23, VAR5.VAR32, VAR5.VAR31);
        if (VAR3 < 0)
        {
            goto VAR21;
        }
    }
    if (VAR5.VAR33.VAR34 != 0)
    {
        VAR3 = FUN14(VAR11, VAR9, -1, &VAR5.VAR33);
        if (VAR3 < 0)
        {
            goto VAR21;
        }
    }
    if (VAR5.VAR35 != -1)
    {
        VAR3 = FUN15(VAR11, &VAR9->VAR23, VAR5.VAR35);
        if (VAR3 < 0)
        {
            goto VAR21;
        }
    }
    VAR3 = VAR6;
VAR21:
    FUN16(VAR11, VAR9);
VAR14:
    FUN17(&VAR5);
    FUN18(VAR13, VAR11, VAR3);
}