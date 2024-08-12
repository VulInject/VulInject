static void FUN1(VAR1 *VAR2, hwaddr VAR3, hwaddr VAR4, const char *VAR5)
{
    target_long VAR6;
    const char *VAR7;
    if (FUN2())
    {
        return;
    }
    if (VAR8)
    {
        VAR7 = VAR8;
    }
    else
    {
        VAR7 = VAR5;
    }
    if (VAR7)
    {
        char *VAR9 = FUN3(VAR10, VAR7);
        if (!VAR9)
        {
            FUN4("", VAR7);
            FUN5(1);
        }
        VAR6 = FUN6(VAR9, VAR3, VAR4);
        if (VAR6 < 0 || VAR6 > VAR4)
        {
            FUN4("", VAR7);
            FUN5(1);
        }
    }