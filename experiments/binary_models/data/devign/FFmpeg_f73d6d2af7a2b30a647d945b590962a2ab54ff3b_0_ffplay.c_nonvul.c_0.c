static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4;
    int64_t VAR5;
    VAR4 = &VAR2->VAR6[VAR2->VAR7];
    if (VAR4->VAR8)
        FUN2(VAR4->VAR8);
    FUN3(VAR2, 0, VAR4);
    VAR4->VAR8 = FUN4(VAR4->VAR9, VAR4->VAR10, VAR11, VAR12);
    VAR5 = VAR4->VAR8 ? FUN5(VAR4->VAR8->VAR13[0], VAR4->VAR8->VAR13[1]) - FUN6(VAR4->VAR8->VAR13[0], VAR4->VAR8->VAR13[1]) : 0;
    if (!VAR4->VAR8 || VAR4->VAR8->VAR14[0] < VAR4->VAR9 || VAR5 < (VAR15)VAR4->VAR10 * VAR4->VAR8->VAR14[0])
    {
        FUN7(NULL, VAR16, ""
                                   ""VAR17=VAR18:VAR19\""
                                   "",
               VAR4->VAR9, VAR4->VAR10);
        FUN8(VAR2);
    }
    FUN9(VAR2->VAR20);
    VAR4->VAR21 = 1;
    FUN10(VAR2->VAR22);
    FUN11(VAR2->VAR20);
}