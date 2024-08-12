static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    VAR5 *VAR6, *VAR7;
    uint8_t VAR8;
    VAR6 = &VAR4->VAR9[0];
    VAR7 = &VAR4->VAR9[VAR4->VAR10 - 1];
    FUN2(VAR4, VAR4->VAR11->VAR12, VAR4->VAR11->VAR13, VAR4->VAR14);
    if (FUN3(*VAR7) == VAR15 && VAR4->VAR10 > 2)
    {
        VAR7--;
    }
    if (FUN3(*VAR6) != VAR16)
    {
        FUN4("", FUN3(*VAR6));
        return -1;
    }
    if (FUN3(*VAR7) != VAR17)
    {
        FUN4("", FUN3(*VAR7));
        return -1;
    }
    if (!(VAR6->VAR18 & VAR19))
    {
        FUN4("");
        return -1;
    }
    if ((VAR6->VAR20 & 0x1ffff) != 8)
    {
        FUN4("", (VAR6->VAR20 & 0x1ffff));
        return -1;
    }
    VAR8 = VAR6->VAR21;
    VAR4->VAR22 = VAR8 & VAR23;
    VAR4->VAR24 = false;
    VAR4->VAR25 = false;
    if (FUN5(VAR4) < 0)
    {
        return -1;
    }
    VAR4->VAR26.VAR21 = VAR6->VAR21;
    FUN6(VAR4->VAR26.VAR27->VAR28, &VAR4->VAR26);
    FUN7(VAR4);
    return 0;
}