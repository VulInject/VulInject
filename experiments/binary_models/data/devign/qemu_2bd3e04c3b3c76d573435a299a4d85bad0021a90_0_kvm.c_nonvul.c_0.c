static void FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3;
    if (FUN2(VAR2))
    {
        for (VAR3 = VAR4; VAR3 != NULL; VAR3 = VAR3->VAR5)
        {
            if (VAR3 == VAR2)
            {
                continue;
            }
            FUN3(VAR3, 1, VAR6 | VAR7, VAR8 | VAR9, 0, 0, VAR10);
        }
    }
}