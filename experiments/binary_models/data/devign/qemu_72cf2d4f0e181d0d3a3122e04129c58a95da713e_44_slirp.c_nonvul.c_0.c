VAR1 *FUN1(int VAR2, struct in_addr VAR3, struct in_addr VAR4, struct in_addr VAR5, const char *VAR6, const char *VAR7, const char *VAR8, struct in_addr VAR9, struct in_addr VAR10, void *VAR11)
{
    VAR1 *VAR12 = FUN2(sizeof(VAR1));
    FUN3();
    VAR12->VAR2 = VAR2;
    FUN4(VAR12);
    FUN5(VAR12);
    FUN6(VAR12);
    VAR12->VAR13 = VAR3;
    VAR12->VAR14 = VAR4;
    VAR12->VAR15 = VAR5;
    if (VAR6)
    {
        FUN7(VAR12->VAR16, sizeof(VAR12->VAR16), VAR6);
    }
    if (VAR7)
    {
        VAR12->VAR17 = FUN8(VAR7);
    }
    if (VAR8)
    {
        VAR12->VAR18 = FUN8(VAR8);
    }
    VAR12->VAR19 = VAR9;
    VAR12->VAR20 = VAR10;
    VAR12->VAR11 = VAR11;
    FUN9("", 0, 3, VAR21, VAR22, VAR12);
    FUN10(&VAR23, VAR12, VAR24);
    return VAR12;
}