VAR1 *FUN1(void)
{
    VAR1 *VAR2;
    VAR2 = FUN2(sizeof(*VAR2));
    FUN3(FUN4(VAR2), VAR3);
    return VAR2;
}