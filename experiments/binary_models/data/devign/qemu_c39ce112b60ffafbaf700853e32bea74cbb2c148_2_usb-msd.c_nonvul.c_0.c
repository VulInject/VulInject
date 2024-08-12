static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    int VAR7 = 0;
    struct usb_msd_cbw VAR8;
    uint8_t VAR9 = VAR4->VAR9;
    switch (VAR4->VAR10)
    {
    case VAR11:
        if (VAR9 != 2)
            goto VAR12;
        switch (VAR6->VAR13)
        {
        case VAR14:
            if (VAR4->VAR15.VAR16 != 31)
            {
                fprintf(VAR17, "");
                goto VAR12;
            }
            FUN2(VAR4, &VAR8, 31);
            if (FUN3(VAR8.VAR18) != 0x43425355)
            {
                fprintf(VAR17, "", FUN3(VAR8.VAR18));
                goto VAR12;
            }
            FUN4("", VAR8.VAR19);
            if (VAR8.VAR19 != 0)
            {
                fprintf(VAR17, "", VAR8.VAR19);
                goto VAR12;
            }
            VAR6->VAR20 = FUN3(VAR8.VAR20);
            VAR6->VAR21 = FUN3(VAR8.VAR21);
            if (VAR6->VAR21 == 0)
            {
                VAR6->VAR13 = VAR22;
            }
            else if (VAR8.VAR23 & 0x80)
            {
                VAR6->VAR13 = VAR24;
            }
            else
            {
                VAR6->VAR13 = VAR25;
            }
            FUN4("", VAR6->VAR20, VAR8.VAR23, VAR8.VAR26, VAR6->VAR21);
            VAR6->VAR27 = 0;
            VAR6->VAR28 = 0;
            VAR6->VAR29 = FUN5(VAR6->VAR30, VAR6->VAR20, 0, VAR8.VAR31, NULL);
            FUN6(VAR6->VAR29);
            if (VAR6->VAR13 != VAR22 && VAR6->VAR27 == 0)
            {
                FUN7(VAR6->VAR29);
            }
            VAR7 = VAR4->VAR32;
            break;
        case VAR25:
            FUN4("", VAR4->VAR15.VAR16, VAR6->VAR21);
            if (VAR4->VAR15.VAR16 > VAR6->VAR21)
            {
                goto VAR12;
            }
            if (VAR6->VAR28)
            {
                FUN8(VAR6, VAR4);
            }
            if (VAR6->VAR27)
            {
                int VAR33 = VAR4->VAR15.VAR16 - VAR4->VAR32;
                if (VAR33)
                {
                    FUN9(VAR4, VAR33);
                    VAR6->VAR21 -= VAR33;
                    if (VAR6->VAR21 == 0)
                    {
                        VAR6->VAR13 = VAR22;
                    }
                }
            }
            if (VAR4->VAR32 < VAR4->VAR15.VAR16)
            {
                FUN4("", VAR4);
                VAR6->VAR34 = VAR4;
                VAR7 = VAR35;
            }
            else
            {
                VAR7 = VAR4->VAR32;
            }
            break;
        default:
            FUN4("", VAR4->VAR15.VAR16);
            goto VAR12;
        }
        break;
    case VAR36:
        if (VAR9 != 1)
            goto VAR12;
        switch (VAR6->VAR13)
        {
        case VAR25:
            if (VAR6->VAR21 != 0 || VAR4->VAR15.VAR16 < 13)
            {
                goto VAR12;
            }
            VAR6->VAR34 = VAR4;
            VAR7 = VAR35;
            break;
        case VAR22:
            FUN4("", VAR6->VAR32, VAR6->VAR20, VAR4->VAR15.VAR16);
            if (VAR4->VAR15.VAR16 < 13)
            {
                goto VAR12;
            }
            FUN10(VAR6, VAR4);
            VAR6->VAR13 = VAR14;
            VAR7 = 13;
            break;
        case VAR24:
            FUN4("", VAR4->VAR15.VAR16, VAR6->VAR21, VAR6->VAR28);
            if (VAR6->VAR28)
            {
                FUN8(VAR6, VAR4);
            }
            if (VAR6->VAR27)
            {
                int VAR33 = VAR4->VAR15.VAR16 - VAR4->VAR32;
                if (VAR33)
                {
                    FUN9(VAR4, VAR33);
                    VAR6->VAR21 -= VAR33;
                    if (VAR6->VAR21 == 0)
                    {
                        VAR6->VAR13 = VAR22;
                    }
                }
            }
            if (VAR4->VAR32 < VAR4->VAR15.VAR16)
            {
                FUN4("", VAR4);
                VAR6->VAR34 = VAR4;
                VAR7 = VAR35;
            }
            else
            {
                VAR7 = VAR4->VAR32;
            }
            break;
        default:
            FUN4("", VAR4->VAR15.VAR16);
            goto VAR12;
        }
        break;
    default:
        FUN4("");
    VAR12:
        VAR7 = VAR37;
        break;
    }
    return VAR7;
}