static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR4->VAR2 = VAR2;
    FUN2(VAR4->VAR5, NULL);
}