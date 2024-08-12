VAR1 FUN1(void *VAR2)
{
    VAR3 *VAR4 = NULL;
    VAR5 *VAR6;
    hwaddr VAR7;
    hwaddr VAR8;
    ram_addr_t VAR9;
    int VAR10 = 0;
    FUN2();
    FUN3(VAR6, &VAR11->VAR12, VAR13)
    {
        if (VAR6->VAR14 == VAR2)
        {
            VAR7 = VAR6->VAR7;
            VAR8 = VAR6->VAR8;
            VAR10 = 1;
            break;
        }
    }
    if (!VAR10)
    {
        fprintf(VAR15, "", VAR16, VAR2);
        FUN3(VAR6, &VAR11->VAR12, VAR13) { FUN4("" VAR17 "", VAR6->VAR7, VAR6->VAR14); }
        FUN5();
        return 0;
    }
    VAR4 = &VAR11->VAR4[VAR7 % VAR11->VAR18];
    while (VAR4 && (VAR4->VAR7 != VAR7 || VAR4->VAR8 != VAR8))
    {
        VAR4 = VAR4->VAR13;
    }
    if (!VAR4)
    {
        FUN4("", VAR2);
        VAR9 = 0;
    }
    else
    {
        VAR9 = (VAR6->VAR7 << VAR19) + ((unsigned long)VAR2 - (unsigned long)VAR4->VAR20);
    }
    FUN6();
    return VAR9;
}