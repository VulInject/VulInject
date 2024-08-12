static VAR1 FUN1(VAR2 *VAR3, const VAR4 *VAR5, size_t VAR6)
{
    VAR7 *VAR8 = FUN2(VAR3);
    if (!VAR8->VAR9)
    {
        return VAR6;
    }
    return FUN3(VAR8->VAR9, VAR5, VAR6);