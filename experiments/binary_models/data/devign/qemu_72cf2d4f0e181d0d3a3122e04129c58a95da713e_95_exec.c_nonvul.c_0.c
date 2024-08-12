void *FUN1(void *VAR1, void (*VAR2)(void *VAR1))
{
    VAR3 *VAR4 = FUN2(sizeof(*VAR4));
    VAR4->VAR1 = VAR1;
    VAR4->VAR2 = VAR2;
    FUN3(&VAR5, VAR4, VAR6);
    return VAR4;
}