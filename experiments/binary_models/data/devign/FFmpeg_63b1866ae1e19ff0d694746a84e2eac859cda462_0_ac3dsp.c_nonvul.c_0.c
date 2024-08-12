static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    int VAR6;
    for (VAR6 = 0; VAR6 < VAR5; VAR6++)
    {
        int VAR7;
        int VAR8 = FUN2(VAR4[VAR6]);
        if (VAR8 == 0)
            VAR7 = 24;
        else
        {
            VAR7 = 23 - FUN3(VAR8);
            if (VAR7 >= 24)
            {
                VAR7 = 24;
                VAR4[VAR6] = 0;
            }
            else if (VAR7 < 0)
            {
                VAR7 = 0;
                VAR4[VAR6] = FUN4(VAR4[VAR6], -16777215, 16777215);
            }
        }
        VAR2[VAR6] = VAR7;
    }
}