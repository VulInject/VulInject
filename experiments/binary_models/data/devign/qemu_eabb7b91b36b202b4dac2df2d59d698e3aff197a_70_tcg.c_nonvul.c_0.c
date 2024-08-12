static void FUN1(int VAR1)
{
    VAR2 *VAR3 = &VAR4;
    VAR5 *VAR6;
    int VAR7;
    VAR3->VAR8--;
    if (VAR3->VAR8 < 0)
    {
        fprintf(VAR9, "");
    }
    FUN2(VAR1 >= VAR3->VAR10 && VAR1 < VAR3->VAR11);
    VAR6 = &VAR3->VAR12[VAR1];
    FUN2(VAR6->VAR13 != 0);
    VAR6->VAR13 = 0;
    VAR7 = VAR6->VAR14 + (VAR6->VAR15 ? VAR16 : 0);
    FUN3(VAR1, VAR3->VAR17[VAR7].VAR18);
}