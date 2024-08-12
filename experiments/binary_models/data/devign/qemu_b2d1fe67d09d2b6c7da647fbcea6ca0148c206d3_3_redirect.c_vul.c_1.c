static void FUN1(void *VAR1, uint64_t VAR2, struct VAR3 *VAR4, VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR1;
    uint8_t VAR10 = VAR4->VAR11;
    FUN2("" VAR12 "", VAR4->VAR13, VAR10, VAR7, VAR2);
    if (VAR9->VAR11[FUN3(VAR10)].VAR14 != VAR15)
    {
        FUN4("", VAR10);
        free(VAR6);
        return;
    }
    if (VAR9->VAR11[FUN3(VAR10)].VAR16 == 0)
    {
        FUN5("", VAR10);
        free(VAR6);
        return;
    }
    FUN6(VAR9, VAR6, VAR7, VAR4->VAR13, VAR10);
}