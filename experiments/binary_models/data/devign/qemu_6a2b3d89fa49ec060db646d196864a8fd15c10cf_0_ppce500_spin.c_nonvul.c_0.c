static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    int VAR4;
    for (VAR4 = 0; VAR4 < VAR5; VAR4++)
    {
        VAR6 *VAR7 = &VAR3->VAR8[VAR4];
        FUN2(&VAR7->VAR9, VAR4);
        FUN3(&VAR7->VAR10, VAR4);
        FUN3(&VAR7->VAR11, 1);
    }
}