static void FUN1(VAR1 *VAR2, int VAR3)
{
    FUN2(VAR2, 1, "", VAR4, VAR3 ? "" : "");
    FUN3();
    VAR2->VAR5.VAR6->FUN4(VAR2->VAR5.VAR6);
    VAR2->VAR5.VAR6->FUN5(VAR2->VAR5.VAR6);
    FUN6();
    FUN7(VAR2);
    FUN8(VAR2);
    if (!VAR3)
    {
        FUN9(VAR2);
    }
    FUN10(&VAR2->VAR5);
    FUN11(VAR2);
    FUN2(VAR2, 1, "", VAR4);
}