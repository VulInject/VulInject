VAR1 *FUN1(const char *typename, const char *VAR2)
{
    const char *VAR3 = FUN2(typename, VAR2);
    if (VAR3)
    {
        return FUN3(VAR3);
    }
    return NULL;
}