static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (!VAR2->VAR4)
    {
        return;
    }
    for (VAR3 = 0; VAR3 < VAR5; VAR3++)
    {
        VAR6 *VAR7;
        if (VAR2->VAR4[VAR3].VAR8.VAR9 == 0)
        {
            break;
        }
        VAR7 = FUN2(&VAR2->VAR4[VAR3].VAR8.VAR7);
        FUN3(&VAR2->VAR4[VAR3].VAR8.VAR7, NULL);
        FUN4(VAR7);
    }
    FUN5(VAR2->VAR4);
}