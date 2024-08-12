static int FUN1(void)
{
    const struct VAR1 **VAR2;
    int VAR3, VAR4;
    if (VAR5)
    {
        return 0;
    }
    VAR4 = FUN2(&VAR5);
    if (VAR4 != 0)
    {
        return -1;
    }
    FUN3(VAR5, VAR6);
    FUN4(VAR5, VAR7, VAR8, VAR5);
    VAR2 = FUN5(VAR5);
    if (VAR2)
    {
        for (VAR3 = 0; VAR2[VAR3] != NULL; VAR3++)
        {
            FUN6(VAR2[VAR3]->VAR9, VAR2[VAR3]->VAR10, VAR5);
        }
    }
    free(VAR2);
    return 0;
}