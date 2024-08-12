int FUN1(VAR1 *VAR2, int VAR3, const char *VAR4)
{
    VAR5 *VAR6;
    VAR6 = FUN2(sizeof(*VAR6));
    VAR6->VAR4 = FUN3(VAR4);
    VAR6->VAR3 = VAR3;
    FUN4(&VAR2->VAR7, VAR6, VAR8);
    VAR2->VAR9++;
    return VAR2->VAR9;
}