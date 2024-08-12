FUN1(VAR1 *VAR2, u_int32_t VAR3, u_int VAR4, u_int32_t VAR5, u_int VAR6, int VAR7)
{
    struct sockaddr_in VAR8;
    struct socket *VAR9;
    int VAR10, VAR11 = 1;
    socklen_t VAR12 = sizeof(VAR8);
    FUN2("");
    FUN3("", VAR3);
    FUN3("", VAR4);
    FUN3("", VAR5);
    FUN3("", VAR6);
    FUN3("", VAR7);
    VAR9 = FUN4(VAR2);
    if (!VAR9)
    {
        return NULL;
    }
    if ((VAR9->VAR13 = FUN5(VAR9)) == NULL)
    {
        free(VAR9);
        return NULL;
    }
    FUN6(VAR9, &VAR2->VAR14);
    if (VAR7 & VAR15)
        VAR9->VAR13->VAR16[VAR17] = VAR18 * 2;
    VAR9->VAR19 &= VAR20;
    VAR9->VAR19 |= (VAR21 | VAR7);
    VAR9->VAR22 = VAR6;
    VAR9->VAR23.VAR24 = VAR5;
    VAR8.VAR25 = VAR26;
    VAR8.VAR27.VAR24 = VAR3;
    VAR8.VAR28 = VAR4;
    if (((VAR10 = socket(VAR26, VAR29, 0)) < 0) || (FUN7(VAR10, VAR30, VAR31, (char *)&VAR11, sizeof(int)) < 0) || (FUN8(VAR10, (struct VAR32 *)&VAR8, sizeof(VAR8)) < 0) || (FUN9(VAR10, 1) < 0))
    {
        int VAR33 = VAR34;
        close(VAR10);
        FUN10(VAR9);
        FUN11(VAR33);
        VAR34 = VAR33;
        return NULL;
    }
    FUN7(VAR10, VAR30, VAR35, (char *)&VAR11, sizeof(int));
    FUN12(VAR10, (struct VAR32 *)&VAR8, &VAR12);
    VAR9->VAR36 = VAR8.VAR28;
    if (VAR8.VAR27.VAR24 == 0 || VAR8.VAR27.VAR24 == VAR37.VAR24)
        VAR9->VAR38 = VAR2->VAR39;
    else
        VAR9->VAR38 = VAR8.VAR27;
    VAR9->VAR10 = VAR10;
    return VAR9;
}