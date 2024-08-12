VAR1 *FUN1(const char *VAR2)
{
    VAR3 *VAR4 = NULL;
    VAR1 *VAR5;
    static int64_t VAR6;
    VAR5 = FUN2(VAR2, VAR6++, &VAR4);
    if (VAR4)
    {
        FUN3(VAR4);
    }
    return VAR5;
}