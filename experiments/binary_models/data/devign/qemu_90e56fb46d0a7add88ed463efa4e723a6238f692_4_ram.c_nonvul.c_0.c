static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    if (!FUN2())
    {
        return;
    }
    VAR5 = FUN3();
    for (VAR3 = 0; VAR3 < VAR5; VAR3++)
    {
        if (!VAR6[VAR3].VAR7)
        {
            FUN4(VAR8);
            while (!VAR6[VAR3].VAR7 && !VAR6[VAR3].VAR9)
            {
                FUN5(VAR10, VAR8);
            }
            FUN6(VAR8);
        }
        if (!VAR6[VAR3].VAR9)
        {
            VAR4 = FUN7(VAR2, VAR6[VAR3].VAR11);
            VAR12 += VAR4;
        }
    }
}