VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4;
    VAR4 = FUN2(VAR1, FUN3(&VAR5, VAR3, NULL));
    VAR4->VAR6 = VAR7++;
    FUN4(&VAR4->free);
    FUN4(&VAR4->VAR8);
    FUN5(&VAR9, VAR4, VAR10);
    return VAR4;
}