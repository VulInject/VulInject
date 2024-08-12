FUN1(VAR1 *VAR2, uint32_t VAR3, u_int VAR4, uint32_t VAR5, u_int VAR6, int VAR7)
{
    struct sockaddr_in VAR8;
    struct socket *VAR9;
    socklen_t VAR10 = sizeof(struct VAR11);
    VAR9 = FUN2(VAR2);
    if (!VAR9)
    {
        VAR9->VAR12 = FUN3(VAR13, VAR14, 0);
        VAR9->VAR15 = VAR16 + VAR17;
        FUN4(VAR9, &VAR2->VAR18);
        VAR8.VAR19 = VAR13;
        VAR8.VAR20.VAR21 = VAR3;
        VAR8.VAR22 = VAR4;
        if (FUN5(VAR9->VAR12, (struct VAR23 *)&VAR8, VAR10) < 0)
        {
            FUN6(VAR9);
            FUN7(VAR9->VAR12);
            FUN8(VAR9->VAR12, (struct VAR23 *)&VAR8, &VAR10);
            VAR9->VAR24.VAR25 = VAR8;
            FUN9(VAR9);
            VAR9->VAR26 = VAR13;
            VAR9->VAR27 = VAR6;
            VAR9->VAR28.VAR21 = VAR5;
            if (VAR7 != VAR29)
                VAR9->VAR15 = 0;
            VAR9->VAR30 &= VAR31;
            VAR9->VAR30 |= VAR32 | VAR7;
            return VAR9;