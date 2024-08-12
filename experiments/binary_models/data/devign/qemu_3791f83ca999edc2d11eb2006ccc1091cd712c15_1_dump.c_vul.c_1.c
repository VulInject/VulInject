static int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4, const char *VAR5, int VAR6)
{
    struct pcap_file_hdr VAR7;
    VAR1 *VAR8;
    VAR9 *VAR10;
    struct tm VAR11;
    int VAR12;
    VAR12 = open(VAR5, VAR13 | VAR14 | VAR15 | VAR16, 0644);
    if (VAR12 < 0)
    {
        FUN2("", VAR5);
        return -1;
    }
    VAR7.VAR17 = VAR18;
    VAR7.VAR19 = 2;
    VAR7.VAR20 = 4;
    VAR7.VAR21 = 0;
    VAR7.VAR22 = 0;
    VAR7.VAR23 = VAR6;
    VAR7.VAR24 = 1;
    if (write(VAR12, &VAR7, sizeof(VAR7)) < sizeof(VAR7))
    {
        FUN2("", strerror(VAR25));
        close(VAR12);
        return -1;
    }
    VAR8 = FUN3(&VAR26, VAR2, VAR3, VAR4);
    snprintf(VAR8->VAR27, sizeof(VAR8->VAR27), "", VAR5, VAR6);
    VAR10 = FUN4(VAR9, VAR8, VAR8);
    VAR10->VAR12 = VAR12;
    VAR10->VAR28 = VAR6;
    FUN5(&VAR11, 0);
    VAR10->VAR29 = FUN6(&VAR11);
    return 0;
}