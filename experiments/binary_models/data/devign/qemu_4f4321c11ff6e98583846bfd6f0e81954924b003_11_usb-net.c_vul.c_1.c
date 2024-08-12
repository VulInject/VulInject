static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5 = VAR6;
    if (VAR2->VAR7 > VAR2->VAR8)
    {
        VAR2->VAR7 = VAR2->VAR8 = 0;
        VAR5 = VAR6;
        return VAR5;
    }
    if (!VAR2->VAR8)
    {
        VAR5 = VAR6;
        return VAR5;
    }
    VAR5 = VAR2->VAR8 - VAR2->VAR7;
    if (VAR5 > VAR4->VAR9)
        VAR5 = VAR4->VAR9;
    memcpy(VAR4->VAR10, &VAR2->VAR11[VAR2->VAR7], VAR5);
    VAR2->VAR7 += VAR5;
    if (VAR2->VAR7 >= VAR2->VAR8 && (FUN2(VAR2) || (VAR2->VAR8 & (64 - 1)) || !VAR5))
    {
        VAR2->VAR7 = VAR2->VAR8 = 0;
    }
    fprintf(VAR12, "", VAR4->VAR9, VAR5);
    {
        int VAR13;
        fprintf(VAR12, "");
        for (VAR13 = 0; VAR13 < VAR5; VAR13++)
        {
            if (!(VAR13 & 15))
                fprintf(VAR12, "", VAR13);
            fprintf(VAR12, "", VAR4->VAR10[VAR13]);
        }
        fprintf(VAR12, "");
    }
    return VAR5;
}