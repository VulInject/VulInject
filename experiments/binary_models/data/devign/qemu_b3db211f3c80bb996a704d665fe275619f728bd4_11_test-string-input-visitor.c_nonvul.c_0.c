static void FUN1(VAR1 *VAR2, const void *VAR3)
{
    if (VAR2->VAR4)
    {
        FUN2(VAR2->VAR4);
        VAR2->VAR4 = NULL;
    }
}