int FUN1(VAR1 *VAR2, VAR3 *VAR4, int64_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    if (!VAR7)
    {
        return -VAR8;
    }
    else if (VAR7->VAR9)
    {
        return VAR7->FUN2(VAR2, VAR4, VAR5);
    }
    else if (VAR2->VAR10)
    {
        return FUN1(VAR2->VAR10, VAR4, VAR5);
    }
    return -VAR11;
}