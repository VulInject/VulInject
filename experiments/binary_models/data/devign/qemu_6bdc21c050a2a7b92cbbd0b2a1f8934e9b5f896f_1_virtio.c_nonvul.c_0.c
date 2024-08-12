static void FUN1(VAR1 *VAR2, struct VAR3 *VAR4, VAR5 *VAR6, unsigned int *VAR7, int VAR8)
{
    unsigned int VAR9;
    hwaddr VAR10;
    for (VAR9 = 0; VAR9 < *VAR7; VAR9++)
    {
        VAR10 = VAR4[VAR9].VAR11;
        VAR4[VAR9].VAR12 = FUN2(VAR2->VAR13, VAR6[VAR9], &VAR10, VAR8 ? VAR14 : VAR15);
        if (!VAR4[VAR9].VAR12)
        {
            FUN3("");
            FUN4(1);
        }
        if (VAR10 != VAR4[VAR9].VAR11)
        {
            FUN3("");
            FUN4(1);
        }
    }
}