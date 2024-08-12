static void FUN1(VAR1 *VAR2, VAR1 *VAR3, const char *VAR4)
{
    VAR1 *VAR5;
    VAR5 = VAR2->VAR6;
    VAR2->VAR6 = VAR3;
    while (VAR5)
    {
        VAR1 *VAR7;
        if (VAR5 == VAR3)
        {
            break;
        }
        VAR7 = VAR5;
        VAR5 = VAR5->VAR6;
        VAR7->VAR6 = NULL;
        FUN2(VAR7);
    }
}