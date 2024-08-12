static int FUN1(struct VAR1 *VAR2)
{
    struct hpet_info VAR3;
    int VAR4, VAR5;
    VAR5 = open("", VAR6);
    if (VAR5 < 0)
        return -1;
    VAR4 = FUN2(VAR5, VAR7, VAR8);
    if (VAR4 < 0)
    {
        fprintf(VAR9, ""
                        ""
                        "");
        goto VAR10;
    }
    VAR4 = FUN2(VAR5, VAR11, &VAR3);
    if (VAR4 < 0)
        goto VAR10;
    VAR4 = FUN2(VAR5, VAR12, 0);
    if (VAR3.VAR13 && (VAR4 < 0))
        goto VAR10;
    VAR4 = FUN2(VAR5, VAR14, 0);
    if (VAR4 < 0)
        goto VAR10;
    FUN3(VAR5);
    VAR2->VAR15 = (void *)(long)VAR5;
    return 0;
VAR10:
    close(VAR5);
    return -1;
}