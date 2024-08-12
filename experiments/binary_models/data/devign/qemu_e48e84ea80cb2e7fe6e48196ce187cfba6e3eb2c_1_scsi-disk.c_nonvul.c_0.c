static void FUN1(void *VAR1, bool VAR2)
{
    VAR3 *VAR4 = VAR1;
    VAR4->VAR5 = VAR2;
    VAR4->VAR6 = !VAR2;
    FUN2(&VAR4->VAR7, FUN3(VAR8));
    VAR4->VAR9 = true;
    VAR4->VAR10 = false;
}