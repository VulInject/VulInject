static void FUN1(void *VAR1)
{
    struct VAR2 *VAR3 = VAR1;
    if (VAR3->VAR4)
        FUN2(VAR3->VAR5, FUN3(VAR6) + VAR3->VAR7 - VAR3->VAR8);
    else
        FUN2(VAR3->VAR5, FUN3(VAR6) + VAR3->VAR8);
    VAR3->VAR4 = !VAR3->VAR4;
    FUN4("", VAR9, VAR3->VAR4 ? "" : "");
}