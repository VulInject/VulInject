static void FUN1(VAR1 *VAR2, unsigned char VAR3)
{
    VAR4 *VAR5 = VAR2->VAR6;
    VAR7 *VAR8 = FUN2(VAR5);
    FUN3(VAR2, VAR3);
    FUN4(&VAR2->VAR9->VAR3, VAR3);
    FUN5(VAR5->VAR10, VAR2->VAR11, VAR2->VAR12.VAR13 + sizeof(*VAR2->VAR9));
    FUN6(VAR8, VAR5->VAR10);
}