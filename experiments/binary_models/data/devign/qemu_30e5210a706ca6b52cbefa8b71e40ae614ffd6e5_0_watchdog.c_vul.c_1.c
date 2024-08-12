void FUN1(void)
{
    switch (VAR1)
    {
    case VAR2:
        FUN2(VAR3, &VAR4);
        FUN3();
        break;
    case VAR5:
        FUN2(VAR6, &VAR4);
        FUN4();
        break;
    case VAR7:
        FUN2(VAR8, &VAR4);
        FUN5(0);
    case VAR9:
        FUN2(VAR10, &VAR4);
        FUN6(VAR11);
        break;
    case VAR12:
        FUN2(VAR13, &VAR4);
        fprintf(VAR14, "");
        break;
    case VAR15:
        FUN2(VAR16, &VAR4);
        break;
    }
}