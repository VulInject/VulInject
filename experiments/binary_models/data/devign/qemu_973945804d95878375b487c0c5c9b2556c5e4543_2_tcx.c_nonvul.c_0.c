static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
    VAR3 = VAR2->VAR7;
    if (VAR3 >= VAR2->VAR8)
    {
        return;
    }
    VAR4 = FUN2(VAR2->VAR8, VAR3 + 32);
    VAR5 = VAR3 * 1024;
    VAR6 = VAR4 * 1024;
    FUN3(VAR2, VAR5, VAR6 - VAR5);
}