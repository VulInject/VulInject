static void FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4;
    uint32_t VAR5;
    bool VAR6;
    FUN2();
    FUN3(VAR2, 0xf0000, 0x100000, (VAR2->VAR7.VAR8[VAR9] >> 4) & 3, &VAR2->VAR10[0]);
    for (VAR3 = 0; VAR3 < 12; VAR3++)
    {
        VAR4 = (VAR2->VAR7.VAR8[(VAR3 >> 1) + (VAR9 + 1)] >> ((VAR3 & 1) * 4)) & 3;
        FUN3(VAR2, 0xc0000 + 0x4000 * VAR3, 0xc0000 + 0x4000 * (VAR3 + 1), VAR4, &VAR2->VAR10[VAR3 + 1]);
    }
    VAR5 = VAR2->VAR7.VAR8[VAR11];
    VAR6 = (VAR2->VAR12 && (VAR5 & 0x08)) || (VAR5 & 0x40);
    FUN4(&VAR2->VAR13, !VAR6);
    FUN5();
}