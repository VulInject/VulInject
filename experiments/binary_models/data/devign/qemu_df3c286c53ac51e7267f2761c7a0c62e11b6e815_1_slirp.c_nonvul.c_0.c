static void FUN1(VAR1 *VAR2, struct socket *VAR3)
{
    FUN2(VAR2, VAR3->VAR4);
    FUN3(VAR2, VAR3->VAR5);
    switch (VAR3->VAR5)
    {
    case VAR6:
        FUN2(VAR2, VAR3->VAR7.VAR8);
        FUN3(VAR2, VAR3->VAR9);
        break;
    default:
        FUN4(""
                     "");
    }
    FUN3(VAR2, VAR3->VAR10);
    switch (VAR3->VAR10)
    {
    case VAR6:
        FUN2(VAR2, VAR3->VAR11.VAR8);
        FUN3(VAR2, VAR3->VAR12);
        break;
    default:
        FUN4(""
                     "");
    }
    FUN5(VAR2, VAR3->VAR13);
    FUN5(VAR2, VAR3->VAR14);
    FUN5(VAR2, VAR3->VAR15);
    FUN2(VAR2, VAR3->VAR16);
    FUN6(VAR2, &VAR3->VAR17);
    FUN6(VAR2, &VAR3->VAR18);
    FUN7(VAR2, VAR3->VAR19);
}