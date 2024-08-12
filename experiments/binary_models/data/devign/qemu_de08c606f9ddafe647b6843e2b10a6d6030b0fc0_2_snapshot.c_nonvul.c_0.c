int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    if (!VAR5)
    {
        return -VAR6;
    }
    if (VAR5->VAR7)
    {
        return VAR5->FUN1(VAR2, VAR3);
    }
    if (VAR2->VAR8)
    {
        return FUN1(VAR2->VAR8, VAR3);
    }
    return -VAR9;
}