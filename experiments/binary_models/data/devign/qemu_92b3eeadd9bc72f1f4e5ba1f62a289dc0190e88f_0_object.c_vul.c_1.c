VAR1 *FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR4, NULL);
    if (VAR6 == NULL)
    {
        return NULL;
    }
    if (FUN3(VAR6))
    {
        return *(VAR1 **)VAR6->VAR7;
    }
    else if (FUN4(VAR6))
    {
        return VAR6->VAR7;
    }
    else
    {
        return NULL;
    }
}