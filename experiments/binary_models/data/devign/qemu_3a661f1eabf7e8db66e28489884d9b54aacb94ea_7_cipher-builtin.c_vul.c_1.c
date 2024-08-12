int FUN1(VAR1 *VAR2, const VAR3 *VAR4, size_t VAR5, VAR6 **VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    if (VAR5 != VAR9->VAR5)
    {
        FUN2(VAR7, "", VAR9->VAR5, VAR5);
        return -1;
    }
    memcpy(VAR9->VAR4, VAR4, VAR5);
    return 0;
}