static int FUN1(VAR1 *VAR2, VAR1 *VAR3, int VAR4)
{
    int VAR5;
    for (VAR5 = 0; VAR5 < VAR4; VAR5++)
    {
        if (VAR2[VAR5].VAR6 != VAR3[VAR5].VAR6)
        {
            FUN2(NULL, VAR7, "", VAR2[VAR5].VAR6, VAR3[VAR5].VAR6, VAR5);
            return -1;
        }
    }
    return 0;
}