static VAR1 *FUN1(VAR1 *VAR2, int VAR3)
{
    while (VAR2 && VAR2->VAR4)
    {
        if (VAR2->VAR4->VAR3 == VAR3)
            return VAR2;
        VAR2 = VAR2->VAR5;
    }
    return NULL;
}