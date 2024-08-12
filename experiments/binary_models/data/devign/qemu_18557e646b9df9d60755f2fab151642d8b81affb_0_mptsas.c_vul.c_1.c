static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    MPIMsgSCSITaskMgmtReply VAR5;
    VAR6 *VAR7;
    int VAR8, VAR9;
    VAR10 *VAR11;
    VAR12 *VAR13, *VAR14;
    VAR15 *VAR16;
    FUN2(VAR4);
    FUN3(VAR17 < sizeof(*VAR4));
    FUN3(sizeof(VAR2->VAR18) < sizeof(*VAR4));
    FUN3(sizeof(VAR2->VAR19) < sizeof(VAR5));
    memset(&VAR5, 0, sizeof(VAR5));
    VAR5.VAR20 = VAR4->VAR20;
    VAR5.VAR21 = VAR4->VAR21;
    VAR5.VAR22 = sizeof(VAR5) / 4;
    VAR5.VAR23 = VAR4->VAR23;
    VAR5.VAR24 = VAR4->VAR24;
    VAR5.VAR25 = VAR4->VAR25;
    switch (VAR4->VAR24)
    {
    case VAR26:
    case VAR27:
        VAR8 = FUN4(VAR2, VAR4->VAR21, VAR4->VAR20, VAR4->VAR28, &VAR11);
        if (VAR8)
        {
            VAR5.VAR29 = VAR8;
            goto VAR30;
        }
        if (VAR11->VAR31 != VAR4->VAR28[1])
        {
            VAR5.VAR32 = VAR33;
            goto VAR30;
        }
        FUN5(VAR13, &VAR11->VAR34, VAR14, VAR14)
        {
            VAR35 *VAR36 = VAR13->VAR37;
            if (VAR36 && VAR36->VAR38.VAR25 == VAR4->VAR39)
            {
                break;
            }
        }
        if (VAR13)
        {
            assert(VAR13->VAR37);
            if (VAR4->VAR24 == VAR27)
            {
                VAR5.VAR32 = VAR40;
            }
            else
            {
                VAR41 *VAR42;
                VAR7 = FUN6(&VAR5, sizeof(VAR6));
                VAR7->VAR43 = VAR44;
                VAR9 = 1;
                VAR42 = FUN7(VAR41, 1);
                VAR42->VAR2 = VAR2;
                VAR42->VAR5 = VAR7;
                VAR42->VAR42.VAR45 = VAR46;
                FUN8(VAR13, &VAR42->VAR42);
                goto VAR47;
            }
        }
        break;
    case VAR48:
    case VAR49:
        VAR8 = FUN4(VAR2, VAR4->VAR21, VAR4->VAR20, VAR4->VAR28, &VAR11);
        if (VAR8)
        {
            VAR5.VAR29 = VAR8;
            goto VAR30;
        }
        if (VAR11->VAR31 != VAR4->VAR28[1])
        {
            VAR5.VAR32 = VAR33;
            goto VAR30;
        }
        VAR7 = FUN6(&VAR5, sizeof(VAR6));
        VAR7->VAR43 = VAR44;
        VAR9 = 0;
        FUN5(VAR13, &VAR11->VAR34, VAR14, VAR14)
        {
            if (VAR13->VAR37)
            {
                VAR41 *VAR42;
                VAR9++;
                VAR42 = FUN7(VAR41, 1);
                VAR42->VAR2 = VAR2;
                VAR42->VAR5 = VAR7;
                VAR42->VAR42.VAR45 = VAR46;
                FUN8(VAR13, &VAR42->VAR42);
            }
        }
    VAR47:
        if (VAR7->VAR50 < VAR9)
        {
            VAR7->VAR43 = VAR9;
            return;
        }
        VAR5.VAR50 = VAR9;
        break;
    case VAR51:
        VAR8 = FUN4(VAR2, VAR4->VAR21, VAR4->VAR20, VAR4->VAR28, &VAR11);
        if (VAR8)
        {
            VAR5.VAR29 = VAR8;
            goto VAR30;
        }
        if (VAR11->VAR31 != VAR4->VAR28[1])
        {
            VAR5.VAR32 = VAR33;
            goto VAR30;
        }
        FUN9(&VAR11->VAR52);
        break;
    case VAR53:
        if (VAR4->VAR21 != 0)
        {
            VAR5.VAR29 = VAR54;
            goto VAR30;
        }
        if (VAR4->VAR20 > VAR2->VAR55)
        {
            VAR5.VAR29 = VAR56;
            goto VAR30;
        }
        FUN10(VAR16, &VAR2->VAR57.VAR58.VAR59, VAR60)
        {
            VAR11 = FUN11(VAR16->VAR61);
            if (VAR11->VAR62 == 0 && VAR11->VAR63 == VAR4->VAR20)
            {
                FUN9(VAR16->VAR61);
            }
        }
        break;
    case VAR64:
        FUN12(&VAR2->VAR57.VAR58);
        break;
    default:
        VAR5.VAR32 = VAR65;
        break;
    }
VAR30:
    FUN13(&VAR5);
    FUN14(VAR2, (VAR66 *)&VAR5);