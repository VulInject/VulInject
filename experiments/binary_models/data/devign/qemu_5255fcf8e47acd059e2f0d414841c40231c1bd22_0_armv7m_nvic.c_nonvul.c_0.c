void FUN1(void *VAR1)
{
    VAR2 *VAR3 = (VAR2 *)VAR1;
    VAR4 *VAR5 = &VAR3->VAR6->VAR5;
    const int VAR7 = VAR3->VAR8;
    const int VAR9 = FUN2(VAR3);
    VAR10 *VAR11;
    assert(VAR7 > VAR12 && VAR7 < VAR3->VAR13);
    VAR11 = &VAR3->VAR14[VAR7];
    assert(VAR11->VAR15);
    assert(VAR11->VAR7);
    assert(VAR3->VAR16 < VAR9);
    FUN3(VAR7, VAR3->VAR16);
    VAR11->VAR17 = 1;
    VAR11->VAR7 = 0;
    VAR5->VAR18.VAR19 = VAR3->VAR8;
    FUN4(VAR3);
}