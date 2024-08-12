static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = &VAR4->VAR8;
    int64_t VAR9;
    uint64_t VAR10;
    int VAR11;
    AVRational VAR12;
    VAR2->VAR13 = FUN2(VAR7) - 8;
    VAR9 = FUN3(VAR2, VAR7, 1);
    VAR9 += FUN2(VAR7) - 4;
    VAR10 = FUN4(VAR7);
    FUN4(VAR7);
    VAR12 = VAR2->VAR12[VAR10 % VAR2->VAR14];
    for (VAR11 = 0; VAR11 < VAR4->VAR15; VAR11++)
    {
        VAR2->VAR16[VAR11].VAR17 = FUN5(VAR10 / VAR2->VAR14, VAR12.VAR18 * (VAR19)VAR2->VAR16[VAR11].VAR12.VAR20, VAR12.VAR20 * (VAR19)VAR2->VAR16[VAR11].VAR12.VAR18, VAR21);
    }
    if (FUN6(VAR7, VAR9) || FUN7(VAR7))
    {
        FUN8(VAR4, VAR22, "");
        return -1;
    }
    return 0;
}