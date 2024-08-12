static void FUN1(void *private, bool VAR1, uint32_t VAR2, uint32_t VAR3)
{
    int VAR4 = 0;
    VAR5 *VAR6;
    MSIMessage VAR7;
    FUN2(VAR6, &VAR8, VAR9)
    {
        VAR4++;
        VAR7 = FUN3(VAR6->VAR10, VAR6->VAR11);
        FUN4(VAR12, VAR6->VAR13, VAR7, VAR6->VAR10);
    }
    FUN5(VAR12);
    FUN6(VAR4);
}