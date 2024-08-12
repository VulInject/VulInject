static void FUN1(const char *VAR1, unsigned int VAR2, uint64_t VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    VAR8 *VAR9;
    VAR10 *VAR11;
    VAR9 = FUN2(FUN3(VAR12, VAR1));
    if (VAR9 == NULL)
    {
        fprintf(VAR13, "");
        FUN4(1);
    }
    VAR11 = &VAR9->VAR11;
    FUN5(VAR11, VAR2);
    if (VAR2 == 0)
    {
        FUN6(VAR14, VAR9);
    }
    else
    {
        FUN6(VAR15, VAR9);
        VAR7 = FUN7(VAR9);
        VAR7->VAR16 = 1;
    }
    *VAR5 = FUN8(VAR17, VAR9, VAR18);
    VAR11->VAR3 = VAR3;
}