void *FUN1(ram_addr_t VAR1)
{
    VAR2 *VAR3;
    VAR2 **VAR4;
    VAR2 *VAR5;
    VAR3 = NULL;
    VAR4 = &VAR6;
    VAR5 = VAR6;
    while (VAR5 && (VAR5->VAR7 > VAR1 || VAR5->VAR7 + VAR5->VAR8 <= VAR1))
    {
        if (VAR3)
            VAR4 = &VAR3->VAR9;
        VAR3 = VAR5;
        VAR5 = VAR5->VAR9;
    }
    if (!VAR5)
    {
        fprintf(VAR10, "" VAR11 "", (VAR12)VAR1);
        FUN2();
    }
    if (VAR3)
    {
        VAR3->VAR9 = VAR5->VAR9;
        VAR5->VAR9 = *VAR4;
        *VAR4 = VAR5;
    }
    return VAR5->VAR13 + (VAR1 - VAR5->VAR7);
}