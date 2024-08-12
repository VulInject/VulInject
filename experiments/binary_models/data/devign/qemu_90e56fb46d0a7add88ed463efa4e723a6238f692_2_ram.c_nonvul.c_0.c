void FUN1(void)
{
    int VAR1, VAR2;
    VAR2 = FUN2();
    for (VAR1 = 0; VAR1 < VAR2; VAR1++)
    {
        FUN3(&VAR3[VAR1].mutex);
        VAR3[VAR1].VAR4 = true;
        FUN4(&VAR3[VAR1].VAR5);
        FUN5(&VAR3[VAR1].mutex);
    }
    for (VAR1 = 0; VAR1 < VAR2; VAR1++)
    {
        FUN6(VAR6 + VAR1);
        FUN7(&VAR3[VAR1].mutex);
        FUN8(&VAR3[VAR1].VAR5);
        FUN9(VAR3[VAR1].VAR7);
    }
    FUN9(VAR6);
    FUN9(VAR3);
    VAR6 = NULL;
    VAR3 = NULL;
}