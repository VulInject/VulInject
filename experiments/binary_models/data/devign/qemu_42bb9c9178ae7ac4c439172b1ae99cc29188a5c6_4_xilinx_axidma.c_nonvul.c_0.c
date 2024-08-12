static void FUN1(void *VAR1, hwaddr VAR2, uint64_t VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = VAR1;
    struct VAR7 *VAR8;
    int VAR9;
    VAR9 = FUN2(VAR2);
    VAR8 = &VAR6->VAR10[VAR9];
    VAR2 = VAR2 % 0x30;
    VAR2 >>= 2;
    switch (VAR2)
    {
    case VAR11:
        VAR3 |= VAR12;
        VAR3 |= (VAR8->VAR13[VAR2] & VAR14);
        VAR8->VAR13[VAR2] = VAR3;
        if (VAR3 & VAR14)
        {
            FUN3(VAR8);
        }
        if ((VAR3 & 1) && !FUN4(VAR8))
        {
            VAR8->VAR13[VAR15] &= ~(VAR16 | VAR17);
        }
        FUN5(VAR8);
        break;
    case VAR15:
        VAR3 &= ~(VAR3 & VAR18);
        VAR8->VAR13[VAR2] = VAR3;
        break;
    case VAR19:
        VAR8->VAR13[VAR2] = VAR3;
        VAR8->VAR13[VAR15] &= ~VAR17;
        if (!VAR9)
        {
            FUN6(VAR8, VAR6->VAR20, VAR6->VAR21);
        }
        break;
    default:
        FUN7(FUN8("" VAR22 "", VAR23, VAR9, VAR2 * 4, (unsigned)VAR3));
        VAR8->VAR13[VAR2] = VAR3;
        break;
    }
    if (VAR9 == 1 && VAR6->VAR24)
    {
        VAR6->FUN9(VAR6->VAR25);
        VAR6->VAR24 = NULL;
    }
    FUN10(VAR8);
}