VAR1 *FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    size_t VAR4, VAR5;
    VAR4 = FUN2(VAR2);
    VAR5 = VAR4;
    VAR4 += FUN2(VAR3);
    VAR2 = FUN3(VAR2, (VAR4 + 1) * sizeof(VAR1));
    while (VAR3 && VAR3->VAR6)
    {
        if (FUN4(VAR2, VAR3->VAR6) == NULL)
        {
            VAR2[VAR5++] = *VAR3;
        }
        VAR3++;
    }
    return VAR2;