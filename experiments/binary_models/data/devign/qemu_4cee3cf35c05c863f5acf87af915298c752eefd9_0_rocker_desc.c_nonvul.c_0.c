char *FUN1(VAR1 *VAR2, bool VAR3)
{
    VAR4 *VAR5 = FUN2(VAR2->VAR6->VAR7);
    size_t VAR8 = VAR3 ? FUN3(VAR2->VAR9.VAR10) : FUN3(VAR2->VAR9.VAR11);
    if (VAR8 > VAR2->VAR11)
    {
        VAR2->VAR12 = FUN4(VAR2->VAR12, VAR8);
        VAR2->VAR11 = VAR8;
    }
    if (!VAR2->VAR12)
    {
        return NULL;
    }
    FUN5(VAR5, FUN6(VAR2->VAR9.VAR13), VAR2->VAR12, VAR8);
    return VAR2->VAR12;
}