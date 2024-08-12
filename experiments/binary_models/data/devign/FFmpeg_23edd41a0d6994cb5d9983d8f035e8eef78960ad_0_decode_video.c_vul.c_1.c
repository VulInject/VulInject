static void FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6, const char *VAR7)
{
    char VAR8[1024];
    int VAR9;
    VAR9 = FUN2(VAR2, VAR6);
    if (VAR9 < 0)
    {
        fprintf(VAR10, "");
        FUN3(1);
    }
    while (VAR9 >= 0)
    {
        VAR9 = FUN4(VAR2, VAR4);
        if (VAR9 == FUN5(VAR11) || VAR9 == VAR12)
            return;
        else if (VAR9 < 0)
        {
            fprintf(VAR10, "");
            FUN3(1);
        }
        FUN6("", VAR2->VAR13);
        FUN7(VAR14);
        snprintf(VAR8, sizeof(VAR8), VAR7, VAR2->VAR13);
        FUN8(VAR4->VAR15[0], VAR4->VAR16[0], VAR4->VAR17, VAR4->VAR18, VAR8);
    }
}