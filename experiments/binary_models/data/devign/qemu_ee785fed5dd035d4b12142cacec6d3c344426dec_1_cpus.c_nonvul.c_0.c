void FUN1(void)
{
    VAR1 *VAR2;
    int VAR3;
    for (VAR2 = VAR4; VAR2 != NULL; VAR2 = VAR2->VAR5)
    {
        for (VAR3 = 0; VAR3 < VAR6; VAR3++)
        {
            if (FUN2(VAR2->VAR7, VAR8[VAR3]))
            {
                VAR2->VAR9 = VAR3;
            }
        }
    }
}