static void FUN1(VAR1 *VAR2, const VAR3 *VAR4, int VAR5)
{
    if (VAR2->VAR6 > 0 && VAR4 == VAR2->VAR7[VAR2->VAR6 - 1].VAR8 + VAR2->VAR7[VAR2->VAR6 - 1].VAR9)
    {
        VAR2->VAR7[VAR2->VAR6 - 1].VAR9 += VAR5;
    }
    else
    {
        VAR2->VAR7[VAR2->VAR6].VAR8 = (VAR3 *)VAR4;
        VAR2->VAR7[VAR2->VAR6++].VAR9 = VAR5;
    }
    if (VAR2->VAR6 >= VAR10)
    {
        FUN2(VAR2);
    }
}