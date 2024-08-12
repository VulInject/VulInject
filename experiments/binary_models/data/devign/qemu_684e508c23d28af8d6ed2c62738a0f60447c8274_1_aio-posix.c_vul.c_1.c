static bool FUN1(VAR1 *VAR2, int64_t VAR3)
{
    bool VAR4 = false;
    int64_t VAR5;
    assert(VAR2->VAR6);
    assert(VAR2->VAR7 > 0);
    assert(VAR2->VAR8 == 0);
    FUN2(VAR2, VAR3);
    VAR5 = FUN3(VAR9) + VAR3;
    do
    {
        VAR10 *VAR11;
        FUN4(VAR11, &VAR2->VAR12, VAR11)
        {
            if (!VAR11->VAR13 && VAR11->VAR14 && VAR11->FUN5(VAR11->VAR15))
            {
                VAR4 = true;
            }
        }
    } while (!VAR4 && FUN3(VAR9) < VAR5);
    FUN6(VAR2, VAR4);
    return VAR4;
}