static int FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    int VAR5;
    VAR4->VAR6 = 0;
    for (VAR5 = 0; VAR5 < VAR7; VAR5++)
    {
        FUN2(VAR4, VAR5, FUN3(FUN4(&VAR4->VAR8), VAR5));
    }
    return 0;
}