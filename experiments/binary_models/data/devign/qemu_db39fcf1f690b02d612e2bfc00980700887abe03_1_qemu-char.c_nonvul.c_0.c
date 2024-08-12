static VAR1 *FUN1(int VAR2)
{
    VAR1 *VAR3 = NULL;
    VAR4 *VAR5 = NULL;
    VAR3 = FUN2();
    VAR5 = FUN3(sizeof(VAR4));
    VAR5->VAR2 = VAR2;
    VAR5->VAR6 = FUN4(VAR5->VAR2);
    VAR5->VAR7 = 0;
    VAR5->VAR8 = 0;
    VAR3->VAR9 = VAR5;
    VAR3->VAR10 = VAR11;
    VAR3->VAR12 = VAR13;
    VAR3->VAR14 = VAR15;
    VAR3->VAR16 = true;
    return VAR3;
}