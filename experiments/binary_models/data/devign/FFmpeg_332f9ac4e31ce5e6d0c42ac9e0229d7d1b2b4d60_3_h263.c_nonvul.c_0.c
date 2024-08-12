static void FUN1(VAR1 *VAR2, int VAR3)
{
    VAR2->VAR4 += VAR3;
    if (VAR2->VAR4 < 1)
        VAR2->VAR4 = 1;
    else if (VAR2->VAR4 > 31)
        VAR2->VAR4 = 31;
    VAR2->VAR5 = VAR2->VAR6[VAR2->VAR4];
    VAR2->VAR7 = VAR2->VAR8[VAR2->VAR4];
    VAR2->VAR9 = VAR2->VAR10[VAR2->VAR5];
}