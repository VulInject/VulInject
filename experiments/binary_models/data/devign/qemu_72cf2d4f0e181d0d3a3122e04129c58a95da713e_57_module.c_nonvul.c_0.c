static void FUN1(void)
{
    static int VAR1;
    int VAR2;
    if (VAR1)
    {
        return;
    }
    for (VAR2 = 0; VAR2 < VAR3; VAR2++)
    {
        FUN2(&VAR4[VAR2]);
    }
    VAR1 = 1;
}