VAR1 *FUN1(int VAR2, int VAR3)
{
    VAR1 *VAR4 = FUN2(sizeof(*VAR4));
    if (VAR4 && FUN3(VAR4, VAR2, VAR3))
        FUN4(&VAR4);
    return VAR4;
}