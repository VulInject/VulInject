void FUN1(VAR1 *VAR2, VAR3 *VAR4, const char *VAR5, uint64_t VAR6)
{
    FUN2(VAR2, VAR4, VAR5, VAR6);
    VAR2->VAR7 = true;
    VAR2->VAR8 = true;
    VAR2->VAR9 = VAR10;
    if (VAR11)
    {
        VAR2->VAR12 = FUN3(VAR6, VAR2, VAR11);
    }
    else
    {
        VAR2->VAR12 = FUN4(VAR6, VAR2);
    }
}