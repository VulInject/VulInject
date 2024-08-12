static VAR1 *FUN1(VAR2 *VAR3, VAR4 **VAR5)
{
    VAR1 *VAR6;
    VAR7 *VAR8;
    VAR6 = FUN2();
    VAR8 = FUN3(sizeof(*VAR8));
    VAR8->VAR9 = VAR3->VAR10 ? VAR3->VAR9 : 65536;
    if (VAR8->VAR9 & (VAR8->VAR9 - 1))
    {
        FUN4(VAR5, "");
        goto VAR11;
    }
    VAR8->VAR12 = 0;
    VAR8->VAR13 = 0;
    VAR8->VAR14 = FUN5(VAR8->VAR9);
    VAR6->VAR15 = VAR8;
    VAR6->VAR16 = VAR17;
    VAR6->VAR18 = VAR19;
    return VAR6;
VAR11:
    FUN6(VAR8);
    FUN6(VAR6);
    return NULL;
}