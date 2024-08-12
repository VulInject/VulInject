FUN1(register struct VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    register struct VAR6 *VAR6;
    register struct VAR7 *VAR8;
    int VAR9;
    struct ip VAR10;
    struct socket *VAR11;
    FUN2("");
    FUN3("", (long)VAR2);
    FUN3("", VAR3);
    if (VAR3 > sizeof(struct VAR6))
    {
        FUN4(VAR2, (struct VAR1 *)0);
        VAR3 = sizeof(struct VAR6);
    }
    VAR6 = FUN5(VAR2, struct VAR6 *);
    VAR8 = (struct VAR7 *)((VAR12)VAR6 + VAR3);
    VAR9 = FUN6((VAR13)VAR8->VAR14);
    if (VAR6->VAR15 != VAR9)
    {
        if (VAR9 > VAR6->VAR15)
        {
            goto VAR16;
        }
        FUN7(VAR2, VAR9 - VAR6->VAR15);
        VAR6->VAR15 = VAR9;
    }
    VAR10 = *VAR6;
    VAR10.VAR15 += VAR3;
    if (VAR8->VAR17)
    {
        memset(&((struct VAR18 *)VAR6)->VAR19, 0, sizeof(struct VAR20));
        ((struct VAR18 *)VAR6)->VAR21 = 0;
        ((struct VAR18 *)VAR6)->VAR22 = VAR8->VAR14;
        if (FUN8(VAR2, VAR9 + sizeof(struct VAR6)))
        {
            goto VAR16;
        }
    }
    if (FUN6(VAR8->VAR23) == VAR24 && (VAR6->VAR25.VAR26 == VAR5->VAR27.VAR26 || VAR6->VAR25.VAR26 == 0xffffffff))
    {
        FUN9(VAR2);
        goto VAR16;
    }
    if (FUN6(VAR8->VAR23) == VAR28 && VAR6->VAR25.VAR26 == VAR5->VAR27.VAR26)
    {
        FUN10(VAR2);
        goto VAR16;
    }
    if (VAR5->VAR29)
    {
        goto VAR16;
    }
    VAR11 = VAR5->VAR30;
    if (VAR11->VAR31 != VAR8->VAR32 || VAR11->VAR33.VAR26 != VAR6->VAR34.VAR26)
    {
        struct socket *VAR35;
        for (VAR35 = VAR5->VAR36.VAR37; VAR35 != &VAR5->VAR36; VAR35 = VAR35->VAR37)
        {
            if (VAR35->VAR31 == VAR8->VAR32 && VAR35->VAR33.VAR26 == VAR6->VAR34.VAR26)
            {
                VAR11 = VAR35;
                break;
            }
        }
        if (VAR35 == &VAR5->VAR36)
        {
            VAR11 = NULL;
        }
        else
        {
            VAR5->VAR30 = VAR11;
        }
    }
    if (VAR11 == NULL)
    {
        VAR11 = FUN11(VAR5);
        if (!VAR11)
        {
            goto VAR16;
        }
        if (FUN12(VAR11) == -1)
        {
            FUN13((VAR38, "", VAR39, strerror(VAR39)));
            FUN14(VAR11);
            goto VAR16;
        }
        VAR11->VAR33 = VAR6->VAR34;
        VAR11->VAR31 = VAR8->VAR32;
        if ((VAR11->VAR40 = FUN15(VAR11)) == 0)
            VAR11->VAR40 = VAR6->VAR41;
    }
    VAR11->VAR42 = VAR6->VAR25;
    VAR11->VAR43 = VAR8->VAR23;
    VAR3 += sizeof(struct VAR7);
    VAR2->VAR44 -= VAR3;
    VAR2->VAR45 += VAR3;
    if (FUN16(VAR11, VAR2) == -1)
    {
        VAR2->VAR44 += VAR3;
        VAR2->VAR45 -= VAR3;
        *VAR6 = VAR10;
        FUN13((VAR38, "", VAR39, strerror(VAR39)));
        FUN17(VAR2, VAR46, VAR47, 0, strerror(VAR39));
    }
    FUN18(VAR11->VAR48);
    VAR2->VAR44 += VAR3;
    VAR2->VAR45 -= VAR3;
    *VAR6 = VAR10;
    VAR11->VAR48 = VAR2;
    return;
VAR16:
    FUN18(VAR2);
}