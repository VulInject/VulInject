static void FUN1(VAR1 *VAR2, VAR1 *VAR3)
{
    VAR2->VAR4 = VAR3->VAR4;
    VAR2->VAR5 = VAR3->VAR5;
    VAR2->VAR6 = VAR3->VAR6;
    VAR2->VAR7 = VAR3->VAR7;
    VAR2->VAR8 = VAR3->VAR8;
    VAR2->VAR9 = VAR3->VAR9;
    VAR2->VAR10 = VAR3->VAR10;
    VAR2->VAR11[0] = VAR3->VAR11[0];
    VAR2->VAR11[1] = VAR3->VAR11[1];
    VAR2->VAR12 = VAR3->VAR12;
    if (!VAR2->VAR13[0])
        FUN2(VAR2);
    VAR2->VAR14.VAR15 = NULL;
    FUN3(&VAR2->VAR16, VAR3->VAR14.VAR17);
    VAR2->VAR18 = -1;
}