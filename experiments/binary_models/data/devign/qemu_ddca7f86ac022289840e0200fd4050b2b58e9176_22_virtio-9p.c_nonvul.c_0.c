static void FUN1(void *VAR1)
{
    int VAR2 = 0;
    int32_t VAR3;
    VAR4 *VAR5;
    size_t VAR6 = 7;
    V9fsIattr VAR7;
    VAR8 *VAR9 = VAR1;
    VAR10 *VAR11 = VAR9->VAR11;
    VAR2 = FUN2(VAR9, VAR6, "", &VAR3, &VAR7);
    if (VAR2 < 0)
    {
        goto VAR12;
    }
    VAR5 = FUN3(VAR9, VAR3);
    if (VAR5 == NULL)
    {
        VAR2 = -VAR13;
        goto VAR12;
    }
    if (VAR7.VAR14 & VAR15)
    {
        VAR2 = FUN4(VAR9, &VAR5->VAR16, VAR7.VAR17);
        if (VAR2 < 0)
        {
            goto VAR18;
        }
    }
    if (VAR7.VAR14 & (VAR19 | VAR20))
    {
        struct timespec VAR21[2];
        if (VAR7.VAR14 & VAR19)
        {
            if (VAR7.VAR14 & VAR22)
            {
                VAR21[0].VAR23 = VAR7.VAR24;
                VAR21[0].VAR25 = VAR7.VAR26;
            }
            else
            {
                VAR21[0].VAR25 = VAR27;
            }
        }
        else
        {
            VAR21[0].VAR25 = VAR28;
        }
        if (VAR7.VAR14 & VAR20)
        {
            if (VAR7.VAR14 & VAR29)
            {
                VAR21[1].VAR23 = VAR7.VAR30;
                VAR21[1].VAR25 = VAR7.VAR31;
            }
            else
            {
                VAR21[1].VAR25 = VAR27;
            }
        }
        else
        {
            VAR21[1].VAR25 = VAR28;
        }
        VAR2 = FUN5(VAR9, &VAR5->VAR16, VAR21);
        if (VAR2 < 0)
        {
            goto VAR18;
        }
    }
    if ((VAR7.VAR14 & (VAR32 | VAR33)) || ((VAR7.VAR14 & VAR34) && !((VAR7.VAR14 & VAR35) & ~VAR34)))
    {
        if (!(VAR7.VAR14 & VAR32))
        {
            VAR7.VAR36 = -1;
        }
        if (!(VAR7.VAR14 & VAR33))
        {
            VAR7.VAR37 = -1;
        }
        VAR2 = FUN6(VAR9, &VAR5->VAR16, VAR7.VAR36, VAR7.VAR37);
        if (VAR2 < 0)
        {
            goto VAR18;
        }
    }
    if (VAR7.VAR14 & (VAR38))
    {
        VAR2 = FUN7(VAR9, &VAR5->VAR16, VAR7.VAR39);
        if (VAR2 < 0)
        {
            goto VAR18;
        }
    }
    VAR2 = VAR6;
VAR18:
    FUN8(VAR9, VAR5);
VAR12:
    FUN9(VAR11, VAR9, VAR2);
}