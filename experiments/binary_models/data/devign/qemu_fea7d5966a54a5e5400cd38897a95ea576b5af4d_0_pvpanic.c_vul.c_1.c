static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2);
    FUN3(VAR4, "", FUN4(&VAR6->VAR7, sizeof(VAR6->VAR7)), sizeof(VAR6->VAR7));
}