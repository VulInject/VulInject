void FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
    if (VAR2->VAR5 != VAR3 || VAR2->VAR6 != VAR4 || !VAR2->VAR7->VAR8)
    {
        VAR2->VAR5 = VAR3;
        VAR2->VAR6 = VAR4;
        if (VAR9 == VAR2)
        {
            FUN2(VAR2->VAR7, VAR3, VAR4);
        }
    }
}