static VAR1 *FUN1(VAR2 *VAR3, unsigned int VAR4, unsigned int VAR5)
{
    VAR1 *VAR6;
    VAR6 = FUN2(VAR1, 1);
    VAR6->VAR3 = VAR3;
    VAR6->VAR4 = VAR4;
    VAR6->VAR5 = VAR5;
    FUN3(&VAR6->VAR7);
    VAR6->VAR8 = FUN4(VAR9, VAR10, VAR6);
    return VAR6;
}