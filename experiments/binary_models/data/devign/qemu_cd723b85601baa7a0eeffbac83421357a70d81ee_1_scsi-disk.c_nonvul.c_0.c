static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = FUN2(VAR3, VAR2, VAR2);
    VAR5 *VAR6 = FUN2(VAR5, VAR7, VAR4->VAR2.VAR8);
    VAR9 *VAR10 = (VAR9 *)FUN3(FUN4(VAR6));
    assert(VAR4->VAR2.VAR11 == NULL);
    FUN5(&VAR4->VAR2);
    if (VAR4->VAR2.VAR12.VAR13 != VAR14)
    {
        FUN6("");
        FUN7(VAR4, -VAR15);
        return;
    }
    if (!VAR4->VAR2.VAR16 && !VAR4->VAR17.VAR18)
    {
        VAR4->VAR19 = true;
        FUN7(VAR4, 0);
        return;
    }
    if (!FUN8(VAR2->VAR8->VAR20.VAR21))
    {
        FUN7(VAR4, -VAR22);
        return;
    }
    if (VAR4->VAR2.VAR12.VAR23[0] == VAR24 || VAR4->VAR2.VAR12.VAR23[0] == VAR25 || VAR4->VAR2.VAR12.VAR23[0] == VAR26)
    {
        if (VAR4->VAR2.VAR16)
        {
            FUN9(VAR4, 0);
        }
        else
        {
            FUN7(VAR4, 0);
        }
        return;
    }
    if (VAR4->VAR2.VAR16)
    {
        FUN10(VAR6->VAR7.VAR20.VAR21, &VAR4->VAR27, VAR4->VAR2.VAR16, VAR28);
        VAR4->VAR2.VAR29 -= VAR4->VAR2.VAR16->VAR18;
        VAR4->VAR2.VAR11 = FUN11(FUN12(VAR6->VAR7.VAR20.VAR21), VAR4->VAR2.VAR16, VAR4->VAR30 << VAR31, VAR10->VAR32, VAR4, VAR33, VAR4, VAR34);
    }
    else
    {
        FUN13(FUN14(VAR6->VAR7.VAR20.VAR21), &VAR4->VAR27, VAR4->VAR17.VAR18, VAR28);
        VAR4->VAR2.VAR11 = VAR10->FUN15(VAR4->VAR30 << VAR31, &VAR4->VAR17, VAR35, VAR4, VAR4);
    }
}