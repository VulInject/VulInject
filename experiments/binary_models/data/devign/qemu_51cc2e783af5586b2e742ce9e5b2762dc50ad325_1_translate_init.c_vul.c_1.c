static void FUN1(VAR1 *VAR2, const VAR3 *VAR4)
{
    VAR2->VAR5 = FUN2(sizeof(VAR6));
    switch (VAR4->VAR7)
    {
    case VAR8:
        FUN3(VAR2, VAR4);
        break;
    case VAR9:
        FUN4(VAR2, VAR4);
        break;
    case VAR10:
        FUN5(VAR2, VAR4);
        break;
    case VAR11:
    case VAR12:
    case VAR13:
    default:
        FUN6(VAR2, "");
    }
    VAR2->VAR14 = VAR2->VAR5->VAR15 - 1;
    VAR2->VAR5->VAR16 = VAR2->VAR5->VAR15;
}