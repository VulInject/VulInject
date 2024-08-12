static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    FUN2(VAR4, VAR2);
    if (VAR2 < 0 && !VAR4->VAR5)
    {
        VAR4->VAR5 = VAR2;
    }
    VAR4->VAR6--;
    if (VAR4->VAR6 == 0)
    {
        FUN3(VAR4);
        FUN4(VAR4);
    }
}