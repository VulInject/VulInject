void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    while (VAR4)
    {
        VAR3 *VAR6 = VAR4->VAR6;
        free(VAR4);
        VAR2->VAR5 = VAR4 = VAR6;
        if (VAR4 == NULL)
            VAR2->VAR7 = &(VAR2->VAR5);
    }
}