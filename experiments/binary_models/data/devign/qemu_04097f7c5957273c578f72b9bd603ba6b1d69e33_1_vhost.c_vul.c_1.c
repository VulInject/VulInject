void FUN1(struct VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6;
    for (VAR5 = 0; VAR5 < VAR2->VAR7; ++VAR5)
    {
        FUN2(VAR2, VAR4, VAR2->VAR8 + VAR5, VAR5);
    }
    FUN3(&VAR2->VAR9, 0, (VAR10)~0x0ull);
    VAR6 = VAR4->VAR11->FUN4(VAR4->VAR12, false);
    if (VAR6 < 0)
    {
        fprintf(VAR13, "", VAR6);
        FUN5(VAR13);
    }
    assert(VAR6 >= 0);
    VAR2->VAR14 = false;
    FUN6(VAR2->VAR15);
    VAR2->VAR15 = NULL;
    VAR2->VAR16 = 0;
}