VAR1 *FUN1(VAR2 *VAR3, int VAR4, int VAR5, uint64_t VAR6)
{
    struct VAR7 *VAR8 = FUN2(VAR3, VAR4, VAR5);
    VAR1 *VAR9;
    while ((VAR9 = FUN3(&VAR8->VAR10)) != NULL)
    {
        if (VAR9->VAR6 == VAR6)
        {
            return VAR9;
        }
    }
    return NULL;
}