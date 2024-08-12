static bool FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    uint32_t VAR5;
    if (VAR4->VAR6->VAR7)
    {
        FUN2(VAR4->VAR8, !=, -1);
        if (FUN3(VAR4->VAR6, VAR4->VAR8))
        {
            return FUN4(VAR4->VAR6, VAR4->VAR8);
        }
        else
        {
            VAR5 = FUN5(VAR4->VAR9);
            FUN6(VAR4->VAR9, 0);
            return VAR5 == VAR4->VAR10;
        }
    }
    else
    {
        return FUN7(VAR4->VAR6, VAR4->VAR11 + VAR12) & 2;
    }
}