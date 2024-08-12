static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    const char *VAR6 = VAR5 ? "" : VAR7;
    enum FLACExtradataFormat VAR8;
    VAR9 *VAR10;
    VAR9 *VAR11;
    if (!FUN2(VAR2, &VAR8, &VAR10))
        return -1;
    VAR4->VAR12[0] = 51;
    VAR4->VAR13[0] = FUN3(51);
    VAR11 = VAR4->VAR13[0];
    FUN4(&VAR11, 0x7F);
    FUN5(&VAR11, "", 4);
    FUN4(&VAR11, 1);
    FUN4(&VAR11, 0);
    FUN6(&VAR11, 1);
    FUN5(&VAR11, "", 4);
    FUN4(&VAR11, 0x00);
    FUN7(&VAR11, 34);
    FUN5(&VAR11, VAR10, VAR14);
    VAR4->VAR12[1] = 1 + 3 + 4 + strlen(VAR6) + 4;
    VAR4->VAR13[1] = FUN3(VAR4->VAR12[1]);
    VAR11 = VAR4->VAR13[1];
    FUN4(&VAR11, 0x84);
    FUN7(&VAR11, VAR4->VAR12[1] - 4);
    FUN8(&VAR11, strlen(VAR6));
    FUN5(&VAR11, VAR6, strlen(VAR6));
    FUN8(&VAR11, 0);
    return 0;