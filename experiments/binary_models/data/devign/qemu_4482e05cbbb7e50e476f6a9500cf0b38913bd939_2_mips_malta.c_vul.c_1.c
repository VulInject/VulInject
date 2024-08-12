static void FUN1(const char *VAR1, VAR2 *VAR3, VAR2 *VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    int VAR9;
    for (VAR9 = 0; VAR9 < VAR10; VAR9++)
    {
        VAR8 = FUN2(VAR1);
        if (VAR8 == NULL)
        {
            fprintf(VAR11, "");
            FUN3(1);
        }
        FUN4(VAR8);
        FUN5(VAR8);
        FUN6(VAR12, VAR8);
    }
    VAR8 = FUN7(VAR13);
    VAR6 = &VAR8->VAR6;
    *VAR4 = VAR6->VAR14[2];
    *VAR3 = VAR6->VAR14[4];
}