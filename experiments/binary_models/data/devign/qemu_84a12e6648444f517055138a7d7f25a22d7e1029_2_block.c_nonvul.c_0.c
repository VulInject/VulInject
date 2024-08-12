static VAR1 *FUN1(const char *VAR2)
{
    int VAR3 = 0, VAR4;
    VAR1 *VAR5 = NULL, *VAR6;
    FUN2(VAR6, &VAR7, VAR8)
    {
        if (VAR6->VAR9)
        {
            VAR4 = VAR6->FUN3(VAR2);
            if (VAR4 > VAR3)
            {
                VAR3 = VAR4;
                VAR5 = VAR6;
            }
        }
    }
    return VAR5;
}