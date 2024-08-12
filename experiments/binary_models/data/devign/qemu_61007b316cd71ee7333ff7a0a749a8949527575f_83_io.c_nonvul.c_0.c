static bool FUN1(VAR1 *VAR2)
{
    bool VAR3 = false;
    bool VAR4 = VAR2->VAR5;
    int VAR6;
    VAR2->VAR5 = false;
    for (VAR6 = 0; VAR6 < 2; VAR6++)
    {
        while (FUN2(&VAR2->VAR7[VAR6]))
        {
            VAR3 = true;
        }
    }
    VAR2->VAR5 = VAR4;
    return VAR3;
}