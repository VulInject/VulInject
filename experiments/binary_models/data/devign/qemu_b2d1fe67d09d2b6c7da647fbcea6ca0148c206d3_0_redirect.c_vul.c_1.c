static void FUN1(VAR1 *VAR2, VAR3 *VAR4, uint8_t VAR5)
{
    struct usb_redir_bulk_packet_header VAR6;
    size_t VAR7 = (VAR4->VAR8) ? VAR4->VAR8->VAR9.VAR7 : VAR4->VAR9.VAR7;
    FUN2("" VAR10 "", VAR5, VAR7, VAR4->VAR11);
    if (FUN3(VAR2, VAR4->VAR11))
    {
        VAR4->VAR12 = VAR13;
        return;
    }
    VAR6.VAR14 = VAR5;
    VAR6.VAR15 = VAR7;
    VAR6.VAR16 = 0;
    VAR6.VAR17 = VAR7 >> 16;
    assert(VAR6.VAR17 == 0 || FUN4(VAR2->VAR18, VAR19));
    if (VAR5 & VAR20)
    {
        FUN5(VAR2->VAR18, VAR4->VAR11, &VAR6, NULL, 0);
    }
    else
    {
        uint8_t VAR21[VAR7];
        if (VAR4->VAR8)
        {
            FUN6(VAR4->VAR8->VAR9.VAR9, VAR4->VAR8->VAR9.VAR22, 0, VAR21, VAR7);
        }
        else
        {
            FUN7(VAR4, VAR21, VAR7);
        }
        FUN8(VAR2, "", VAR21, VAR7);
        FUN5(VAR2->VAR18, VAR4->VAR11, &VAR6, VAR21, VAR7);
    }
    FUN9(VAR2->VAR18);
    VAR4->VAR12 = VAR13;
}