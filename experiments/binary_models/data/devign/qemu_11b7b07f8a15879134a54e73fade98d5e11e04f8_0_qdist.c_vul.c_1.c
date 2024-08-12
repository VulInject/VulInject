char *FUN1(const struct VAR1 *VAR2, size_t VAR3, uint32_t VAR4)
{
    const char *VAR5 = VAR4 & VAR6 ? "" : "";
    char *VAR7, *VAR8;
    char *VAR9;
    VAR10 *VAR11;
    if (VAR2->VAR12 == 0)
    {
        return NULL;
    }
    VAR11 = FUN2("");
    VAR7 = FUN3(VAR2, VAR3, VAR4, true);
    VAR8 = FUN3(VAR2, VAR3, VAR4, false);
    VAR9 = FUN4(VAR2, VAR3);
    FUN5(VAR11, "", VAR7, VAR5, VAR9, VAR5, VAR8);
    FUN6(VAR7);
    FUN6(VAR8);
    FUN6(VAR9);
    return FUN7(VAR11, VAR13);
}