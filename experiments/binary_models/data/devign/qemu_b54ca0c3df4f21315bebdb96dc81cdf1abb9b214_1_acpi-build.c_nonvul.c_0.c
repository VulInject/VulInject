FUN1(VAR1 *VAR2, VAR1 *VAR3, unsigned VAR4)
{
    VAR5 *VAR6 = FUN2(VAR2, sizeof *VAR6);
    FUN3(VAR3, VAR7, 16, true);
    memcpy(&VAR6->VAR8, "", 8);
    memcpy(VAR6->VAR9, VAR10, 6);
    VAR6->VAR11 = FUN4(VAR4);
    FUN5(VAR3, VAR7, VAR12, VAR2, &VAR6->VAR11, sizeof VAR6->VAR11);
    VAR6->VAR13 = 0;
    FUN6(VAR3, VAR7, VAR2, VAR6, sizeof *VAR6, &VAR6->VAR13);
    return VAR2;
}