void FUN1(void *VAR1)
{
    VAR2 *VAR3 = FUN2(VAR4);
    VAR3->VAR5 = VAR1;
    FUN3(VAR3->VAR3);
    VAR3->VAR3 = NULL;
    FUN4(0);
}