static int FUN1(const char *VAR1, VAR2 *VAR3)
{
    int VAR4 = 0;
    int64_t VAR5 = 0;
    BlockDriverState VAR6;
    VAR7 *VAR8 = NULL;
    VAR9 *VAR10;
    memset(&VAR6, 0, sizeof(VAR11));
    while (VAR3 && VAR3->VAR12)
    {
        if (!strcmp(VAR3->VAR12, ""))
        {
            VAR5 = VAR3->VAR13.VAR14 / VAR15;
        }
        VAR3++;
    }
    VAR6.VAR16 = FUN2(sizeof(struct VAR7));
    VAR8 = VAR6.VAR16;
    VAR10 = FUN3();
    FUN4(VAR10, "", FUN5(VAR1));
    VAR4 = FUN6(&VAR6, VAR10, 0);
    FUN7(VAR10);
    if (VAR4 != 0)
    {
        goto VAR17;
    }
    if (VAR8->VAR18)
    {
        FUN8(VAR8->VAR18);
        FUN9(VAR8->VAR18);
    }
    if (VAR8->VAR19 != VAR20)
    {
        VAR4 = -VAR21;
        goto VAR17;
    }
    if (VAR6.VAR22 < VAR5)
    {
        VAR4 = -VAR23;
        goto VAR17;
    }
    VAR4 = 0;
VAR17:
    if (VAR8->VAR24 != NULL)
    {
        FUN10(VAR8->VAR24);
    }
    FUN11(VAR6.VAR16);
    return VAR4;
}