void FUN1(VAR1 *VAR2)
{
    int VAR3;
    if (VAR2->VAR4)
        free(VAR2->VAR4);
    if (VAR2->VAR5)
    {
        free(VAR2->VAR6[0]);
        free(VAR2->VAR7[0]);
        free(VAR2->VAR8);
        free(VAR2->VAR9);
    }
    if (VAR2->VAR10)
        free(VAR2->VAR10);
    for (VAR3 = 0; VAR3 < 3; VAR3++)
    {
        free(VAR2->VAR11[VAR3]);
        free(VAR2->VAR12[VAR3]);
        if (VAR2->VAR13)
            free(VAR2->VAR14[VAR3]);
    }
    VAR2->VAR15 = 0;
}