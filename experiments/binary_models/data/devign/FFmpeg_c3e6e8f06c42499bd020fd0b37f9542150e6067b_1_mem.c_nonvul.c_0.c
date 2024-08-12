void *FUN1(void *VAR1, size_t VAR2, size_t VAR3)
{
    if (!VAR3 || VAR2 >= VAR4 / VAR3)
        return NULL;
    return FUN2(VAR1, VAR2 * VAR3);
}