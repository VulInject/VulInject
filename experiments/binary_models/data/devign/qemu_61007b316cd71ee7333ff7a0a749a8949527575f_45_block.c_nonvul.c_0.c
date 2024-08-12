int FUN1(VAR1 *VAR2, const char *VAR3)
{
    int VAR4;
    if (VAR2->VAR5 && VAR2->VAR5->VAR6)
    {
        VAR4 = FUN1(VAR2->VAR5, VAR3);
        if (VAR4 < 0)
            return VAR4;
        if (!VAR2->VAR6)
            return 0;
    }
    if (!VAR2->VAR6)
    {
        return -VAR7;
    }
    else if (!VAR2->VAR8 || !VAR2->VAR8->VAR9)
    {
        return -VAR10;
    }
    VAR4 = VAR2->VAR8->FUN1(VAR2, VAR3);
    if (VAR4 < 0)
    {
        VAR2->VAR11 = 0;
    }
    else if (!VAR2->VAR11)
    {
        VAR2->VAR11 = 1;
        if (VAR2->VAR12)
        {
            FUN2(VAR2->VAR12, true);
        }
    }
    return VAR4;
}