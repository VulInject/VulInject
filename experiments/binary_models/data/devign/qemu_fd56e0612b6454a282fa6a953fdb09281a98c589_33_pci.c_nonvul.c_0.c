VAR1 *FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    if (FUN3(VAR2))
    {
        return VAR4->VAR5[0];
    }
    else
    {
        return VAR4->VAR5[FUN4(FUN5(VAR2->VAR6), 0)];
    }
}