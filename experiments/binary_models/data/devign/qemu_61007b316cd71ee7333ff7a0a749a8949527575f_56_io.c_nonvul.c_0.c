void *FUN1(VAR1 *VAR2, size_t VAR3)
{
    void *VAR4 = FUN2(VAR2, VAR3);
    if (VAR4)
    {
        memset(VAR4, 0, VAR3);
    }
    return VAR4;
}