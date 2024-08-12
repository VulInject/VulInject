static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    if (VAR3->VAR4)
    {
        FUN2(VAR3->VAR4, NULL);
    }
    else
    {
        FUN2(FUN3(VAR5), VAR3);
    }
}