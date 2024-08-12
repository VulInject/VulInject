static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    FUN2(VAR3->VAR4);
    VAR3->VAR4 = NULL;
    FUN3(VAR3->VAR5, NULL);
}