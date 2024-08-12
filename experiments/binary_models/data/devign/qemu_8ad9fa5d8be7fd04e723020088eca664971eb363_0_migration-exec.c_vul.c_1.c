VAR1 *FUN1(const char *VAR2, int64_t VAR3, int VAR4)
{
    VAR5 *VAR6;
    VAR7 *VAR8;
    VAR6 = FUN2(sizeof(*VAR6));
    if (VAR6 == NULL)
    {
        FUN3("");
        goto VAR9;
    }
    VAR8 = popen(VAR2, "");
    if (VAR8 == NULL)
    {
        FUN3("");
        goto VAR10;
    }
    VAR6->VAR11 = FUN4(VAR8);
    if (VAR6->VAR11 == -1)
    {
        FUN3("");
        goto VAR12;
    }
    if (FUN5(VAR6->VAR11, VAR13, VAR14) == -1)
    {
        FUN3("");
        goto VAR12;
    }
    VAR6->VAR15 = FUN6(VAR8, "");
    VAR6->VAR16 = VAR17;
    VAR6->write = VAR18;
    VAR6->VAR19.VAR20 = VAR21;
    VAR6->VAR19.VAR22 = VAR23;
    VAR6->VAR19.VAR24 = VAR25;
    VAR6->VAR26 = VAR27;
    VAR6->VAR28 = !VAR4;
    VAR6->VAR3 = VAR3;
    if (VAR6->VAR28 == 1)
    {
        FUN3("");
        FUN7();
        VAR6->VAR28 = 2;
    }
    FUN8(VAR6);
    return &VAR6->VAR19;
VAR12:
    FUN9(VAR8);
VAR10:
    FUN10(VAR6);
VAR9:
    return NULL;