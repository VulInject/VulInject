static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6 = VAR7 - 1;
    float VAR8, VAR9 = VAR10;
    float VAR11 = 0;
    for (VAR5 = VAR4->VAR11; VAR5 >= VAR11; VAR5--)
    {
        VAR4->VAR12 = VAR5;
        FUN2(VAR2, VAR4, &VAR8);
        if (VAR9 > VAR8)
        {
            VAR9 = VAR8;
            VAR6 = VAR5;
        }
    }
    VAR4->VAR12 = VAR6;
    VAR2->VAR13 = (VAR2->VAR13 + VAR4->VAR12) / 2.0f;