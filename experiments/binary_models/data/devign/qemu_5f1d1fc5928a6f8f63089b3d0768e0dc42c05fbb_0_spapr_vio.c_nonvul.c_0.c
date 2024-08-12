int FUN1(VAR1 *VAR2, void *VAR3)
{
    VAR4 *VAR5, **VAR6;
    VAR7 *VAR8;
    int VAR9, VAR10, VAR11 = 0;
    VAR10 = 0;
    FUN2(VAR8, &VAR2->VAR2.VAR12, VAR13) { VAR10++; }
    VAR6 = FUN3(sizeof(VAR5) * VAR10);
    VAR10 = 0;
    FUN2(VAR8, &VAR2->VAR2.VAR12, VAR13) { VAR6[VAR10++] = VAR8->VAR14; }
    FUN4(VAR6, VAR10, sizeof(VAR5), VAR15);
    for (VAR9 = VAR10 - 1; VAR9 >= 0; VAR9--)
    {
        VAR16 *VAR17 = (VAR16 *)(VAR6[VAR9]);
        VAR11 = FUN5(VAR17, VAR3);
        if (VAR11 < 0)
        {
            goto VAR18;
        }
    }
    VAR11 = 0;
VAR18:
    FUN6(VAR6);
    return VAR11;
}