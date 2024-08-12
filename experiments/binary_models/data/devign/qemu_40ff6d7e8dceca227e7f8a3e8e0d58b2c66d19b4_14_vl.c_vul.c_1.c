static int FUN1(struct VAR1 *VAR2)
{
    int VAR3;
    unsigned long VAR4 = 0;
    FUN2(VAR3 = open("", VAR5));
    if (VAR3 < 0)
        return -1;
    FUN3(VAR3, VAR6, &VAR4);
    if (VAR4 != VAR7 && FUN3(VAR3, VAR8, VAR7) < 0)
    {
        fprintf(VAR9, ""
                        ""
                        "");
        goto VAR10;
    }
    if (FUN3(VAR3, VAR11, 0) < 0)
    {
    VAR10:
        close(VAR3);
        return -1;
    }
    FUN4(VAR3);
    VAR2->VAR12 = (void *)(long)VAR3;
    return 0;
}