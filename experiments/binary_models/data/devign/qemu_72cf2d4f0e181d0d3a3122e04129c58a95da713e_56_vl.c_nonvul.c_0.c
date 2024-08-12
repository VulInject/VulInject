static int FUN1(int VAR1, int (*VAR2)(const char *VAR3))
{
    struct VAR4 *VAR5;
    int VAR6;
    FUN2(VAR5, &VAR7, VAR8)
    {
        if (VAR5->VAR1 != VAR1)
            continue;
        VAR6 = FUN3(VAR5->VAR3);
        if (0 != VAR6)
            return VAR6;
    }
    return 0;
}