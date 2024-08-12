void FUN1(struct socket *VAR1)
{
    VAR2 *VAR3 = VAR1->VAR3;
    struct socket *VAR4;
    struct sockaddr_in VAR5;
    socklen_t VAR6 = sizeof(struct VAR7);
    struct VAR8 *VAR9;
    int VAR10, VAR11;
    FUN2("");
    FUN3("", VAR1);
    if (VAR1->VAR12 & VAR13)
    {
        VAR4 = VAR1;
    }
    else
    {
        VAR4 = FUN4(VAR3);
        if (VAR4 == NULL)
        {
            FUN5(FUN6(VAR1->VAR10, (struct VAR14 *)&VAR5, &VAR6));
            return;
        }
        if (FUN7(VAR4) < 0)
        {
            free(VAR4);
            return;
        }
        VAR4->VAR15 = VAR16;
        VAR4->VAR17 = VAR1->VAR17;
        VAR4->VAR18 = VAR1->VAR18;
    }
    FUN8(FUN9(VAR4), 0);
    VAR10 = FUN6(VAR1->VAR10, (struct VAR14 *)&VAR5, &VAR6);
    if (VAR10 < 0)
    {
        FUN10(FUN9(VAR4));
        return;
    }
    FUN11(VAR10);
    FUN12(VAR10);
    VAR11 = 1;
    FUN13(VAR10, VAR19, VAR20, &VAR11, sizeof(int));
    FUN14(VAR10);
    VAR4->VAR21.VAR22 = VAR5;
    FUN15(VAR4);
    if (VAR1->VAR12 & VAR13)
    {
        FUN5(VAR4->VAR10);
        VAR4->VAR12 = VAR23;
    }
    VAR4->VAR10 = VAR10;
    VAR4->VAR12 |= VAR24;
    VAR4->VAR25 = FUN16(VAR4);
    VAR9 = FUN9(VAR4);
    FUN17(VAR9);
    VAR9->VAR26 = VAR27;
    VAR9->VAR28[VAR29] = VAR30;
    VAR9->VAR31 = VAR3->VAR32;
    VAR3->VAR32 += VAR33 / 2;
    FUN18(VAR9);
    FUN19(VAR9);
}