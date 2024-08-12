int FUN1(VAR1 *VAR2, const char *VAR3, const char *VAR4)
{
    while (VAR2 && VAR2->VAR5 && !VAR2->VAR5->VAR6)
    {
        VAR2 = VAR2->VAR7;
    }
    if (VAR2 && VAR2->VAR5 && VAR2->VAR5->VAR6)
    {
        return VAR2->VAR5->FUN1(VAR2, VAR3, VAR4);
    }
    return -VAR8;
}