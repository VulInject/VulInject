static bool FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = (VAR5 *)VAR2;
    VAR7 *VAR8 = (VAR7 *)VAR4;
    uint32_t VAR9;
    if (VAR6->VAR10->VAR11)
    {
        FUN2(VAR8->VAR12, !=, -1);
        if (FUN3(VAR6->VAR10, VAR8->VAR12))
        {
            return FUN4(VAR6->VAR10, VAR8->VAR12);
        }
        else
        {
            VAR9 = FUN5(VAR8->VAR13);
            FUN6(VAR8->VAR13, 0);
            return VAR9 == VAR8->VAR14;
        }
    }
    else
    {
        return FUN7(VAR6->VAR10, VAR6->VAR15 + VAR16) & 1;
    }
}