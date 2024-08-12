static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    if (VAR2 < 0)
    {
        VAR4->VAR5 = VAR2;
        FUN2(VAR4);
    }
    VAR4->VAR6--;
    if (VAR4->VAR6 == 0)
    {
        if (VAR4->VAR5 == 0)
        {
            FUN2(VAR4);
        }
        FUN3(VAR4);
    }
}