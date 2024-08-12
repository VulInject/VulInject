VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    assert(VAR2);
    FUN2(VAR3, &VAR4, VAR5)
    {
        if (!strcmp(VAR2, VAR3->VAR2))
        {
            return VAR3;
        }
    }
    return NULL;
}