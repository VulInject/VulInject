int FUN1(void)
{
    static int VAR1;
    struct new_utsname VAR2;
    const char *VAR3;
    if (VAR1)
        return VAR1;
    if (VAR4 && *VAR4)
    {
        VAR3 = VAR4;
    }
    else
    {
        if (FUN2(&VAR2))
            return 0;
        VAR3 = VAR2.VAR5;
    }
    VAR1 = FUN3(VAR3);
    return VAR1;
}