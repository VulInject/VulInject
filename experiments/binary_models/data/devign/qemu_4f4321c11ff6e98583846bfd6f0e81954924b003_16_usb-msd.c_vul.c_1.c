static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    struct usb_msd_csw VAR5;
    int VAR6;
    VAR5.VAR7 = FUN2(0x53425355);
    VAR5.VAR8 = FUN2(VAR2->VAR8);
    VAR5.VAR9 = VAR2->VAR9;
    VAR5.VAR10 = VAR2->VAR11;
    VAR6 = FUN3(sizeof(VAR5), VAR4->VAR6);
    memcpy(VAR4->VAR12, &VAR5, VAR6);
}