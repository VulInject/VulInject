FUN1(struct socket *VAR1)
{
    struct sockaddr_storage VAR2;
    struct sockaddr_storage VAR3, VAR4;
    socklen_t VAR5 = sizeof(struct VAR6);
    FUN2("");
    FUN3("", VAR1);
    if (VAR1->VAR7 == VAR8)
    {
        char VAR9[256];
        int VAR10;
        VAR10 = recvfrom(VAR1->VAR11, VAR9, 256, 0, (struct VAR12 *)&VAR2, &VAR5);
        if (VAR10 == -1 || VAR10 == 0)
        {
            u_char VAR13 = VAR14;
            if (VAR15 == VAR16)
                VAR13 = VAR17;
            else if (VAR15 == VAR18)
                VAR13 = VAR19;
            FUN4((VAR20, "", VAR15, strerror(VAR15)));
            FUN5(VAR1->VAR21, VAR22, VAR13, 0, strerror(VAR15));
        }
        else
        {
            FUN6(VAR1->VAR21);
            VAR1->VAR21 = NULL;
        }
        FUN7(VAR1);
    }
    else
    {
        struct VAR23 *VAR24;
        int VAR10;
        unsigned long VAR25;
        int VAR25;
        VAR24 = FUN8(VAR1->VAR26);
        if (!VAR24)
        {
            return;
        }
        VAR24->VAR27 += VAR28;
        VAR10 = FUN9(VAR24);
        FUN10(VAR1->VAR11, VAR29, &VAR25);
        if (VAR25 > VAR10)
        {
            VAR25 = (VAR24->VAR27 - VAR24->VAR30) + VAR24->VAR31 + VAR25 + 1;
            FUN11(VAR24, VAR25);
            VAR10 = FUN9(VAR24);
        }
        VAR24->VAR31 = recvfrom(VAR1->VAR11, VAR24->VAR27, VAR10, 0, (struct VAR12 *)&VAR2, &VAR5);
        FUN4((VAR20, "", VAR24->VAR31, VAR15, strerror(VAR15)));
        if (VAR24->VAR31 < 0)
        {
            u_char VAR13 = VAR14;
            if (VAR15 == VAR16)
                VAR13 = VAR17;
            else if (VAR15 == VAR18)
                VAR13 = VAR19;
            FUN4((VAR20, "", VAR13));
            FUN5(VAR1->VAR21, VAR22, VAR13, 0, strerror(VAR15));
            FUN12(VAR24);
        }
        else
        {
            if (VAR1->VAR32)
            {
                if (VAR1->VAR33 == FUN13(53))
                    VAR1->VAR32 = VAR34 + VAR35;
                else
                    VAR1->VAR32 = VAR34 + VAR36;
            }
            VAR3 = VAR2;
            FUN14(VAR1, &VAR3);
            VAR4 = VAR1->VAR37.VAR38;
            switch (VAR1->VAR39)
            {
            case VAR40:
                FUN15(VAR1, VAR24, (struct VAR41 *)&VAR3, (struct VAR41 *)&VAR4, VAR1->VAR42);
                break;
            default:
                break;
            }
        }
    }
}