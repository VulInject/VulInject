static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint8_t VAR5)
{
    int VAR6, VAR7;
    if (!VAR2->VAR8[FUN2(VAR5)].VAR9 && !VAR2->VAR8[FUN2(VAR5)].VAR10)
    {
        struct usb_redir_start_iso_stream_header VAR11 = {
            .VAR8 = VAR5,
            .VAR12 = 32,
            .VAR13 = 3,
        };
        FUN3(VAR2->VAR14, 0, &VAR11);
        FUN4(VAR2->VAR14);
        FUN5("", VAR5);
        VAR2->VAR8[FUN2(VAR5)].VAR9 = 1;
    }
    if (VAR5 & VAR15)
    {
        struct VAR16 *VAR17;
        VAR17 = FUN6(&VAR2->VAR8[FUN2(VAR5)].VAR18);
        if (VAR17 == NULL)
        {
            FUN7("", VAR5);
            VAR6 = VAR2->VAR8[FUN2(VAR5)].VAR10;
            VAR2->VAR8[FUN2(VAR5)].VAR10 = 0;
            return FUN8(VAR2, VAR6, 0);
        }
        FUN7("", VAR5, VAR17->VAR6, VAR17->VAR7);
        VAR6 = VAR17->VAR6;
        if (VAR6 != VAR19)
        {
            FUN9(VAR2, VAR17, VAR5);
            return FUN8(VAR2, VAR6, 0);
        }
        VAR7 = VAR17->VAR7;
        if (VAR7 > VAR4->VAR7)
        {
            FUN10("", VAR5);
            FUN9(VAR2, VAR17, VAR5);
            return VAR20;
        }
        memcpy(VAR4->VAR21, VAR17->VAR21, VAR7);
        FUN9(VAR2, VAR17, VAR5);
        return VAR7;
    }
    else
    {
        if (VAR2->VAR8[FUN2(VAR5)].VAR9)
        {
            struct usb_redir_iso_packet_header VAR22 = {.VAR8 = VAR5, .VAR23 = VAR4->VAR7};
            FUN11(VAR2->VAR14, 0, &VAR22, VAR4->VAR21, VAR4->VAR7);
            FUN4(VAR2->VAR14);
        }
        VAR6 = VAR2->VAR8[FUN2(VAR5)].VAR10;
        VAR2->VAR8[FUN2(VAR5)].VAR10 = 0;
        FUN7("", VAR5, VAR6, VAR4->VAR7);
        return FUN8(VAR2, VAR6, VAR4->VAR7);
    }
}