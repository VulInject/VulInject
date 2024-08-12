VAR1 *FUN1(VAR2 *VAR3, const char *VAR4, uint32_t VAR5)
{
    VAR1 *VAR6 = FUN2(FUN3(VAR4));
    char *VAR7;
    VAR6->VAR5 = VAR5;
    VAR6->VAR3 = VAR3;
    VAR7 = FUN4("" VAR8 "", FUN5(VAR6));
    FUN6(VAR3, VAR7, FUN7(VAR6), NULL);
    FUN8(FUN7(VAR6), true, "", NULL);
    FUN9(VAR7);
    return VAR6;
}