static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    while (!VAR3->VAR4 || VAR3->VAR5 > 0)
    {
        FUN2(VAR3->VAR6, true);
    }
    return NULL;
}