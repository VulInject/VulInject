static int FUN1(VAR1 *VAR2, void *VAR3, size_t VAR4)
{
    VAR5 *VAR6 = VAR3;
    int32_t VAR7;
    FUN2(VAR2, &VAR7);
    if (VAR7 <= *VAR6)
    {
        *VAR6 = VAR7;
        return 0;
    }
    return -VAR8;
}