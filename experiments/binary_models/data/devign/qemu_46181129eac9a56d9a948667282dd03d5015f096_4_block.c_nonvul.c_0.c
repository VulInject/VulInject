int FUN1(VAR1 *VAR2, uint64_t VAR3, uint64_t VAR4, VAR5 **VAR6)
{
    int VAR7;
    VAR7 = FUN2(VAR2, VAR3, VAR4, NULL, VAR6);
    if (VAR7 < 0)
    {
        FUN3(VAR2);
        return VAR7;
    }
    FUN4(VAR2, VAR3, VAR4);
    return 0;
}