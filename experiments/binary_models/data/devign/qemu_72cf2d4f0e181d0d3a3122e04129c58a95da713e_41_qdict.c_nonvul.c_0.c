static VAR1 *FUN1(const VAR2 *VAR3, const char *VAR4, unsigned int VAR5)
{
    VAR1 *VAR6;
    FUN2(VAR6, &VAR3->VAR7[VAR5], VAR8)
    if (!strcmp(VAR6->VAR4, VAR4)) return VAR6;
    return NULL;
}