static void FUN1(void)
{
    if (VAR1 == VAR2 - 1 || VAR1 == -1)
        return;
    if (VAR3[++VAR1] != NULL)
    {
        FUN2(VAR4, sizeof(VAR4), VAR3[VAR1]);
    }
    else
    {
        VAR1 = -1;
    }
    VAR5 = VAR6 = strlen(VAR4);
}