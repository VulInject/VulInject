static void FUN1(void *VAR1, int VAR2)
{
    VAR3 *VAR4 = VAR1;
    FUN2(VAR4->VAR5 >= VAR4->VAR6);
    FUN3(VAR4->VAR6, "", FUN4(VAR4->VAR5 - VAR4->VAR6, 2));
    if (VAR4->VAR5 > VAR4->VAR6)
        VAR4->VAR6++;
}