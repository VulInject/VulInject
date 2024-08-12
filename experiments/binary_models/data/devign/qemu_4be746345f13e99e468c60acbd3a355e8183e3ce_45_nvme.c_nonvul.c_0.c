static void FUN1(VAR1 *VAR2)
{
    int VAR3;
    for (VAR3 = 0; VAR3 < VAR2->VAR4; VAR3++)
    {
        if (VAR2->VAR5[VAR3] != NULL)
        {
            FUN2(VAR2->VAR5[VAR3], VAR2);
        }
    }
    for (VAR3 = 0; VAR3 < VAR2->VAR4; VAR3++)
    {
        if (VAR2->VAR6[VAR3] != NULL)
        {
            FUN3(VAR2->VAR6[VAR3], VAR2);
        }
    }
    FUN4(VAR2->VAR7.VAR8);
    VAR2->VAR9.VAR10 = 0;
}