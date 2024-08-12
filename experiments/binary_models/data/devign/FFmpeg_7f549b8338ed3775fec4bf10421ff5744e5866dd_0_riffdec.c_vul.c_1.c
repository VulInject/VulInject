static void FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    ff_asf_guid VAR5;
    VAR4->VAR6 = FUN2(VAR2);
    VAR4->VAR7 = FUN3(VAR2);
    FUN4(VAR2, &VAR5);
    if (!memcmp(VAR5 + 4, (const VAR8[]){VAR9}, 12))
    {
        VAR4->VAR10 = FUN5(VAR5);
        VAR4->VAR11 = FUN6(VAR4->VAR10, VAR4->VAR6);
    }
    else
    {
        VAR4->VAR11 = FUN7(VAR12, VAR5);
        if (!VAR4->VAR11)
            FUN8(VAR2, VAR13, "" VAR14 "", FUN9(VAR5));
    }
}