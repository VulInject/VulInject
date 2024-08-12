void FUN1(VAR1 **VAR2)
{
    VAR1 *VAR3 = *VAR2;
    VAR4 *VAR5 = (VAR3->VAR6 && (VAR3->VAR6->VAR7 & VAR8)) || (VAR3->VAR7 & VAR9) ? NULL : VAR3->VAR5;
    FUN2(VAR3);
    if (VAR3->VAR6 && (VAR3->VAR6->VAR10))
        VAR3->VAR6->FUN3(VAR3);
    FUN4(VAR3);
    *VAR2 = NULL;
    if (VAR5)
        FUN5(VAR5);
}