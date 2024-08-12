static void FUN1(void)
{
    assert(((VAR1 *)FUN2(&(VAR2->VAR3), 0))->VAR4 == 2);
    FUN3(VAR2);
    FUN4(VAR2);
    assert(!VAR2->VAR5 || VAR2->VAR6 || (VAR2->VAR5->VAR7 & VAR8));
    if (((VAR9 *)VAR2->VAR10.VAR11)[1].VAR12 != 0xf)
        fprintf(VAR13, "");
    VAR1 *VAR3;
    VAR9 *VAR14;
    assert(VAR2->VAR3.VAR15 >= VAR2->VAR3.VAR16 * VAR2->VAR3.VAR17);
    assert(VAR2->VAR10.VAR15 >= VAR2->VAR10.VAR16 * VAR2->VAR10.VAR17);
    if (VAR2->VAR3.VAR17 < 47)
        return;
    assert((VAR3 = FUN2(&(VAR2->VAR3), 47)));
    assert(VAR3->VAR18 < VAR2->VAR10.VAR17);
    VAR14 = FUN2(&(VAR2->VAR10), VAR3->VAR18);
    assert(!memcmp(VAR14->VAR19, "", 11) || VAR14->VAR19[0] == 0);
    return;
    FUN5(NULL, 100);
    FUN6(VAR2, NULL);
    FUN7(NULL);
    FUN8(NULL);
}