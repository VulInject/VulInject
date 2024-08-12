static VAR1 *FUN1(void)
{
    VAR1 *VAR2 = FUN2(VAR3);
    if (!VAR2)
    {
        VAR2 = FUN3(sizeof(*VAR2));
        VAR2->VAR4 = &VAR2->VAR5.VAR6;
        FUN4(VAR3, VAR2);
    }
    return VAR2;
}