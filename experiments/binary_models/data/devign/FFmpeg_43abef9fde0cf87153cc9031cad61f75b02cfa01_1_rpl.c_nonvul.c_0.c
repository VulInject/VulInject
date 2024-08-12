static int FUN1(VAR1 *VAR2, char *VAR3, int VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR4 - 1; VAR5++)
    {
        int VAR6 = FUN2(VAR2);
        if (VAR6 == 0)
            break;
        if (VAR6 == '')
        {
            VAR3[VAR5] = '';
            return FUN3(VAR2) ? -1 : 0;
        }
        VAR3[VAR5] = VAR6;
    }
    VAR3[VAR5] = '';
    return -1;
}