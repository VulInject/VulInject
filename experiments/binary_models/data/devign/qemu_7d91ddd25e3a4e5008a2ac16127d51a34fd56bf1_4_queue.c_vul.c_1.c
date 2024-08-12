VAR1 *FUN1(void *VAR2)
{
    VAR1 *VAR3;
    VAR3 = FUN2(sizeof(VAR1));
    VAR3->VAR2 = VAR2;
    FUN3(&VAR3->VAR4);
    VAR3->VAR5 = 0;
    return VAR3;