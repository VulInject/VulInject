static void FUN1(void)
{
    if (VAR1 == VAR2 - 1 || VAR1 == -1)
        return;
    if (VAR3[++VAR1] != NULL)
    {
        strcpy(VAR4, VAR3[VAR1]);
    }
    else
    {
        VAR1 = -1;
    }
    FUN2("");
    FUN3(VAR4);
    VAR5 = VAR6 = strlen(VAR4);
}