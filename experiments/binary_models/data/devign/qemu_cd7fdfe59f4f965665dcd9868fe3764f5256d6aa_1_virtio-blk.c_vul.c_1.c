static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    do
    {
        FUN2(&VAR3->VAR4);
    } while (VAR3->VAR5 || VAR3->VAR6 > 0);
    return NULL;
}