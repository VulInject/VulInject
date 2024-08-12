FUN1(struct VAR1 *VAR2, int VAR3)
{
    register struct VAR4 *VAR5;
    register struct VAR6 *VAR6 = FUN2(VAR2, struct VAR6 *);
    int VAR7 = VAR6->VAR8;
    VAR9 *VAR10 = VAR2->VAR10;
    FUN3("");
    FUN4("", VAR2);
    FUN4("", VAR2->VAR11);
    if (VAR7 < VAR12)
    {
    VAR13:
        FUN5(VAR2);
        goto VAR14;
    }
    VAR2->VAR11 -= VAR3;
    VAR2->VAR15 += VAR3;
    VAR5 = FUN2(VAR2, struct VAR4 *);
    if (FUN6(VAR2, VAR7))
    {
        goto VAR13;
    }
    VAR2->VAR11 += VAR3;
    VAR2->VAR15 -= VAR3;
    FUN4("", VAR5->VAR16);
    switch (VAR5->VAR16)
    {
    case VAR17:
        VAR6->VAR8 += VAR3;
        if (VAR6->VAR18.VAR19 == VAR10->VAR20.VAR19)
        {
            FUN7(VAR2);
        }
        else if (VAR10->VAR21)
        {
            goto VAR13;
        }
        else
        {
            struct socket *VAR22;
            struct sockaddr_storage VAR23;
            if ((VAR22 = FUN8(VAR10)) == NULL)
                goto VAR13;
            if (FUN9(VAR22, VAR2, VAR3) == 0)
            {
                return;
            }
            if (FUN10(VAR22) == -1)
            {
                FUN11((VAR24, "", VAR25, strerror(VAR25)));
                FUN12(VAR22);
                FUN5(VAR2);
                goto VAR14;
            }
            VAR22->VAR26 = VAR2;
            VAR22->VAR27 = VAR28;
            VAR22->VAR29 = VAR6->VAR18;
            VAR22->VAR30 = FUN13(7);
            VAR22->VAR31 = VAR28;
            VAR22->VAR32 = VAR6->VAR33;
            VAR22->VAR34 = FUN13(9);
            VAR22->VAR35 = VAR6->VAR36;
            VAR22->VAR37 = VAR38;
            VAR22->VAR39 = VAR40;
            VAR23 = VAR22->VAR41.VAR42;
            FUN14(VAR22, &VAR23);
            if (sendto(VAR22->VAR43, VAR44, strlen(VAR44), 0, (struct VAR45 *)&VAR23, sizeof(VAR23)) == -1)
            {
                FUN11((VAR24, "", VAR25, strerror(VAR25)));
                FUN15(VAR2, VAR46, VAR47, 0, strerror(VAR25));
                FUN16(VAR22);
            }
        }
        break;
    case VAR46:
    case VAR48:
    case VAR49:
    case VAR50:
    case VAR51:
    case VAR52:
    case VAR53:
        FUN5(VAR2);
        break;
    default:
        FUN5(VAR2);
    }
VAR14:
    return;
}