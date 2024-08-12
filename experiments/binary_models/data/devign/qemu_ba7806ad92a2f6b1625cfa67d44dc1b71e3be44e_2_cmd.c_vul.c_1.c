void FUN1(char *VAR1)
{
    VAR2++;
    VAR3 = realloc(VAR3, VAR2 * sizeof(char *));
    if (!VAR3)
    {
        FUN2("");
        FUN3(1);
    }
    VAR3[VAR2 - 1] = VAR1;
}