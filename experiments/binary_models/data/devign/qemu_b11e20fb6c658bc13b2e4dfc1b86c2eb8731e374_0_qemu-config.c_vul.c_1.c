static void FUN1(VAR1 *VAR2)
{
    VAR1 *VAR3, *VAR4, *VAR5;
    VAR4 = VAR2;
    while (VAR4->VAR6)
    {
        VAR3 = VAR2;
        while (VAR3 != VAR4->VAR6)
        {
            if (!strcmp(VAR3->VAR7->VAR8, VAR4->VAR6->VAR7->VAR8))
            {
                VAR5 = VAR4->VAR6;
                VAR4->VAR6 = VAR4->VAR6->VAR6;
                FUN2(VAR5);
                break;
            }
            VAR3 = VAR3->VAR6;
        }
        VAR4 = VAR4->VAR6;
    }
}