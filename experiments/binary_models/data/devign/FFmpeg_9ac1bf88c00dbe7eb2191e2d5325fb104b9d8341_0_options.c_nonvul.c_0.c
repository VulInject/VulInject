VAR1 *FUN1(void)
{
    VAR1 *VAR2;
    VAR2 = FUN2(sizeof(VAR1));
    if (!VAR2)
        return VAR2;
    FUN3(VAR2);
    return VAR2;
}