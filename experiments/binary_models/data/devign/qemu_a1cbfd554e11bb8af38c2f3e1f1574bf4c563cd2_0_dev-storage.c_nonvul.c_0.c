static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    uint32_t VAR7;
    struct usb_msd_cbw VAR8;
    uint8_t VAR9 = VAR4->VAR10->VAR11;
    switch (VAR4->VAR12)
    {
    case VAR13:
        if (VAR9 != 2)
            goto VAR14;
        switch (VAR6->VAR15)
        {
        case VAR16:
            if (VAR4->VAR17.VAR18 != 31)
            {
                fprintf(VAR19, "");
                goto VAR14;
            }
            FUN2(VAR4, &VAR8, 31);
            if (FUN3(VAR8.VAR20) != 0x43425355)
            {
                fprintf(VAR19, "", FUN3(VAR8.VAR20));
                goto VAR14;
            }
            FUN4("", VAR8.VAR21);
            if (VAR8.VAR21 != 0)
            {
                fprintf(VAR19, "", VAR8.VAR21);
                goto VAR14;
            }
            VAR7 = FUN3(VAR8.VAR7);
            VAR6->VAR22 = FUN3(VAR8.VAR22);
            if (VAR6->VAR22 == 0)
            {
                VAR6->VAR15 = VAR23;
            }
            else if (VAR8.VAR24 & 0x80)
            {
                VAR6->VAR15 = VAR25;
            }
            else
            {
                VAR6->VAR15 = VAR26;
            }
            FUN4("", VAR7, VAR8.VAR24, VAR8.VAR27, VAR6->VAR22);
            assert(FUN3(VAR6->VAR28.VAR29) == 0);
            VAR6->VAR30 = 0;
            VAR6->VAR31 = FUN5(VAR6->VAR32, VAR7, 0, VAR8.VAR33, NULL);
            FUN6(VAR6->VAR31);
            FUN7(VAR6->VAR31);
            if (VAR6->VAR31->VAR33.VAR34 != VAR35)
            {
                FUN8(VAR6->VAR31);
            }
            break;
        case VAR26:
            FUN4("", VAR4->VAR17.VAR18, VAR6->VAR22);
            if (VAR4->VAR17.VAR18 > VAR6->VAR22)
            {
                goto VAR14;
            }
            if (VAR6->VAR30)
            {
                FUN9(VAR6, VAR4);
            }
            if (FUN3(VAR6->VAR28.VAR29))
            {
                int VAR36 = VAR4->VAR17.VAR18 - VAR4->VAR37;
                if (VAR36)
                {
                    FUN10(VAR4, VAR36);
                    VAR6->VAR22 -= VAR36;
                    if (VAR6->VAR22 == 0)
                    {
                        VAR6->VAR15 = VAR23;
                    }
                }
            }
            if (VAR4->VAR37 < VAR4->VAR17.VAR18)
            {
                FUN4("", VAR4);
                VAR6->VAR38 = VAR4;
                VAR4->VAR39 = VAR40;
            }
            break;
        default:
            FUN4("", VAR4->VAR17.VAR18);
            goto VAR14;
        }
        break;
    case VAR41:
        if (VAR9 != 1)
            goto VAR14;
        switch (VAR6->VAR15)
        {
        case VAR26:
            if (VAR6->VAR22 != 0 || VAR4->VAR17.VAR18 < 13)
            {
                goto VAR14;
            }
            VAR6->VAR38 = VAR4;
            VAR4->VAR39 = VAR40;
            break;
        case VAR23:
            if (VAR4->VAR17.VAR18 < 13)
            {
                goto VAR14;
            }
            if (VAR6->VAR31)
            {
                FUN4("", VAR4);
                VAR6->VAR38 = VAR4;
                VAR4->VAR39 = VAR40;
            }
            else
            {
                FUN11(VAR6, VAR4);
                VAR6->VAR15 = VAR16;
            }
            break;
        case VAR25:
            FUN4("", VAR4->VAR17.VAR18, VAR6->VAR22, VAR6->VAR30);
            if (VAR6->VAR30)
            {
                FUN9(VAR6, VAR4);
            }
            if (FUN3(VAR6->VAR28.VAR29))
            {
                int VAR36 = VAR4->VAR17.VAR18 - VAR4->VAR37;
                if (VAR36)
                {
                    FUN10(VAR4, VAR36);
                    VAR6->VAR22 -= VAR36;
                    if (VAR6->VAR22 == 0)
                    {
                        VAR6->VAR15 = VAR23;
                    }
                }
            }
            if (VAR4->VAR37 < VAR4->VAR17.VAR18)
            {
                FUN4("", VAR4);
                VAR6->VAR38 = VAR4;
                VAR4->VAR39 = VAR40;
            }
            break;
        default:
            FUN4("", VAR4->VAR17.VAR18);
            goto VAR14;
        }
        break;
    default:
        FUN4("");
    VAR14:
        VAR4->VAR39 = VAR42;
        break;
    }
}