VAR1 *FUN1(void)
{
    VAR1 *VAR2;
    VAR2 = FUN2(sizeof(*VAR2));
    FUN3(FUN4(VAR2), VAR3);
    FUN5(&VAR2->VAR4);
    return VAR2;
}