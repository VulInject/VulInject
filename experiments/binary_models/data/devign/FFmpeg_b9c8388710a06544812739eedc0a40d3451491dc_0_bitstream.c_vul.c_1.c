static void *FUN1(void *VAR1, unsigned int VAR2)
{
    int VAR3;
    if (!VAR1)
        return FUN2(VAR2);
    for (VAR3 = 0; VAR3 < VAR4; VAR3++)
    {
        if (VAR5[VAR3] == VAR1)
        {
            VAR5[VAR3] = FUN3(VAR5[VAR3], VAR2);
            return VAR5[VAR3];
        }
    }
    return NULL;
}