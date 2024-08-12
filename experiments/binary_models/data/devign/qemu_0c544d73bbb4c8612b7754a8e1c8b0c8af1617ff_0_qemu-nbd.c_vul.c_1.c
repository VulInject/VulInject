static void *FUN1(void *VAR1)
{
    char *VAR2 = VAR1;
    off_t VAR3;
    size_t VAR4;
    uint32_t VAR5;
    int VAR6, VAR7;
    int VAR8;
    pthread_t VAR9;
    VAR7 = FUN2(VAR10);
    if (VAR7 < 0)
    {
        goto VAR11;
    }
    VAR8 = FUN3(VAR7, NULL, &VAR5, &VAR3, &VAR4);
    if (VAR8 < 0)
    {
        goto VAR11;
    }
    VAR6 = open(VAR2, VAR12);
    if (VAR6 < 0)
    {
        fprintf(VAR13, "", VAR2);
        goto VAR11;
    }
    VAR8 = FUN4(VAR6, VAR7, VAR5, VAR3, VAR4);
    if (VAR8 < 0)
    {
        goto VAR11;
    }
    FUN5(&VAR9, NULL, VAR14, VAR2);
    if (VAR15)
    {
        fprintf(VAR13, "", VAR2, VAR16);
    }
    else
    {
        FUN6(VAR17, VAR18);
    }
    VAR8 = FUN7(VAR6);
    if (VAR8)
    {
        goto VAR11;
    }
    close(VAR6);
    FUN8(FUN9(), VAR19);
    return (void *)VAR20;
VAR11:
    FUN8(FUN9(), VAR19);
    return (void *)VAR21;
}