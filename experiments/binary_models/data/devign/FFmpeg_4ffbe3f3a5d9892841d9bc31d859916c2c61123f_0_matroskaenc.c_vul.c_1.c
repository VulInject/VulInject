static int FUN1(VAR1 *VAR2, int VAR3, int64_t VAR4, int64_t VAR5)
{
    VAR6 *VAR7 = VAR2->VAR7;
    VAR7 = FUN2(VAR7, (VAR2->VAR8 + 1) * sizeof(VAR6));
    if (VAR7 == NULL)
        return FUN3(VAR9);
    if (VAR4 < 0)
        return 0;
    VAR7[VAR2->VAR8].VAR10 = VAR4;
    VAR7[VAR2->VAR8].VAR11 = VAR3 + 1;
    VAR7[VAR2->VAR8++].VAR5 = VAR5 - VAR2->VAR12;
    VAR2->VAR7 = VAR7;
    return 0;
}