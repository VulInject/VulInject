FUN1(VAR1 *VAR2, VAR3 *VAR4, unsigned int VAR5)
{
    uint16_t VAR6, new;
    if (FUN2(VAR2->VAR7))
    {
        return;
    }
    FUN3();
    VAR6 = VAR4->VAR8;
    new = VAR6 + VAR5;
    FUN4(VAR2, VAR4, new);
    VAR4->VAR9 -= VAR5;
    if (FUN2((VAR10)(new - VAR4->VAR11) < (VAR12)(new - VAR6)))
    {
        VAR4->VAR13 = false;
    }
}