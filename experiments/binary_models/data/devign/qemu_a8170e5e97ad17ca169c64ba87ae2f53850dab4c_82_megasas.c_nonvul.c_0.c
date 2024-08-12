static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    uint64_t VAR5 = FUN2(VAR4->VAR6->VAR7.VAR8);
    hwaddr VAR9, VAR10, VAR11;
    VAR3 *VAR12;
    VAR10 = FUN3(VAR4->VAR6->VAR7.VAR13);
    VAR11 = FUN3(VAR4->VAR6->VAR7.VAR14);
    VAR9 = ((VAR15)VAR10 << 32) | VAR11;
    VAR12 = FUN4(VAR2, VAR9);
    if (!VAR12)
    {
        FUN5(VAR4->VAR16, VAR5);
        VAR2->VAR17++;
        return VAR18;
    }
    if (!FUN6(VAR2))
    {
        VAR5 &= (VAR15)0xFFFFFFFF;
    }
    if (VAR12->VAR19 != VAR5)
    {
        FUN7(VAR4->VAR16, VAR12->VAR16, VAR12->VAR19);
        VAR2->VAR17++;
        return VAR20;
    }
    FUN8(VAR4->VAR16, VAR12->VAR16);
    FUN9(VAR12);
    if (!VAR2->VAR21 || VAR12 != VAR2->VAR21)
    {
        VAR2->VAR21 = NULL;
    }
    VAR2->VAR17++;
    return VAR18;
}