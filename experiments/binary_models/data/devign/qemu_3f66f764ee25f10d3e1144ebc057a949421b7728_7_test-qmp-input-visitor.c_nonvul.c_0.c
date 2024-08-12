static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    VAR4 *VAR5;
    EnumOne VAR6;
    for (VAR6 = 0; VAR7[VAR6]; VAR6++)
    {
        EnumOne VAR8 = -1;
        VAR5 = FUN2(VAR2, "", VAR7[VAR6]);
        FUN3(VAR5, &VAR8, NULL, &VAR9);
        FUN4(VAR6, ==, VAR8);
    }
}