static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6, int VAR7)
{
    int VAR8, VAR9;
    VAR8 = VAR4[VAR5 - VAR6 - 1];
    if (!VAR7)
    {
        VAR8 = VAR2->VAR10.FUN2(VAR4 + 1, VAR4 + 1, VAR5 - 1, VAR4[0]);
        return;
    }
    else if (VAR7 == 1)
    {
        VAR9 = VAR2->VAR11->VAR12 == VAR13 ? VAR4[-VAR6] : VAR8;
    }
    else
    {
        VAR9 = VAR4[VAR5 - (2 * VAR6) - 1];
    }
    FUN3(VAR4, VAR4 - VAR6, VAR4, VAR5, &VAR8, &VAR9);
}