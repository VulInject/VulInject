static int FUN1(VAR1 *VAR2)
{
    unsigned int VAR3 = FUN2(&VAR2->VAR4, 16);
    if (VAR3 >= 2 && VAR3 < 32768)
    {
        VAR5 *VAR6 = FUN3(VAR3 - 1);
        if (VAR6)
        {
            int VAR7;
            for (VAR7 = 0; VAR7 < VAR3 - 2; VAR7++)
                VAR6[VAR7] = FUN2(&VAR2->VAR4, 8);
            if (VAR7 > 0 && VAR6[VAR7 - 1] == '')
                VAR6[VAR7 - 1] = 0;
            else
                VAR6[VAR7] = 0;
            FUN4("", VAR6);
            if (!strcmp(VAR6, ""))
            {
                VAR2->VAR8 = 1;
            }
            FUN5(VAR6);
        }
    }
    return 0;
}