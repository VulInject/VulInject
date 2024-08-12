static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    int VAR6;
    memset(VAR4->VAR7, 0, sizeof(VAR4->VAR7));
    FUN2(VAR4);
    for (VAR6 = 0; VAR6 < VAR8; VAR6++)
        FUN3(VAR4, &VAR4->VAR9[VAR6]);
    VAR4->VAR10 = NULL;
    FUN3(VAR4, &VAR4->VAR11);
    VAR4->VAR12 = 0;
    FUN4(VAR4);
    VAR4->VAR13 = 0;
}