static void *FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    FUN2(&VAR3->VAR4);
    while (!FUN3(VAR3))
        ;
    FUN4(VAR3);
    return NULL;
}