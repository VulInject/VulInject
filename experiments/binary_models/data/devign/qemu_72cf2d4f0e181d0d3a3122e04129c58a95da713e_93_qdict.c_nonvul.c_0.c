void FUN1(VAR1 *VAR2, const char *VAR3, VAR4 *VAR5)
{
    unsigned int VAR6;
    VAR7 *VAR8;
    VAR6 = FUN2(VAR3) % VAR9;
    VAR8 = FUN3(VAR2, VAR3, VAR6);
    if (VAR8)
    {
        FUN4(VAR8->VAR5);
        VAR8->VAR5 = VAR5;
    }
    else
    {
        VAR8 = FUN5(VAR3, VAR5);
        FUN6(&VAR2->VAR10[VAR6], VAR8, VAR11);
    }
    VAR2->VAR12++;
}