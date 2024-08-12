void *FUN1(size_t VAR1)
{
    if (!VAR1 && !FUN2())
    {
        FUN3();
    }
    return FUN4(malloc(VAR1 ? VAR1 : 1));
}