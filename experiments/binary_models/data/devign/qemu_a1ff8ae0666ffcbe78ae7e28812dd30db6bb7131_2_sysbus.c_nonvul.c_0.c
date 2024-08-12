static void FUN1(VAR1 *VAR2, int VAR3, hwaddr VAR4, bool VAR5, int VAR6)
{
    assert(VAR3 >= 0 && VAR3 < VAR2->VAR7);
    if (VAR2->VAR8[VAR3].VAR4 == VAR4)
    {
        return;
    }
    if (VAR2->VAR8[VAR3].VAR4 != (VAR9)-1)
    {
        FUN2(FUN3(), VAR2->VAR8[VAR3].VAR10);
    }
    VAR2->VAR8[VAR3].VAR4 = VAR4;
    if (VAR5)
    {
        FUN4(FUN3(), VAR4, VAR2->VAR8[VAR3].VAR10, VAR6);
    }
    else
    {
        FUN5(FUN3(), VAR4, VAR2->VAR8[VAR3].VAR10);
    }
}