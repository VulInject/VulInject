static int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5;
    VAR5 = (VAR4 *)FUN2(VAR2, VAR6);
    if (!VAR5 || !VAR5->VAR7)
    {
        return 0;
    }
    VAR5->VAR8 = true;
    FUN3(VAR5->VAR7);
    if (FUN4(&VAR5->VAR9))
    {
        FUN5(VAR5->VAR9);
    }
    FUN6(&VAR5->VAR10);
    return 0;
}