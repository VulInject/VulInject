void FUN1(int VAR1, VAR2 *VAR3, const int *VAR4)
{
    VAR5 *VAR6;
    int VAR7;
    VAR6 = (VAR5 *)FUN2(sizeof(VAR5));
    VAR6->VAR8 = (VAR9 *)FUN2(VAR1 * sizeof(VAR9));
    for (VAR7 = 0; VAR7 < VAR1; VAR7++)
    {
        VAR6->VAR8[VAR7].VAR3 = VAR3[VAR7];
        VAR6->VAR8[VAR7].VAR4 = VAR4[VAR7];
    }
    VAR6->VAR10 = VAR1;
    FUN3(VAR11, VAR6);
    FUN4(NULL, -1, &VAR12, VAR6);
}