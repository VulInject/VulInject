static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR3->VAR4 = 1;
    FUN2(VAR3->VAR5);
    FUN3(VAR3->VAR6, NULL);
}