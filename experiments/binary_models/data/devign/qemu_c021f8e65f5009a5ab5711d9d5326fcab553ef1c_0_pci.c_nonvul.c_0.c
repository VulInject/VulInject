VAR1 *FUN1(VAR1 *VAR2, int VAR3)
{
    VAR1 *VAR4, *VAR5;
    if (!VAR2)
        return NULL;
    if (FUN2(VAR2) == VAR3)
    {
        return VAR2;
    }
    FUN3(VAR4, &VAR2->VAR6, VAR7)
    {
        if (!VAR2->VAR8 || (FUN2(VAR4) >= VAR3 && VAR3 <= VAR2->VAR8->VAR9[VAR10]))
        {
            VAR5 = FUN1(VAR4, VAR3);
            if (VAR5)
            {
                return VAR5;
            }
        }
    }
    return NULL;
}