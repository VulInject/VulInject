static void FUN1(struct VAR1 *VAR2, int VAR3)
{
    hwaddr VAR4 = FUN2(VAR2, VAR3, VAR5);
    FUN3(FUN4("" VAR6 "", VAR7, VAR3, VAR4));
    FUN3(FUN5(VAR3, &VAR2->VAR8[VAR3].VAR9));
    FUN6(VAR4, (void *)&VAR2->VAR8[VAR3].VAR10, sizeof VAR2->VAR8[VAR3].VAR10);
}