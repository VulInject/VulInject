const char *FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR2);
    if (VAR4->VAR5)
    {
        return VAR4->VAR5;
    }
    else if (FUN3(VAR4))
    {
        return FUN4(VAR4);
    }
    return FUN5(FUN6(VAR2));
}