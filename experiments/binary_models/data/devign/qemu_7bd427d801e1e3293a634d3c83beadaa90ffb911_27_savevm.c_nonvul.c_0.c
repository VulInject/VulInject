static void FUN1(void *VAR1)
{
    static int VAR2 = VAR3;
    VAR4 *VAR5 = *(VAR4 **)VAR1;
    FUN2(VAR6, NULL);
    if (--VAR2)
    {
        FUN3(VAR5, FUN4(VAR7) + 50 + (VAR3 - VAR2 - 1) * 100);
    }
    else
    {
        FUN5(VAR5);
        FUN6(VAR5);
    }
}