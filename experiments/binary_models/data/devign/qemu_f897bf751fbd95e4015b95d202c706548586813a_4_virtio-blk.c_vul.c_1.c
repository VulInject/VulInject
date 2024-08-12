static VAR1 *FUN1(VAR2 *VAR3)
{
    VAR1 *VAR4 = FUN2(VAR3);
    if (!FUN3(VAR3->VAR5, VAR4->VAR6))
    {
        FUN4(VAR4);
        return NULL;
    }
    return VAR4;
}