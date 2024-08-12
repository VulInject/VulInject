static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, int VAR6)
{
    struct pcap_file_hdr VAR7;
    VAR8 *VAR9;
    VAR9 = FUN2(sizeof(VAR8));
    VAR9->VAR10 = open(VAR5, VAR11 | VAR12 | VAR13, 0644);
    if (VAR9->VAR10 < 0)
    {
        FUN3("", VAR5);
        return -1;
    }
    VAR9->VAR14 = VAR6;
    VAR7.VAR15 = VAR16;
    VAR7.VAR17 = 2;
    VAR7.VAR18 = 4;
    VAR7.VAR19 = 0;
    VAR7.VAR20 = 0;
    VAR7.VAR21 = VAR9->VAR14;
    VAR7.VAR22 = 1;
    if (write(VAR9->VAR10, &VAR7, sizeof(VAR7)) < sizeof(VAR7))
    {
        FUN3("", strerror(VAR23));
        close(VAR9->VAR10);
        FUN4(VAR9);
        return -1;
    }
    VAR9->VAR24 = FUN5(VAR25, VAR2, NULL, VAR3, VAR4, NULL, VAR26, NULL, NULL, VAR27, VAR9);
    snprintf(VAR9->VAR24->VAR28, sizeof(VAR9->VAR24->VAR28), "", VAR5, VAR6);
    return 0;
}