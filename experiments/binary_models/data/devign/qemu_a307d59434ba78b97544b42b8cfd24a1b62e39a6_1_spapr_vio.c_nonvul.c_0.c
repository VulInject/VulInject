static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = (VAR3 *)VAR2;
    VAR5 *VAR6 = FUN2(VAR4);
    uint32_t VAR7;
    char *VAR8;
    if (VAR4->VAR9 != -1)
    {
        VAR3 *VAR10 = FUN3(VAR4);
        if (VAR10)
        {
            fprintf(VAR11, "", FUN4(FUN5(VAR2)), FUN4(FUN5(&VAR10->VAR2)), VAR4->VAR9);
            return -1;
        }
    }
    else
    {
        VAR12 *VAR13 = FUN6(VAR12, VAR13, VAR4->VAR2.VAR14);
        do
        {
            VAR4->VAR9 = VAR13->VAR15++;
        } while (FUN3(VAR4));
    }
    if (!VAR4->VAR2.VAR8)
    {
        VAR8 = FUN7(VAR4);
        if (!VAR8)
        {
            return -1;
        }
        VAR4->VAR2.VAR8 = VAR8;
    }
    VAR4->VAR16 = FUN8(VAR4->VAR16);
    if (!VAR4->VAR16)
    {
        return -1;
    }
    VAR7 = VAR17 | VAR4->VAR9;
    VAR4->VAR18 = FUN9(VAR7, VAR6->VAR19);
    return VAR6->FUN10(VAR4);
}