static void FUN1(void)
{
    VAR1 *VAR2, *VAR3, *VAR4;
    VAR5 *VAR6;
    VAR2 = FUN2(sizeof(VAR1));
    VAR2->VAR7 = 42;
    VAR2->VAR8 = FUN3("");
    FUN4(VAR2);
    VAR3 = FUN2(sizeof(VAR1));
    VAR3->VAR7 = 43;
    VAR3->VAR8 = FUN3("");
    VAR4 = FUN2(sizeof(VAR1));
    VAR4->VAR7 = 44;
    VAR4->VAR8 = FUN3("");
    VAR6 = FUN2(sizeof(VAR5));
    VAR6->VAR9 = VAR3;
    VAR6->VAR10 = FUN2(sizeof(VAR5));
    VAR6->VAR10->VAR9 = VAR4;
    FUN5(VAR6);
}