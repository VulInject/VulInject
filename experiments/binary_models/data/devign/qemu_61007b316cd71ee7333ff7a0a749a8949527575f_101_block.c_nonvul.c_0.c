int FUN1(VAR1 *VAR2, const char *VAR3)
{
    while (VAR2 && (!VAR2->VAR4 || !VAR2->VAR4->VAR5))
    {
        VAR2 = VAR2->VAR6;
    }
    if (VAR2 && VAR2->VAR4 && VAR2->VAR4->VAR5)
    {
        return VAR2->VAR4->FUN1(VAR2, VAR3);
    }
    return -VAR7;
}