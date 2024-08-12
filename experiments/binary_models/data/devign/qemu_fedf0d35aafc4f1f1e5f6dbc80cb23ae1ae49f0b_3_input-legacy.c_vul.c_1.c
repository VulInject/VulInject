VAR1 *FUN1(VAR2 *VAR3, void *VAR4)
{
    VAR1 *VAR5;
    VAR5 = FUN2(sizeof(VAR1));
    VAR5->VAR6 = VAR3;
    VAR5->VAR4 = VAR4;
    FUN3(&VAR7, VAR5, VAR8);
    return VAR5;
}