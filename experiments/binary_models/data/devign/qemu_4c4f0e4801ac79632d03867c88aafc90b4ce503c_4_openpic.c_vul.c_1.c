static void FUN1(void *VAR1, int VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR1;
    VAR6 *VAR7;
    VAR7 = &VAR5->VAR7[VAR2];
    FUN2("", VAR2, VAR3, VAR7->VAR8);
    if (VAR7->VAR8 & VAR9)
    {
        VAR7->VAR10 = VAR3;
        if (!VAR3)
        {
            VAR7->VAR8 &= ~VAR11;
        }
    }
    else
    {
        if (VAR3)
        {
            VAR7->VAR10 = 1;
        }
    }
    FUN3(VAR5, VAR2);
}