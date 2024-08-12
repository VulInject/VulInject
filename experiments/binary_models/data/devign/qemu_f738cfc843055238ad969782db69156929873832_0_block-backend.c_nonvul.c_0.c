VAR1 *FUN1(uint64_t VAR2, uint64_t VAR3)
{
    VAR1 *VAR4;
    VAR4 = FUN2(VAR1, 1);
    VAR4->VAR5 = 1;
    VAR4->VAR2 = VAR2;
    VAR4->VAR3 = VAR3;
    FUN3(VAR4, true);
    FUN4(&VAR4->VAR6);
    FUN5(&VAR4->VAR7);
    FUN5(&VAR4->VAR8);
    FUN6(&VAR9, VAR4, VAR10);
    return VAR4;
}