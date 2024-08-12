static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7 = 0;
    struct usb_msd_cbw VAR8;
    uint8_t VAR9 = VAR4->VAR9;
    VAR10 *VAR11 = VAR4->VAR11;
    int VAR12 = VAR4->VAR12;
    switch (VAR4->VAR13)
    {
    case VAR14:
        if (VAR9 != 2)
            goto VAR15;
        switch (VAR6->VAR16)
        {
        case VAR17:
            if (VAR12 != 31)
            {
                fprintf(VAR18, "");
                goto VAR15;
            }
            memcpy(&VAR8, VAR11, 31);
            if (FUN2(VAR8.VAR19) != 0x43425355)
            {
                fprintf(VAR18, "", FUN2(VAR8.VAR19));
                goto VAR15;
            }
            FUN3("", VAR8.VAR20);
            if (VAR8.VAR20 != 0)
            {
                fprintf(VAR18, "", VAR8.VAR20);
                goto VAR15;
            }
            VAR6->VAR21 = FUN2(VAR8.VAR21);
            VAR6->VAR22 = FUN2(VAR8.VAR22);
            if (VAR6->VAR22 == 0)
            {
                VAR6->VAR16 = VAR23;
            }
            else if (VAR8.VAR24 & 0x80)
            {
                VAR6->VAR16 = VAR25;
            }
            else
            {
                VAR6->VAR16 = VAR26;
            }
            FUN3("", VAR6->VAR21, VAR8.VAR24, VAR8.VAR27, VAR6->VAR22);
            VAR6->VAR28 = 0;
            VAR6->VAR29 = 0;
            VAR6->VAR30 = FUN4(VAR6->VAR31, VAR6->VAR21, 0, NULL);
            FUN5(VAR6->VAR30, VAR8.VAR32);
            if (VAR6->VAR16 != VAR23 && VAR6->VAR28 == 0)
            {
                FUN6(VAR6->VAR30);
            }
            VAR7 = VAR12;
            break;
        case VAR26:
            FUN3("", VAR12, VAR6->VAR22);
            if (VAR12 > VAR6->VAR22)
                goto VAR15;
            VAR6->VAR33 = VAR11;
            VAR6->VAR34 = VAR12;
            if (VAR6->VAR29)
            {
                FUN7(VAR6);
            }
            if (VAR6->VAR28 && VAR6->VAR34)
            {
                VAR6->VAR22 -= VAR6->VAR34;
                if (VAR6->VAR22 == 0)
                    VAR6->VAR16 = VAR23;
                VAR6->VAR34 = 0;
            }
            if (VAR6->VAR34)
            {
                FUN3("", VAR4);
                VAR6->VAR35 = VAR4;
                VAR7 = VAR36;
            }
            else
            {
                VAR7 = VAR12;
            }
            break;
        default:
            FUN3("", VAR12);
            goto VAR15;
        }
        break;
    case VAR37:
        if (VAR9 != 1)
            goto VAR15;
        switch (VAR6->VAR16)
        {
        case VAR26:
            if (VAR6->VAR22 != 0 || VAR12 < 13)
                goto VAR15;
            VAR6->VAR35 = VAR4;
            VAR7 = VAR36;
            break;
        case VAR23:
            FUN3("", VAR6->VAR38, VAR6->VAR21, VAR12);
            if (VAR12 < 13)
                goto VAR15;
            FUN8(VAR6, VAR4);
            VAR6->VAR16 = VAR17;
            VAR7 = 13;
            break;
        case VAR25:
            FUN3("", VAR12, VAR6->VAR22, VAR6->VAR29);
            if (VAR12 > VAR6->VAR22)
                VAR12 = VAR6->VAR22;
            VAR6->VAR33 = VAR11;
            VAR6->VAR34 = VAR12;
            if (VAR6->VAR29)
            {
                FUN7(VAR6);
            }
            if (VAR6->VAR28 && VAR6->VAR34)
            {
                VAR6->VAR22 -= VAR6->VAR34;
                memset(VAR6->VAR33, 0, VAR6->VAR34);
                if (VAR6->VAR22 == 0)
                    VAR6->VAR16 = VAR23;
                VAR6->VAR34 = 0;
            }
            if (VAR6->VAR34)
            {
                FUN3("", VAR4);
                VAR6->VAR35 = VAR4;
                VAR7 = VAR36;
            }
            else
            {
                VAR7 = VAR12;
            }
            break;
        default:
            FUN3("", VAR12);
            goto VAR15;
        }
        break;
    default:
        FUN3("");
    VAR15:
        VAR7 = VAR39;
        break;
    }
    return VAR7;
}