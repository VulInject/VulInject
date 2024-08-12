VAR1 *FUN1(const VAR2 *VAR3)
{
    VAR1 *VAR4 = FUN2(sizeof(VAR1));
    if (!VAR4)
        return NULL;
    if (FUN3(VAR4, VAR3) < 0)
    {
        FUN4(VAR4);
        return NULL;
    }
    return VAR4;
}