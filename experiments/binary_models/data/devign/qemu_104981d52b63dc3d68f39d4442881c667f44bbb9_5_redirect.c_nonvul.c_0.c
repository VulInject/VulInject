static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint8_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2, VAR4);
    struct usb_redir_bulk_packet_header VAR8;
    FUN3("", VAR5, VAR4->VAR9.VAR10, VAR7->VAR11);
    VAR8.VAR12 = VAR5;
    VAR8.VAR13 = VAR4->VAR9.VAR10;
    VAR8.VAR14 = 0;
    if (VAR5 & VAR15)
    {
        FUN4(VAR2->VAR16, VAR7->VAR11, &VAR8, NULL, 0);
    }
    else
    {
        uint8_t VAR17[VAR4->VAR9.VAR10];
        FUN5(VAR4, VAR17, VAR4->VAR9.VAR10);
        FUN6(VAR2, "", VAR17, VAR4->VAR9.VAR10);
        FUN4(VAR2->VAR16, VAR7->VAR11, &VAR8, VAR17, VAR4->VAR9.VAR10);
    }
    FUN7(VAR2->VAR16);
    return VAR18;
}