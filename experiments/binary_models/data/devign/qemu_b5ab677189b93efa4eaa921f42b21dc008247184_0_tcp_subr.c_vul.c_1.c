FUN1(struct VAR1 *VAR2)
{
    FUN2("");
    FUN3("", VAR2);
    switch (VAR2->VAR3)
    {
    case VAR4:
    case VAR5:
    case VAR6:
        VAR2->VAR3 = VAR4;
        VAR2 = FUN4(VAR2);
        break;
    case VAR7:
    case VAR8:
        VAR2->VAR3 = VAR9;
        break;
    case VAR10:
        VAR2->VAR3 = VAR11;
        break;
    }
    if (VAR2)
        FUN5(VAR2);
}