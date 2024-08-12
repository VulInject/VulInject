static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    float VAR5, VAR6;
    VAR4->VAR7 = 0;
    FUN2(VAR2, VAR4, &VAR5);
    VAR4->VAR7 = 1;
    FUN2(VAR2, VAR4, &VAR6);
    VAR4->VAR7 = VAR6 < VAR5;
    VAR2->VAR8 += VAR6 < VAR5;