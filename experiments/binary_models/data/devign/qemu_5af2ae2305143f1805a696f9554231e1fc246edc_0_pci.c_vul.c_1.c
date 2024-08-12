VAR1 *FUN1(VAR2 *VAR3)
{
    VAR4 *VAR5 = FUN2(VAR3->VAR5);
    if (VAR5->VAR6)
    {
        return VAR5->FUN3(VAR5, VAR5->VAR7, VAR3->VAR8);
    }
    if (VAR5->VAR9)
    {
        return FUN1(VAR5->VAR9);
    }
    return &VAR10;
}