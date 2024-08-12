static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR6;
    if (VAR2->VAR7 > VAR2->VAR8)
    {
        FUN2(VAR2);
        VAR5 = VAR6;
        return VAR5;
    }
    if (!VAR2->VAR8)
    {
        VAR5 = VAR6;
        return VAR5;
    }
    VAR5 = VAR2->VAR8 - VAR2->VAR7;
    if (VAR5 > VAR4->VAR9.VAR10)
    {
        VAR5 = VAR4->VAR9.VAR10;
    }
    FUN3(VAR4, &VAR2->VAR11[VAR2->VAR7], VAR5);
    VAR2->VAR7 += VAR5;
    if (VAR2->VAR7 >= VAR2->VAR8 && (FUN4(VAR2) || (VAR2->VAR8 & (64 - 1)) || !VAR5))
    {
        FUN2(VAR2);
    }
    fprintf(VAR12, "", VAR4->VAR9.VAR10, VAR5);
    FUN5(VAR4->VAR9.VAR9, VAR4->VAR9.VAR13, VAR12, "", VAR5);
    return VAR5;
}