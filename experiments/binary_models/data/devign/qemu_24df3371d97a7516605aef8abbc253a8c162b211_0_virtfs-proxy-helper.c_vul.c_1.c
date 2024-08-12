static int FUN1(int VAR1)
{
    int VAR2;
    int VAR3 = 0;
    int VAR4 = 0;
    uint64_t VAR5;
    ProxyHeader VAR6;
    int VAR7, VAR8, VAR9;
    V9fsString VAR10, VAR11;
    struct timespec VAR12[2];
    V9fsString VAR13, VAR14;
    struct iovec VAR15, VAR16;
    VAR15.VAR17 = FUN2(VAR18 + VAR19);
    VAR15.VAR20 = VAR18 + VAR19;
    VAR16.VAR17 = FUN2(VAR18 + VAR19);
    VAR16.VAR20 = VAR18 + VAR19;
    while (1)
    {
        VAR6.VAR21 = 0;
        VAR4 = FUN3(VAR1, &VAR15, &VAR6);
        if (VAR4 < 0)
        {
            goto VAR22;
        }
        switch (VAR6.VAR21)
        {
        case VAR23:
            VAR4 = FUN4(&VAR15);
            break;
        case VAR24:
            VAR4 = FUN5(&VAR15);
            break;
        case VAR25:
        case VAR26:
        case VAR27:
            VAR4 = FUN6(VAR6.VAR21, &VAR15);
            break;
        case VAR28:
            FUN7(&VAR14);
            FUN7(&VAR13);
            VAR4 = FUN8(&VAR15, VAR19, "", &VAR13, &VAR14);
            if (VAR4 > 0)
            {
                VAR4 = FUN9(VAR13.VAR29, VAR14.VAR29);
                if (VAR4 < 0)
                {
                    VAR4 = -VAR30;
                }
            }
            FUN10(&VAR13);
            FUN10(&VAR14);
            break;
        case VAR31:
        case VAR32:
            VAR4 = FUN11(VAR6.VAR21, &VAR15, &VAR16);
            break;
        case VAR33:
            VAR4 = FUN12(&VAR15, &VAR16);
            break;
        case VAR34:
            FUN7(&VAR14);
            VAR4 = FUN8(&VAR15, VAR19, "", &VAR14, &VAR7);
            if (VAR4 > 0)
            {
                VAR4 = chmod(VAR14.VAR29, VAR7);
                if (VAR4 < 0)
                {
                    VAR4 = -VAR30;
                }
            }
            FUN10(&VAR14);
            break;
        case VAR35:
            FUN7(&VAR14);
            VAR4 = FUN8(&VAR15, VAR19, "", &VAR14, &VAR8, &VAR9);
            if (VAR4 > 0)
            {
                VAR4 = FUN13(VAR14.VAR29, VAR8, VAR9);
                if (VAR4 < 0)
                {
                    VAR4 = -VAR30;
                }
            }
            FUN10(&VAR14);
            break;
        case VAR36:
            FUN7(&VAR14);
            VAR4 = FUN8(&VAR15, VAR19, "", &VAR14, &VAR5);
            if (VAR4 > 0)
            {
                VAR4 = FUN14(VAR14.VAR29, VAR5);
                if (VAR4 < 0)
                {
                    VAR4 = -VAR30;
                }
            }
            FUN10(&VAR14);
            break;
        case VAR37:
            FUN7(&VAR14);
            VAR4 = FUN8(&VAR15, VAR19, "", &VAR14, &VAR12[0].VAR38, &VAR12[0].VAR39, &VAR12[1].VAR38, &VAR12[1].VAR39);
            if (VAR4 > 0)
            {
                VAR4 = FUN15(VAR14.VAR29, VAR12);
                if (VAR4 < 0)
                {
                    VAR4 = -VAR30;
                }
            }
            FUN10(&VAR14);
            break;
        case VAR40:
            FUN7(&VAR14);
            FUN7(&VAR13);
            VAR4 = FUN8(&VAR15, VAR19, "", &VAR13, &VAR14);
            if (VAR4 > 0)
            {
                VAR4 = FUN16(VAR13.VAR29, VAR14.VAR29);
                if (VAR4 < 0)
                {
                    VAR4 = -VAR30;
                }
            }
            FUN10(&VAR13);
            FUN10(&VAR14);
            break;
        case VAR41:
            FUN7(&VAR14);
            VAR4 = FUN8(&VAR15, VAR19, "", &VAR14);
            if (VAR4 > 0)
            {
                VAR4 = remove(VAR14.VAR29);
                if (VAR4 < 0)
                {
                    VAR4 = -VAR30;
                }
            }
            FUN10(&VAR14);
            break;
        case VAR42:
        case VAR43:
            VAR4 = FUN17(VAR6.VAR21, &VAR15, &VAR16);
            break;
        case VAR44:
            FUN7(&VAR14);
            FUN7(&VAR10);
            FUN7(&VAR11);
            VAR4 = FUN8(&VAR15, VAR19, "", &VAR14, &VAR10, &VAR11, &VAR3, &VAR2);
            if (VAR4 > 0)
            {
                VAR4 = FUN18(VAR14.VAR29, VAR10.VAR29, VAR11.VAR29, VAR3, VAR2);
                if (VAR4 < 0)
                {
                    VAR4 = -VAR30;
                }
            }
            FUN10(&VAR14);
            FUN10(&VAR10);
            FUN10(&VAR11);
            break;
        case VAR45:
            FUN7(&VAR14);
            FUN7(&VAR10);
            VAR4 = FUN8(&VAR15, VAR19, "", &VAR14, &VAR10);
            if (VAR4 > 0)
            {
                VAR4 = FUN19(VAR14.VAR29, VAR10.VAR29);
                if (VAR4 < 0)
                {
                    VAR4 = -VAR30;
                }
            }
            FUN10(&VAR14);
            FUN10(&VAR10);
            break;
        case VAR46:
            VAR4 = FUN20(&VAR15, &VAR16);
            break;
        default:
            goto VAR22;
            break;
        }
        if (FUN21(VAR1, VAR6.VAR21, &VAR16, VAR4) < 0)
        {
            goto VAR22;
        }
    }
VAR22:
    FUN22(VAR15.VAR17);
    FUN22(VAR16.VAR17);
    return -1;
}