static void FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = VAR2->VAR5;
    VAR6 *VAR7 = VAR4->VAR8;
    VAR1 *VAR9 = VAR2->VAR5->VAR10[0];
    VAR11 *VAR12 = VAR2->VAR13;
    VAR11 *VAR14 = VAR9->VAR15;
    IplImage VAR16, VAR17;
    FUN2(&VAR16, VAR12, VAR2->VAR18);
    FUN2(&VAR17, VAR14, VAR2->VAR18);
    VAR7->FUN3(VAR4, &VAR16, &VAR17);
    FUN4(VAR14, &VAR17, VAR2->VAR18);
    FUN5(VAR9, 0, VAR9->VAR19, 1);
    FUN6(VAR9);
    FUN7(VAR14);
}