static void FUN1(VAR1 *VAR2, BlkDebugEvent VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    struct VAR7 *VAR8, *VAR9;
    bool VAR10;
    assert((int)VAR3 >= 0 && VAR3 < VAR11);
    VAR10 = false;
    VAR5->VAR12 = VAR5->VAR13;
    FUN2(VAR8, &VAR5->VAR14[VAR3], VAR9, VAR9) { VAR10 = FUN3(VAR2, VAR8, VAR10); }
    VAR5->VAR13 = VAR5->VAR12;
}