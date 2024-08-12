int FUN1(VAR1 *VAR2, const char *VAR3)
{
    VAR4 *VAR5 = VAR2->VAR5;
    int VAR6, VAR7;
    if (!VAR5)
    {
        return -VAR8;
    }
    if (VAR5->VAR9)
    {
        return VAR5->FUN1(VAR2, VAR3);
    }
    if (VAR2->VAR10)
    {
        VAR5->FUN2(VAR2);
        VAR6 = FUN1(VAR2->VAR10, VAR3);
        VAR7 = VAR5->FUN3(VAR2, NULL, VAR2->VAR11);
        if (VAR7 < 0)
        {
            FUN4(VAR2->VAR10);
            VAR2->VAR5 = NULL;
            return VAR7;
        }
        return VAR6;
    }
    return -VAR12;
}