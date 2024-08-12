VAR1 *FUN1(int VAR2)
{
    VAR1 *VAR3;
    if (VAR2 <= 0)
        VAR3 = FUN2(sizeof(*VAR3));
    VAR3->VAR2 = VAR2;
    VAR3->VAR4 = FUN3(VAR2, sizeof(*VAR3->VAR4));
    VAR3->VAR5 = 0;
    VAR3->VAR6 = FUN4(VAR2 * VAR2, sizeof(double));
    VAR3->VAR7 = FUN4(VAR2, sizeof(double));
    return VAR3