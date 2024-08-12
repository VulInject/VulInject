VAR1 *FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    size_t VAR4, VAR5;
    VAR6 *VAR7;
    bool VAR8 = false;
    if (!VAR3)
    {
        return VAR2;
    }
    if (!VAR2)
    {
        VAR8 = true;
    }
    VAR4 = FUN2(VAR2);
    VAR5 = VAR4;
    VAR4 += FUN2(VAR3);
    VAR2 = FUN3(VAR2, sizeof(VAR1) + (VAR4 + 1) * sizeof(VAR6));
    if (VAR8)
    {
        VAR2->VAR9 = NULL;
        VAR2->VAR10 = NULL;
        FUN4(&VAR2->VAR11);
        VAR2->VAR12 = false;
    }
    VAR2->VAR7[VAR5].VAR9 = NULL;
    if (VAR3)
    {
        VAR7 = VAR3->VAR7;
        while (VAR7 && VAR7->VAR9)
        {
            if (FUN5(VAR2->VAR7, VAR7->VAR9) == NULL)
            {
                VAR2->VAR7[VAR5++] = *VAR7;
                VAR2->VAR7[VAR5].VAR9 = NULL;
            }
            VAR7++;
        }
    }
    return VAR2;
}