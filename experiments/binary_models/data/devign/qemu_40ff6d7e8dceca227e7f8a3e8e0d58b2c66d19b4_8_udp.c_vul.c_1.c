FUN1(VAR1 *VAR2, u_int32_t VAR3, u_int VAR4, u_int32_t VAR5, u_int VAR6, int VAR7)
{
    struct sockaddr_in VAR8;
    struct socket *VAR9;
    socklen_t VAR10 = sizeof(struct VAR11), VAR12 = 1;
    VAR9 = FUN2(VAR2);
    if (!VAR9)
    {
        return NULL;
    }
    VAR9->VAR13 = socket(VAR14, VAR15, 0);
    VAR9->VAR16 = VAR17 + VAR18;
    FUN3(VAR9, &VAR2->VAR19);
    VAR8.VAR20 = VAR14;
    VAR8.VAR21.VAR22 = VAR3;
    VAR8.VAR23 = VAR4;
    if (FUN4(VAR9->VAR13, (struct VAR24 *)&VAR8, VAR10) < 0)
    {
        FUN5(VAR9);
        return NULL;
    }
    FUN6(VAR9->VAR13, VAR25, VAR26, (char *)&VAR12, sizeof(int));
    FUN7(VAR9->VAR13, (struct VAR24 *)&VAR8, &VAR10);
    VAR9->VAR27 = VAR8.VAR23;
    if (VAR8.VAR21.VAR22 == 0 || VAR8.VAR21.VAR22 == VAR28.VAR22)
    {
        VAR9->VAR29 = VAR2->VAR30;
    }
    else
    {
        VAR9->VAR29 = VAR8.VAR21;
    }
    VAR9->VAR31 = VAR6;
    VAR9->VAR32.VAR22 = VAR5;
    if (VAR7 != VAR33)
        VAR9->VAR16 = 0;
    VAR9->VAR34 &= VAR35;
    VAR9->VAR34 |= VAR36 | VAR7;
    return VAR9;
}