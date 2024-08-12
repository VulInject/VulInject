static void FUN1(void *VAR1, const char *VAR2, int VAR3)
{
    VAR4 *VAR5 = VAR1;
    FUN2(VAR5->VAR6 >= VAR5->VAR7);
    FUN3(VAR5->VAR7, VAR2, FUN4(VAR5->VAR6 - VAR5->VAR7, VAR3 + 1));
    VAR5->VAR7 += FUN4(VAR5->VAR6 - VAR5->VAR7, VAR3);
}