static void FUN1(VAR1 *VAR2, TCGType VAR3, TCGReg VAR4, void *VAR5)
{
    intptr_t VAR6 = (VAR7)VAR5;
    if ((VAR8 & VAR9) && !(VAR6 & 1))
    {
        ptrdiff_t VAR10 = FUN2(VAR2, VAR5) >> 1;
        if (VAR10 == (VAR11)VAR10)
        {
            if (VAR3 == VAR12)
            {
                FUN3(VAR2, VAR13, VAR14, VAR4, VAR10);
            }
            else
            {
                FUN3(VAR2, VAR13, VAR15, VAR4, VAR10);
            }
            return;
        }
    }
    FUN4(VAR2, VAR16, VAR4, VAR6 & ~0xffff);
    FUN5(VAR2, VAR3, VAR4, VAR4, VAR6 & 0xffff);
}