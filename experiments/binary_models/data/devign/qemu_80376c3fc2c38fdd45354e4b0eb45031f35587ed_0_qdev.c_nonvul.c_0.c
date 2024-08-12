void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const char *VAR7)
{
    char *VAR8;
    int VAR9, VAR10;
    VAR2->VAR4 = VAR4;
    VAR2->VAR6 = VAR6;
    if (VAR7)
    {
        VAR2->VAR7 = FUN2(VAR7);
    }
    else if (VAR6 && VAR6->VAR11)
    {
        VAR10 = strlen(VAR6->VAR11) + 16;
        VAR8 = FUN3(VAR10);
        snprintf(VAR8, VAR10, "", VAR6->VAR11, VAR6->VAR12);
        VAR2->VAR7 = VAR8;
    }
    else
    {
        VAR10 = strlen(VAR4->VAR7) + 16;
        VAR8 = FUN3(VAR10);
        VAR10 = snprintf(VAR8, VAR10, "", VAR4->VAR7, VAR6 ? VAR6->VAR12 : 0);
        for (VAR9 = 0; VAR9 < VAR10; VAR9++)
            VAR8[VAR9] = FUN4(VAR8[VAR9]);
        VAR2->VAR7 = VAR8;
    }
    FUN5(&VAR2->VAR13);
    if (VAR6)
    {
        FUN6(&VAR6->VAR14, VAR2, VAR15);
        VAR6->VAR12++;
    }
    else if (VAR2 != VAR16)
    {
        FUN7(VAR17, VAR2);
    }
}