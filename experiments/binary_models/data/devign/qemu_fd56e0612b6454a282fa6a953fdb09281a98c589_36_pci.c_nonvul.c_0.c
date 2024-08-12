VAR1 *FUN1(const VAR2 *VAR3)
{
    VAR1 *VAR4 = FUN2(VAR3);
    while (!FUN3(VAR4))
    {
        VAR3 = VAR4->VAR5;
        assert(VAR3 != NULL);
        VAR4 = FUN2(VAR3);
    }
    return VAR4;
}