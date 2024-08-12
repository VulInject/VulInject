VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, const char *VAR5)
{
    const char *VAR6 = VAR3->VAR6 ? VAR3->VAR6 : VAR5;
    VAR1 *VAR7;
    VAR8 *VAR9;
    int VAR10;
    VAR10 = FUN2(VAR3, VAR11, VAR4);
    VAR7 = FUN3(VAR12[VAR10], VAR6);
    VAR9 = &VAR7->VAR13;
    if (VAR3->VAR14)
        VAR9->VAR14 = FUN4(VAR3->VAR14);
    VAR9->VAR3 = VAR3;
    FUN5(VAR9);
    VAR3->private = VAR9;
    return VAR7;
}