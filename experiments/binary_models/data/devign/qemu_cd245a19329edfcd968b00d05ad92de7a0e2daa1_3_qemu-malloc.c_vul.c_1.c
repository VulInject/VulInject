void *FUN1(void *VAR1, size_t VAR2)
{
    if (!VAR2 && !FUN2())
    {
        FUN3();
    }
    return FUN4(realloc(VAR1, VAR2 ? VAR2 : 1));
}