static void *FUN1(void *VAR1)
{
    int VAR2 = *(int *)VAR1;
    off_t VAR3;
    size_t VAR4;
    uint32_t VAR5;
    int VAR6;
    int VAR7;
    pthread_t VAR8;
    VAR6 = FUN2(VAR9);
    if (VAR6 == -1)
    {
        goto VAR10;
    }
    VAR7 = FUN3(VAR6, NULL, &VAR5, &VAR3, &VAR4);
    if (VAR7 == -1)
    {
        goto VAR10;
    }
    VAR7 = FUN4(VAR2, VAR6, VAR5, VAR3, VAR4);
    if (VAR7 == -1)
    {
        goto VAR10;
    }
    FUN5(&VAR8, NULL, VAR11, NULL);
    if (VAR12)
    {
        fprintf(VAR13, "", VAR14, VAR15);
    }
    else
    {
        FUN6(VAR16, VAR17);
    }
    VAR7 = FUN7(VAR2);
    if (VAR7)
    {
        goto VAR10;
    }
    close(VAR2);
    FUN8(FUN9(), VAR18);
    return (void *)VAR19;
VAR10:
    FUN8(FUN9(), VAR18);
    return (void *)VAR20;
}