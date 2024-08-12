inline static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR1 *VAR6 = VAR4->VAR7[0];
    VAR8 *VAR9 = VAR2->VAR5->VAR10;
    int VAR11 = VAR6->VAR12;
    int VAR13, VAR14;
    if ((VAR13 = FUN2(VAR2, VAR9->VAR15)) >= 0)
        VAR9->VAR16 = 1;
    VAR9->VAR15 = NULL;
    VAR9->VAR17 = 0;
    for (VAR14 = 0; VAR14 <= VAR11; VAR14++)
        VAR9->VAR18[VAR14] = 0;
    return VAR13;
}