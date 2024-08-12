void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    const char *VAR5 = FUN2(VAR4, "");
    VAR6 *VAR7;
    if (!strcmp(VAR5, ""))
    {
        FUN3();
    }
    else
    {
        int VAR8;
        VAR7 = FUN4(VAR5);
        if (!VAR7)
        {
            FUN5(VAR9, VAR5);
            return;
        }
        VAR8 = FUN6(VAR7);
        if (VAR8 == -VAR10)
        {
            FUN5(VAR11, VAR5);
            return;
        }
    }
}