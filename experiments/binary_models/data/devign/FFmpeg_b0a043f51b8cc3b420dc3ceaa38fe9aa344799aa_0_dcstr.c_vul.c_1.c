static int FUN1(VAR1 *VAR2)
{
    unsigned VAR3, VAR4;
    VAR5 *VAR6;
    VAR6 = FUN2(VAR2, NULL);
    if (!VAR6)
        return FUN3(VAR7);
    VAR6->VAR8->VAR9 = VAR10;
    VAR6->VAR8->VAR11 = FUN4(VAR2->VAR12);
    VAR6->VAR8->VAR13 = FUN4(VAR2->VAR12);
    VAR3 = FUN4(VAR2->VAR12);
    VAR4 = FUN4(VAR2->VAR12);
    FUN5(VAR2->VAR12, 4);
    VAR6->VAR14 = FUN4(VAR2->VAR12);
    VAR6->VAR8->VAR11 *= FUN4(VAR2->VAR12);
    if (!VAR4 || VAR4 > VAR15 / VAR6->VAR8->VAR11)
        return VAR16;
    VAR6->VAR8->VAR17 = VAR4 * VAR6->VAR8->VAR11;
    switch (VAR3)
    {
    case 4:
        VAR6->VAR8->VAR18 = VAR19;
        break;
    case 16:
        VAR6->VAR8->VAR18 = VAR20;
        break;
    default:
        FUN6(VAR2, "", VAR3);
        return VAR21;
    }
    FUN5(VAR2->VAR12, 0x800 - FUN7(VAR2->VAR12));
    FUN8(VAR6, 64, 1, VAR6->VAR8->VAR13);
    return 0;
}