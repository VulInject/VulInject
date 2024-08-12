static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR4->VAR5 = (unsigned short)FUN2(VAR2);
    VAR4->VAR6 = FUN3(VAR2);
    VAR4->VAR7 = FUN3(VAR2);
    VAR4->VAR8 = (unsigned short)FUN2(VAR2);
    VAR4->VAR9 = (unsigned short)FUN2(VAR2);
    VAR4->VAR10 = (unsigned short)FUN2(VAR2);
    VAR4->VAR11 = (unsigned short)FUN2(VAR2);
    FUN4("");
    FUN4("", VAR4->VAR5);
    FUN4("", VAR4->VAR6);
    FUN4("", VAR4->VAR7);
    FUN4("", VAR4->VAR8);
    FUN4("", VAR4->VAR9);
    FUN4("", VAR4->VAR10);
    FUN4("", VAR4->VAR11);
    return;