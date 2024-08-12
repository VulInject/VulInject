static void FUN1(void)
{
    int VAR1;
    if (VAR2 == 0)
        return;
    if (VAR2 == -1)
    {
        for (VAR1 = 0; VAR1 < VAR3; VAR1++)
        {
            if (VAR4[VAR1] == NULL)
                break;
        }
        VAR2 = VAR1;
    }
    VAR2--;
    if (VAR2 >= 0)
    {
        FUN2(VAR5, sizeof(VAR5), VAR4[VAR2]);
        VAR6 = VAR7 = strlen(VAR5);
    }
}