int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    if (!VAR5)
    {
        return -VAR6;
    }
    if (!VAR2->VAR7)
    {
        return -VAR8;
    }
    if (VAR5->VAR9)
    {
        return VAR5->FUN1(VAR2, VAR3);
    }
    return -VAR10;
}