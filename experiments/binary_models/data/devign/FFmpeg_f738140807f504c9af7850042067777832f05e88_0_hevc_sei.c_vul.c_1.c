static int FUN1(VAR1 *VAR2, VAR3 *VAR4, const VAR5 *VAR6, int VAR7, int VAR8, void *VAR9)
{
    switch (VAR7)
    {
    case 256:
        return FUN2(&VAR4->VAR10, VAR2);
    case VAR11:
        return FUN3(&VAR4->VAR12, VAR2);
    case VAR13:
        return FUN4(&VAR4->VAR14, VAR2);
    case VAR15:
    {
        int VAR16 = FUN5(VAR4, VAR2, VAR6, VAR9);
        FUN6(VAR9, VAR17, "", VAR7);
        FUN7(VAR2, 8 * VAR8);
        return VAR16;
    }
    case VAR18:
        return FUN8(&VAR4->VAR19, VAR2);
    case VAR20:
        return FUN9(&VAR4->VAR21, VAR2);
    case VAR22:
        FUN10(VAR4, VAR2, VAR9);
        FUN6(VAR9, VAR17, "", VAR7);
        return 0;
    case VAR23:
        return FUN11(VAR4, VAR2, VAR8);
    default:
        FUN6(VAR9, VAR17, "", VAR7);
        FUN12(VAR2, 8 * VAR8);
        return 0;
    }
}