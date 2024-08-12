static int FUN1(void)
{
    int VAR1;
    int VAR2[2];
    VAR1 = FUN2(VAR2);
    if (VAR1 == -1)
    {
        return -VAR3;
    }
    VAR1 = FUN3(VAR2[0], VAR4);
    if (VAR1 < 0)
    {
        goto VAR5;
    }
    VAR1 = FUN3(VAR2[1], VAR4);
    if (VAR1 < 0)
    {
        goto VAR5;
    }
    FUN4(VAR2[0], NULL, VAR6, NULL, (void *)(VAR7)VAR2[0]);
    VAR8 = VAR2[1];
    return 0;
VAR5:
    close(VAR2[0]);
    close(VAR2[1]);
    return VAR1;
}