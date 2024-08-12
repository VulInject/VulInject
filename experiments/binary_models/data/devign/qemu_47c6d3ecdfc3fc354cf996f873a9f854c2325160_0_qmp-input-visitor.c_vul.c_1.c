static const VAR1 *FUN1(VAR2 *VAR3, const char *VAR4)
{
    const VAR1 *VAR5;
    if (VAR3->VAR6 == 0)
    {
        VAR5 = VAR3->VAR7;
    }
    else
    {
        VAR5 = VAR3->VAR8[VAR3->VAR6 - 1].VAR7;
    }
    if (VAR4 && FUN2(VAR5) == VAR9)
    {
        return FUN3(FUN4(VAR5), VAR4);
    }
    else if (VAR3->VAR6 > 0 && FUN2(VAR5) == VAR10)
    {
        return FUN5(VAR3->VAR8[VAR3->VAR6 - 1].VAR11);
    }
    return VAR5;
}