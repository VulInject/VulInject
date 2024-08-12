static void FUN1(VAR1 *VAR2, void *VAR3, int VAR4)
{
    int VAR5, VAR6;
    VAR6 = FUN2();
    while (true)
    {
        for (VAR5 = 0; VAR5 < VAR6; VAR5++)
        {
            if (!VAR7[VAR5].VAR8)
            {
                FUN3(VAR2, VAR7[VAR5].VAR9, VAR4);
                VAR7[VAR5].VAR10 = VAR3;
                VAR7[VAR5].VAR4 = VAR4;
                FUN4(&VAR7[VAR5]);
                break;
            }
        }
        if (VAR5 < VAR6)
        {
            break;
        }
    }
}