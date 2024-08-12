static void FUN1(int VAR1, void **VAR2)
{
    int VAR3;
    if (*VAR2 == NULL)
    {
        return;
    }
    if (VAR1 == 0)
    {
        VAR4 *VAR5 = *VAR2;
        for (VAR3 = 0; VAR3 < VAR6; ++VAR3)
        {
            VAR5[VAR3].VAR7 = NULL;
            FUN2(VAR5 + VAR3);
        }
    }
    else
    {
        void **VAR8 = *VAR2;
        for (VAR3 = 0; VAR3 < VAR6; ++VAR3)
        {
            FUN1(VAR1 - 1, VAR8 + VAR3);
        }
    }
}