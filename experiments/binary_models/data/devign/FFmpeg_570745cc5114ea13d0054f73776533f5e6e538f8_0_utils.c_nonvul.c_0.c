VAR1 *FUN1(VAR2 *VAR3, int VAR4, AVRational VAR5, int64_t VAR6, int64_t VAR7, const char *VAR8)
{
    VAR1 *VAR9 = NULL;
    int VAR10;
    for (VAR10 = 0; VAR10 < VAR3->VAR11; VAR10++)
        if (VAR3->VAR12[VAR10]->VAR4 == VAR4)
            VAR9 = VAR3->VAR12[VAR10];
    if (!VAR9)
    {
        VAR9 = FUN2(sizeof(VAR1));
        if (!VAR9)
            return NULL;
        FUN3(&VAR3->VAR12, &VAR3->VAR11, VAR9);
    }
    FUN4(VAR9->VAR8);
    VAR9->VAR8 = FUN5(VAR8);
    VAR9->VAR4 = VAR4;
    VAR9->VAR5 = VAR5;
    VAR9->VAR6 = VAR6;
    VAR9->VAR7 = VAR7;
    return VAR9;
}