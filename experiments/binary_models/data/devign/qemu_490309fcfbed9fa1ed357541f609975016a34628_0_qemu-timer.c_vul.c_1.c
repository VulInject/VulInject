int FUN1(VAR1 *VAR2, guint VAR3, int64_t VAR4)
{
    if (VAR4 < 0)
    {
        return FUN2((struct VAR5 *)VAR2, VAR3, NULL, NULL);
    }
    else
    {
        struct timespec VAR6;
        VAR6.VAR7 = VAR4 / 1000000000LL;
        VAR6.VAR8 = VAR4 % 1000000000LL;
        return FUN2((struct VAR5 *)VAR2, VAR3, &VAR6, NULL);
    }
    return FUN3(VAR2, VAR3, FUN4(VAR4));
}