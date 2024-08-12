static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, int VAR6)
{
    if (VAR5 <= 14)
        return;
    if (!VAR2->VAR7 || VAR2->VAR8 >= VAR2->VAR5)
    {
        VAR9 *VAR7;
        VAR7 = FUN2(VAR2->VAR7, sizeof(VAR9) * (VAR2->VAR5 + 10));
        if (!VAR7)
            return;
        VAR2->VAR5 += 10;
        VAR2->VAR7 = VAR7;
    }
    VAR2->VAR7[VAR2->VAR8].VAR4 = VAR4;
    VAR2->VAR7[VAR2->VAR8].VAR5 = VAR5;
    VAR2->VAR7[VAR2->VAR8].VAR10 = VAR6;
    VAR2->VAR7[VAR2->VAR8].VAR11 = 0;
    VAR2->VAR7[VAR2->VAR8].VAR12 = 0;
    VAR2->VAR8++;
}