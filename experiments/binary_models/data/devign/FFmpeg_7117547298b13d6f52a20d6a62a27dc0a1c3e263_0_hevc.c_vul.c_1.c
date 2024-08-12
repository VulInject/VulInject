static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6)
{
    int VAR7, VAR8;
    VAR4->VAR9 = VAR2->VAR10->VAR9 + 2;
    VAR4->VAR11 = VAR2->VAR10->VAR11 + 2;
    if ((VAR7 = FUN2(VAR2->VAR10, VAR4, VAR12)) < 0)
        return VAR7;
    for (VAR8 = 0; VAR4->VAR13[VAR8]; VAR8++)
    {
        int VAR14 = VAR4->VAR15[VAR8] + (1 << VAR6->VAR16);
        VAR4->VAR13[VAR8] += VAR14;
    }
    VAR4->VAR9 = VAR2->VAR10->VAR9;
    VAR4->VAR11 = VAR2->VAR10->VAR11;
    return 0;
}