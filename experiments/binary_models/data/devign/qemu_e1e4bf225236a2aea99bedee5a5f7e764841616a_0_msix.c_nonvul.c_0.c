static bool FUN1(VAR1 *VAR2, unsigned int VAR3, bool VAR4)
{
    unsigned VAR5 = VAR3 * VAR6;
    VAR7 *VAR8 = &VAR2->VAR9[VAR5 + VAR10];
    if (FUN2() && FUN3(FUN4(VAR8)))
    {
        return false;
    }
    return VAR4 || VAR2->VAR9[VAR5 + VAR11] & VAR12;
}