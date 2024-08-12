VAR1 *FUN1(const char *VAR2)
{
    VAR1 *VAR3;
    VAR3 = FUN2(VAR2);
    if (VAR3)
        return VAR3;
    VAR3 = FUN3(sizeof(*VAR3));
    VAR3->VAR2 = FUN4(VAR2);
    VAR3->VAR4 = 1;
    VAR3->VAR5 = 0;
    FUN5(&VAR3->VAR6);
    VAR7 = FUN6(VAR7, sizeof(*VAR7) * (VAR8 + 1));
    VAR7[VAR8] = VAR3;
    VAR8++;
    return VAR3;
}