VAR1 FUN1(VAR2 *VAR3)
{
    if (VAR3->VAR4 & (1 << VAR5))
    {
        return VAR3->VAR6;
    }
    else
    {
        uint64_t VAR7;
        VAR7 = FUN2(VAR8);
        if (FUN3(VAR3->VAR9) && FUN4(VAR3->VAR9, VAR7))
        {
            FUN5(VAR3);
        }
        return VAR3->VAR6 + (VAR1)FUN6(VAR7, VAR10, FUN7());
    }
}