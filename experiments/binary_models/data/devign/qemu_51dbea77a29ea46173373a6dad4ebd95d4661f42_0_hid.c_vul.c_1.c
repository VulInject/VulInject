void FUN1(VAR1 *VAR2)
{
    switch (VAR2->VAR3)
    {
    case VAR4:
        memset(VAR2->VAR5.VAR6, 0, sizeof(VAR2->VAR5.VAR6));
        memset(VAR2->VAR5.VAR7, 0, sizeof(VAR2->VAR5.VAR7));
        VAR2->VAR5.VAR8 = 0;
        break;
    case VAR9:
    case VAR10:
        memset(VAR2->VAR11.VAR12, 0, sizeof(VAR2->VAR11.VAR12));
        break;
    }
    VAR2->VAR13 = 0;
    VAR2->VAR14 = 0;
    VAR2->VAR15 = 1;
    VAR2->VAR16 = 0;
    VAR2->VAR17 = false;
    FUN2(VAR2);