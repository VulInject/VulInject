int FUN1(struct socket *VAR1)
{
    VAR2 *VAR3 = VAR1->VAR3;
    int VAR4 = 0;
    FUN2("");
    FUN3("", (long)VAR1);
    if ((VAR4 = VAR1->VAR5 = socket(VAR6, VAR7, 0)) >= 0)
    {
        int VAR8, VAR5 = VAR1->VAR5;
        struct sockaddr_in VAR9;
        FUN4(VAR5);
        VAR8 = 1;
        FUN5(VAR5, VAR10, VAR11, (char *)&VAR8, sizeof(VAR8));
        VAR8 = 1;
        FUN5(VAR5, VAR10, VAR12, (char *)&VAR8, sizeof(VAR8));
        VAR9.VAR13 = VAR6;
        if ((VAR1->VAR14.VAR15 & VAR3->VAR16.VAR15) == VAR3->VAR17.VAR15)
        {
            if (VAR1->VAR14.VAR15 == VAR3->VAR18.VAR15)
            {
                if (FUN6(&VAR9.VAR19) < 0)
                    VAR9.VAR19 = VAR20;
            }
            else
            {
                VAR9.VAR19 = VAR20;
            }
        }
        else
            VAR9.VAR19 = VAR1->VAR14;
        VAR9.VAR21 = VAR1->VAR22;
        FUN7((VAR23, ""
                         "",
                    FUN8(VAR9.VAR21), FUN9(VAR9.VAR19)));
        VAR4 = connect(VAR5, (struct VAR24 *)&VAR9, sizeof(VAR9));
        FUN10(VAR1);
    }
    return (VAR4);
}