static int FUN1(VAR1 *VAR2, int VAR3)
{
    VAR4 *VAR5 = FUN2(FUN3(VAR2), VAR4, VAR6);
    if (VAR5->VAR7 == VAR8)
    {
        return VAR3;
    }
    return FUN4(VAR2, VAR3 + 2);
}