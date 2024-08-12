static int FUN1(VAR1 *VAR2, VAR3 *VAR4, uint8_t VAR5)
{
    VAR6 *VAR7 = FUN2(VAR2, VAR4);
    struct usb_redir_bulk_packet_header VAR8;
    FUN3("", VAR5, VAR4->VAR9, VAR7->VAR10);
    VAR8.VAR11 = VAR5;
    VAR8.VAR12 = VAR4->VAR9;
    VAR8.VAR13 = 0;
    VAR7->VAR8 = VAR8;
    if (VAR5 & VAR14)
    {
        FUN4(VAR2->VAR15, VAR7->VAR10, &VAR8, NULL, 0);
    }
    else
    {
        FUN5(VAR2, "", VAR4->VAR16, VAR4->VAR9);
        FUN4(VAR2->VAR15, VAR7->VAR10, &VAR8, VAR4->VAR16, VAR4->VAR9);
    }
    FUN6(VAR2->VAR15);
    return VAR17;
}