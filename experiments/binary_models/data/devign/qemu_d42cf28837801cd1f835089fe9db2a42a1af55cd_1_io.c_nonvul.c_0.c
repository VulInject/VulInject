static void FUN1(void *VAR1)
{
    VAR2 *VAR3 = VAR1;
    VAR4 *VAR5 = VAR3->VAR5;
    VAR6 *VAR7 = VAR3->VAR7;
    FUN2(VAR7);
    FUN3(VAR7);
    VAR3->VAR8 = true;
    FUN4(VAR5);
}