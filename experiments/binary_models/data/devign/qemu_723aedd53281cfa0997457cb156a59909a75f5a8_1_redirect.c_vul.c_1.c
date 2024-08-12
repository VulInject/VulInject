static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint8_t VAR5)
{
    struct usb_redir_interrupt_packet_header VAR6;
    uint8_t VAR7[VAR4->VAR8.VAR9];
    FUN2("" VAR10 "", VAR5, VAR4->VAR8.VAR9, VAR4->VAR11);
    if (FUN3(VAR2, VAR4->VAR11))
    {
        VAR4->VAR12 = VAR13;
        return;
    }
    VAR6.VAR14 = VAR5;
    VAR6.VAR15 = VAR4->VAR8.VAR9;
    FUN4(VAR4, VAR7, VAR4->VAR8.VAR9);
    FUN5(VAR2, "", VAR7, VAR4->VAR8.VAR9);
    FUN6(VAR2->VAR16, VAR4->VAR11, &VAR6, VAR7, VAR4->VAR8.VAR9);
    FUN7(VAR2->VAR16);
    VAR4->VAR12 = VAR13;
}