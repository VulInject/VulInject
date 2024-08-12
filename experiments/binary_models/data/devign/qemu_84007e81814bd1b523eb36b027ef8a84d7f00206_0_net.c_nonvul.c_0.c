static int FUN1(const char *VAR1)
{
    int VAR2;
    for (VAR2 = 0; VAR3[VAR2]; VAR2++)
    {
        if (!FUN2(VAR3[VAR2], VAR1, strlen(VAR3[VAR2])))
        {
            return 1;
        }
    }
    return 0;
}