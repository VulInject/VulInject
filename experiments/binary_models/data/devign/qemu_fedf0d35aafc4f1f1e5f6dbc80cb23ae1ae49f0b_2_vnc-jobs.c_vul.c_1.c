VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4 = FUN2(sizeof(VAR1));
    VAR4->VAR3 = VAR3;
    FUN3(VAR5);
    FUN4(&VAR4->VAR6);
    FUN5(VAR5);
    return VAR4;
}