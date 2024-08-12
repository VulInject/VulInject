static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (!VAR2->VAR4)
        return;
    for (VAR3 = 0; VAR3 < VAR2->VAR5; VAR3++)
    {
        FUN2(FUN3(VAR2), VAR2->VAR6[VAR3].VAR7, &VAR2->VAR6[VAR3].VAR8, sizeof(VAR2->VAR6[VAR3].VAR8));
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR9; VAR3++)
    {
        FUN2(FUN3(VAR2), VAR2->VAR10[VAR3].VAR11, &VAR2->VAR10[VAR3].VAR12, sizeof(VAR2->VAR10[VAR3].VAR12));
    }
}