static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    int VAR5;
    if (VAR2->VAR6)
    {
        FUN3(VAR2->VAR7, &VAR2->VAR6->VAR8, true, NULL);
    }
    if (VAR2->VAR9)
    {
        FUN3(VAR2->VAR7, &VAR2->VAR9->VAR8, true, NULL);
    }
    if (VAR2->VAR10)
    {
        for (VAR5 = 0; VAR5 < VAR4->VAR11.VAR12 && VAR2->VAR10[VAR5]; VAR5++)
        {
            FUN3(VAR2->VAR7, &VAR2->VAR10[VAR5]->VAR8, true, NULL);
        }
    }
}