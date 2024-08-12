int FUN1(VAR1 *VAR2, int VAR3)
{
    int VAR4;
    struct utsname VAR5;
    VAR4 = FUN2(VAR2);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    FUN3(&VAR5);
    VAR6 = strcmp(VAR5.VAR7, "") == 0;
    VAR4 = FUN4(VAR2, VAR8);
    if (VAR4 <= 0)
    {
        fprintf(VAR9, "");
        return VAR4;
    }
    if (FUN5(0xfffbc000, 0x4000, VAR10) < 0)
    {
        FUN6("");
        FUN7(1);
    }
    VAR4 = FUN8(VAR2, VAR11, 0xfffbd000);
    if (VAR4 < 0)
    {
        return VAR4;
    }
    return FUN9(VAR2);
}