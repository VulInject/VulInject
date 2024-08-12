static void FUN1(void)
{
    VAR1 *VAR2;
    VAR2 = FUN2(NULL, "");
    FUN3(VAR2, "", 0x20000000);
    FUN4(VAR2);
    FUN5(FUN6(VAR2), 0, 0x22000000);
    VAR2 = FUN2(NULL, "");
    FUN3(VAR2, "", 0x40000000);
    FUN4(VAR2);
    FUN5(FUN6(VAR2), 0, 0x42000000);
}