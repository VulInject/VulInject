static void FUN1(const char *VAR1)
{
    int VAR2;
    if (VAR1 == NULL)
    {
        return;
    }
    if (VAR3 == FUN2(VAR4))
    {
        return;
    }
    for (VAR2 = 0; VAR2 < VAR3; VAR2++)
    {
        if (strcmp(VAR4[VAR2], VAR1) == 0)
        {
            return;
        }
    }
    VAR4[VAR3++] = VAR1;
}