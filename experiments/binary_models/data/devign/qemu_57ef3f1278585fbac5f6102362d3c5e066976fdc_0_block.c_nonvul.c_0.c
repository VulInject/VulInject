bool FUN1(VAR1 *VAR2, BlockOpType VAR3, VAR4 **VAR5)
{
    VAR6 *VAR7;
    assert((int)VAR3 >= 0 && VAR3 < VAR8);
    if (!FUN2(&VAR2->VAR9[VAR3]))
    {
        VAR7 = FUN3(&VAR2->VAR9[VAR3]);
        FUN4(VAR5, FUN5(VAR7->VAR10));
        FUN6(VAR5, "", FUN7(VAR2));
        return true;
    }
    return false;
}