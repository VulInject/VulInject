int FUN1(VAR1 *VAR2, int **VAR3, int *VAR4, int **VAR5, int *VAR6, int *VAR7, int *VAR8, int *VAR9)
{
    if (FUN2(VAR2->VAR10) || FUN3(VAR2->VAR10))
        return -1;
    *VAR3 = VAR2->VAR11;
    *VAR5 = VAR2->VAR12;
    *VAR4 = VAR2->VAR4;
    *VAR6 = VAR2->VAR6;
    *VAR7 = VAR2->VAR7;
    *VAR8 = VAR2->VAR8;
    *VAR9 = VAR2->VAR9;
    return 0;
}