static char *FUN1(const VAR1 *VAR2)
{
    const VAR3 *VAR4;
    const VAR5 *VAR6;
    const VAR7 *VAR8;
    int VAR9;
    const VAR10 *VAR11;
    const VAR3 *VAR12;
    const VAR1 *VAR13;
    VAR4 = FUN2(VAR2);
    VAR6 = VAR4->VAR14;
    VAR8 = FUN3(VAR6->VAR15);
    VAR9 = FUN4(VAR16, VAR8);
    assert(VAR9 >= 0);
    VAR11 = FUN5(VAR8);
    VAR12 = FUN2(VAR11->VAR17->VAR18);
    VAR13 = FUN6(VAR12);
    if (VAR13->VAR19 > 0)
    {
        return FUN7(VAR20 "", VAR13->VAR21[0].VAR22, VAR9 + 1);
    }
    if (VAR13->VAR23 > 0)
    {
        return FUN7("", VAR13->VAR24[0], VAR9 + 1);
    }
    return NULL;
}