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
        strcpy(VAR5, VAR4[VAR2]);
        FUN2("");
        FUN3(VAR5);
        VAR6 = VAR7 = strlen(VAR5);
    }
}