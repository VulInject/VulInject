VAR1 *FUN1(void)
{
    VAR2 *VAR3;
    VAR1 *VAR4;
    VAR3 = FUN2(sizeof(VAR2));
    VAR3->VAR4 = VAR4 = FUN2(sizeof(VAR1));
    VAR4->VAR5 = VAR3;
    VAR4->VAR6 = VAR7;
    VAR4->VAR8 = VAR9;
    return VAR4;
}