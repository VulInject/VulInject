VAR1 *FUN1(int VAR2)
{
    VAR1 *VAR3;
    if (-1 == VAR2)
        return FUN2(&VAR4);
    FUN3(VAR3, &VAR4, VAR5)
    {
        if (VAR3->VAR2 == VAR2)
            return VAR3;
    }
    return NULL;
}