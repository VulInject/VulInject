VAR1 *FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, VAR4, NULL);
    if (VAR6 == NULL)
    {
        return NULL;
    }
    if (VAR6->VAR7)
    {
        return VAR6->FUN3(VAR2, VAR6->VAR8, VAR4);
    }
    else
    {
        return NULL;
    }
}