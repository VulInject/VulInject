static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint8_t VAR5)
{
    if (VAR5 & VAR6)
    {
        struct VAR7 *VAR8;
        int VAR9, VAR10;
        if (!VAR2->VAR11[FUN2(VAR5)].VAR12 && !VAR2->VAR11[FUN2(VAR5)].VAR13)
        {
            struct usb_redir_start_interrupt_receiving_header VAR14 = {
                .VAR11 = VAR5,
            };
            FUN3(VAR2->VAR15, 0, &VAR14);
            FUN4(VAR2->VAR15);
            FUN5("", VAR5);
            VAR2->VAR11[FUN2(VAR5)].VAR12 = 1;
            VAR2->VAR11[FUN2(VAR5)].VAR16 = 1000;
            VAR2->VAR11[FUN2(VAR5)].VAR17 = 0;
        }
        VAR8 = FUN6(&VAR2->VAR11[FUN2(VAR5)].VAR18);
        if (VAR8 == NULL)
        {
            FUN7("", VAR5);
            VAR9 = VAR2->VAR11[FUN2(VAR5)].VAR13;
            VAR2->VAR11[FUN2(VAR5)].VAR13 = 0;
            if (VAR9)
            {
                return FUN8(VAR2, VAR9, 0);
            }
            return VAR19;
        }
        FUN5("", VAR5, VAR8->VAR9, VAR8->VAR10);
        VAR9 = VAR8->VAR9;
        if (VAR9 != VAR20)
        {
            FUN9(VAR2, VAR8, VAR5);
            return FUN8(VAR2, VAR9, 0);
        }
        VAR10 = VAR8->VAR10;
        if (VAR10 > VAR4->VAR21.VAR22)
        {
            FUN10("", VAR5);
            FUN9(VAR2, VAR8, VAR5);
            return VAR23;
        }
        FUN11(VAR4, VAR8->VAR24, VAR10);
        FUN9(VAR2, VAR8, VAR5);
        return VAR10;
    }
    else
    {
        VAR25 *VAR26 = FUN12(VAR2, VAR4);
        struct usb_redir_interrupt_packet_header VAR27;
        uint8_t VAR28[VAR4->VAR21.VAR22];
        FUN5("", VAR5, VAR4->VAR21.VAR22, VAR26->VAR29);
        VAR27.VAR11 = VAR5;
        VAR27.VAR30 = VAR4->VAR21.VAR22;
        FUN11(VAR4, VAR28, VAR4->VAR21.VAR22);
        FUN13(VAR2, "", VAR28, VAR4->VAR21.VAR22);
        FUN14(VAR2->VAR15, VAR26->VAR29, &VAR27, VAR28, VAR4->VAR21.VAR22);
        FUN4(VAR2->VAR15);
        return VAR31;
    }
}