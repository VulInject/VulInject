VAR1 FUN1(void *VAR2)
{
    VAR3 *VAR4;
    VAR3 **VAR5;
    VAR3 *VAR6;
    VAR7 *VAR8 = VAR2;
    VAR4 = NULL;
    VAR5 = &VAR9;
    VAR6 = VAR9;
    while (VAR6 && (VAR6->VAR8 > VAR8 || VAR6->VAR8 + VAR6->VAR10 <= VAR8))
    {
        if (VAR4)
            VAR5 = &VAR4->VAR11;
        VAR4 = VAR6;
        VAR6 = VAR6->VAR11;
    }
    if (!VAR6)
    {
        fprintf(VAR12, "", VAR2);
        FUN2();
    }
    return VAR6->VAR13 + (VAR8 - VAR6->VAR8);
}