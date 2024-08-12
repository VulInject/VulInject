void FUN1(void *VAR1)
{
    char *VAR2 = VAR1;
    static int VAR3 = 1;
    if (VAR3)
    {
        VAR3 = 0;
        return;
    }
    FUN2(VAR2, NULL);
    FUN3(VAR4, VAR2);
    FUN4(VAR2);
}