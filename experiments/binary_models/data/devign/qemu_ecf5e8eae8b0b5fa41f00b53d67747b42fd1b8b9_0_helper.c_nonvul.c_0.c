static bool FUN1(VAR1 *VAR2, ARMMMUIdx VAR3, bool VAR4)
{
    VAR5 *VAR6 = &VAR2->VAR6;
    if (VAR4)
    {
        return false;
    }
    if (FUN2(VAR6, VAR7))
    {
        return VAR6->VAR8.VAR9[FUN3(VAR6, VAR3)] & VAR10;
    }
    else
    {
        return FUN4(VAR6, VAR3) & VAR11;
    }
}