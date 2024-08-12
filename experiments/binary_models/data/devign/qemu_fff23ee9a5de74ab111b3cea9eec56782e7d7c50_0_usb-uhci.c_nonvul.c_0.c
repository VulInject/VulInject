static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4 = FUN2(sizeof(VAR1));
    memset(&VAR4->VAR5, 0, sizeof(VAR4->VAR5));
    VAR4->VAR6 = VAR3;
    VAR4->VAR7 = 0;
    VAR4->VAR8 = 0;
    VAR4->VAR9 = 0;
    VAR4->VAR10 = 0;
    VAR4->VAR11 = 0;
    FUN3(&VAR4->VAR5);
    FUN4(&VAR4->VAR12, &VAR3->VAR13, 1);
    return VAR4;
}