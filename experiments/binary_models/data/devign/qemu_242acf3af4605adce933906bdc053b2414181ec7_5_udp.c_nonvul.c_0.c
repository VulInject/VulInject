FUN1(struct socket *VAR1, struct VAR2 *VAR3)
{
    struct sockaddr_in VAR4;
    socklen_t VAR5 = sizeof(VAR4);
    VAR6 *VAR7;
    VAR8 *VAR9;
    char VAR10[sizeof(VAR8)];
    u_char VAR11;
    struct VAR12
    {
        struct VAR12 *VAR13;
        struct socket *VAR14;
        struct socket *VAR15;
    } * VAR16;
    static struct VAR12 *VAR17 = 0;
    struct VAR18
    {
        uint16_t VAR19;
        uint16_t VAR20;
        uint32_t VAR21;
        uint16_t VAR22;
        uint16_t VAR23;
        uint32_t VAR24;
        uint32_t VAR25;
        uint16_t VAR26;
        uint16_t VAR27;
        uint16_t VAR28;
    } * VAR29;
    switch (VAR1->VAR30)
    {
    case VAR31:
    case VAR32:
        if (FUN2(VAR1->VAR33, (struct VAR34 *)&VAR4, &VAR5) < 0)
            return;
        VAR35->VAR36 = VAR37->VAR36;
        VAR35->VAR38 = VAR37->VAR38;
        VAR35->VAR4 = VAR37->VAR4;
        VAR35->VAR39 = VAR37->VAR39;
        memcpy(&VAR35->VAR40, &VAR37->VAR40, VAR41);
        memcpy(&VAR35->VAR42, &VAR37->VAR42, VAR41);
        memcpy(&VAR35->VAR43, &VAR37->VAR43, VAR44);
    }
    if (VAR45)
    {
        VAR7 = FUN3(VAR3, VAR6 *);
        VAR9 = (VAR8 *)VAR10;
        VAR11 = VAR7->VAR11;
        FUN4(VAR7, VAR39)->VAR46 = VAR4.VAR46;
        FUN4(VAR7, VAR39)->VAR47 = VAR48;
        strncpy(VAR7->VAR40, FUN5(), VAR41);
    }
    else
    {
        VAR7 = (VAR6 *)VAR10;
        VAR9 = FUN3(VAR3, VAR8 *);
        VAR11 = VAR9->VAR11;
        FUN4(VAR9, VAR39)->VAR46 = VAR4.VAR46;
        FUN4(VAR9, VAR39)->VAR47 = VAR48;
        strncpy(VAR9->VAR40, FUN5(), VAR41);
    }
    if (VAR11 == VAR49)
        return;
    if (VAR45)
    {
        FUN6(VAR9, VAR7);
        VAR9->VAR50 = 1;
        VAR9->VAR51 = 0;
    }
    else
        FUN6(VAR7, VAR9);
    if (VAR11 == VAR52)
    {
        int VAR33;
        u_short VAR53;
        for (VAR16 = VAR17; VAR16; VAR16 = VAR16->VAR13)
            if (VAR1 == VAR16->VAR14)
                break;
        if (!VAR16)
        {
            VAR16 = (struct VAR12 *)malloc(sizeof(struct VAR12));
            VAR16->VAR14 = VAR1;
            VAR16->VAR15 = FUN7(0, FUN4(VAR7, VAR4)->VAR47.VAR54, FUN4(VAR7, VAR4)->VAR46, VAR55);
            VAR16->VAR13 = VAR17;
            VAR17 = VAR16;
        }
        VAR5 = sizeof(VAR4);
        FUN2(VAR16->VAR15->VAR33, (struct VAR34 *)&VAR4, &VAR5);
        FUN4(VAR7, VAR4)->VAR46 = VAR4.VAR46;
        FUN4(VAR7, VAR4)->VAR47 = VAR48;
        FUN4(VAR9, VAR4)->VAR46 = VAR4.VAR46;
        FUN4(VAR9, VAR4)->VAR47 = VAR48;
        VAR53 = FUN4(VAR7, VAR39)->VAR46;
        FUN4(VAR7, VAR39)->VAR46 = 0;
        FUN4(VAR9, VAR39)->VAR46 = 0;
        VAR7->VAR11 = VAR9->VAR11 = VAR56;
        VAR33 = socket(VAR57, VAR58, VAR59);
        VAR4.VAR47 = VAR48;
        VAR4.VAR60 = VAR57;
        VAR4.VAR46 = FUN8(517);
        sendto(VAR33, (char *)VAR7, sizeof(*VAR7), 0, (struct VAR34 *)&VAR4, sizeof(VAR4));
        VAR4.VAR46 = FUN8(518);
        sendto(VAR33, (char *)VAR9, sizeof(*VAR9), 0, (struct VAR34 *)&VAR4, sizeof(VAR4));
        FUN9(VAR33);
        VAR7->VAR11 = VAR9->VAR11 = VAR52;
        FUN4(VAR7, VAR39)->VAR46 = VAR53;
        FUN4(VAR9, VAR39)->VAR46 = VAR53;
    }
    if (VAR11 == VAR61)
    {
        struct VAR12 *VAR62, *VAR63;
        int VAR33;
        u_short VAR53;
        VAR53 = FUN4(VAR7, VAR39)->VAR46;
        FUN4(VAR7, VAR39)->VAR46 = 0;
        FUN4(VAR9, VAR39)->VAR46 = 0;
        VAR33 = socket(VAR57, VAR58, VAR59);
        VAR4.VAR47 = VAR48;
        VAR4.VAR60 = VAR57;
        VAR4.VAR46 = FUN8(517);
        sendto(VAR33, (char *)VAR7, sizeof(*VAR7), 0, (struct VAR34 *)&VAR4, sizeof(VAR4));
        VAR4.VAR46 = FUN8(518);
        sendto(VAR33, (char *)VAR9, sizeof(*VAR9), 0, (struct VAR34 *)&VAR4, sizeof(VAR4));
        FUN9(VAR33);
        FUN4(VAR7, VAR39)->VAR46 = VAR53;
        FUN4(VAR9, VAR39)->VAR46 = VAR53;
        if (VAR1 == VAR17->VAR14)
        {
            VAR62 = VAR17;
            VAR17 = VAR17->VAR13;
            free(VAR62);
        }
        else
        {
            VAR62 = VAR17;
            for (VAR16 = VAR17->VAR13; VAR16; VAR16 = VAR63)
            {
                VAR63 = VAR16->VAR13;
                if (VAR1 == VAR16->VAR14)
                {
                    VAR62->VAR13 = VAR63;
                    free(VAR16);
                    break;
                }
                else
                {
                    VAR62 = VAR16;
                }
            }
        }
    }
    return;
case VAR64:
    if (VAR3->VAR65 >= sizeof(*VAR29))
    {
        if (FUN2(VAR1->VAR33, (struct VAR34 *)&VAR4, &VAR5) < 0)
            return;
        VAR29 = FUN3(VAR3, struct VAR18 *);
        VAR29->VAR23 = VAR4.VAR46;
        VAR29->VAR24 = VAR48.VAR54;
    }
    return;
}
}