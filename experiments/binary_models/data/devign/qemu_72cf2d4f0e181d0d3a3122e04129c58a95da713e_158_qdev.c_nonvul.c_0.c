static void FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7;
    FUN2(""%VAR8\"", VAR4->VAR9->VAR10, VAR4->VAR11 ? VAR4->VAR11 : "");
    VAR5 += 2;
    if (VAR4->VAR12)
    {
        FUN2("", VAR4->VAR12);
    }
    if (VAR4->VAR13)
    {
        FUN2("", VAR4->VAR13);
    }
    FUN3(VAR2, VAR4, VAR4->VAR9->VAR14, "", VAR5);
    FUN3(VAR2, VAR4, VAR4->VAR15->VAR9->VAR14, "", VAR5);
    if (VAR4->VAR15->VAR9->VAR16)
        VAR4->VAR15->VAR9->FUN4(VAR2, VAR4, VAR5);
    FUN5(VAR7, &VAR4->VAR17, VAR18) { FUN6(VAR2, VAR7, VAR5); }
}