static void FUN1(VAR1 *VAR2, int VAR3, int VAR4, uint32_t VAR5)
{
    switch (VAR4)
    {
    case 0x00:
        VAR2->VAR6[VAR3] = (VAR5 & 1);
        FUN2("", VAR3, VAR2->VAR6 ? "" : "");
        break;
    case 0x04:
        VAR2->VAR7[VAR3] = (VAR5 & 0xff);
        break;
    case 0x08:
        break;
    case 0x10:
        return FUN3(VAR2, VAR3, VAR5 & 0x3ff);
    default:
        FUN4("", (int)VAR4);
        return;
    }
    FUN5(VAR2);
}