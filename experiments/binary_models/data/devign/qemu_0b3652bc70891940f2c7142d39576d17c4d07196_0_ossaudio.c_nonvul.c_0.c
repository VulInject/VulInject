static int FUN1(int VAR1, struct VAR2 *VAR3, struct VAR2 *VAR4, int *VAR5)
{
    int VAR6;
    int VAR7;
    int VAR8 = VAR9.VAR10 ? VAR11 : 0;
    audio_buf_info VAR12;
    int VAR13, VAR14, VAR15;
    const char *VAR16 = VAR1 ? VAR9.VAR17 : VAR9.VAR18;
    const char *VAR19 = VAR1 ? "" : "";
    VAR8 |= VAR9.VAR20 ? VAR21 : (VAR1 ? VAR22 : VAR23);
    VAR6 = open(VAR16, VAR8 | VAR24);
    if (-1 == VAR6)
    {
        FUN2(VAR25, VAR19, "", VAR16);
        return -1;
    }
    VAR14 = VAR3->VAR14;
    VAR15 = VAR3->VAR15;
    VAR13 = VAR3->VAR13;
    if (FUN3(VAR6, VAR26, &VAR13))
    {
        FUN2(VAR25, VAR19, "", VAR3->VAR13);
        goto VAR27;
    }
    if (FUN3(VAR6, VAR28, &VAR15))
    {
        FUN2(VAR25, VAR19, "", VAR3->VAR15);
        goto VAR27;
    }
    if (FUN3(VAR6, VAR29, &VAR14))
    {
        FUN2(VAR25, VAR19, "", VAR3->VAR14);
        goto VAR27;
    }
    if (FUN3(VAR6, VAR30, NULL))
    {
        FUN2(VAR25, VAR19, "");
        goto VAR27;
    }
    if (FUN3(VAR6, VAR31, &VAR7))
    {
        FUN2(VAR25, VAR19, "");
        VAR7 = 0;
    }
    if (VAR9.VAR32)
    {
        FUN4("", VAR7);
    }
    if (VAR9.VAR33 >= 0 && VAR7 >= 0x040000)
    {
        int VAR33 = VAR9.VAR33;
        if (FUN3(VAR6, VAR34, &VAR33))
        {
            FUN2(VAR25, VAR19, "", VAR9.VAR33);
            goto VAR27;
        }
    }
    else
    {
        int VAR35 = (VAR3->VAR36 << 16) | FUN5(VAR3->VAR37);
        if (FUN3(VAR6, VAR38, &VAR35))
        {
            FUN2(VAR25, VAR19, "", VAR3->VAR36, VAR3->VAR37);
            goto VAR27;
        }
    }
    if (FUN3(VAR6, VAR1 ? VAR39 : VAR40, &VAR12))
    {
        FUN2(VAR25, VAR19, "");
        goto VAR27;
    }
    if (!VAR12.VAR41 || !VAR12.VAR37)
    {
        FUN6(VAR42, "", VAR12.VAR41, VAR12.VAR37, VAR19);
        goto VAR27;
    }
    VAR4->VAR13 = VAR13;
    VAR4->VAR15 = VAR15;
    VAR4->VAR14 = VAR14;
    VAR4->VAR36 = VAR12.VAR41;
    VAR4->VAR37 = VAR12.VAR37;
    *VAR5 = VAR6;
    if ((VAR3->VAR13 != VAR4->VAR13) || (VAR3->VAR15 != VAR4->VAR15) || (VAR3->VAR14 != VAR4->VAR14) || (VAR3->VAR37 != VAR4->VAR37) || (VAR3->VAR36 != VAR4->VAR36))
    {
        FUN4("");
        FUN7(VAR3, VAR4);
    }
    FUN7(VAR3, VAR4);
    return 0;
VAR27:
    FUN8(&VAR6);
    return -1;
}