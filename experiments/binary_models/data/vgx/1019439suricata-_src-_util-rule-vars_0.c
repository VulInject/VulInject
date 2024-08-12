static int FUN1(void)
{
FUN2();
FUN3();
FUN4(VAR1, strlen(VAR1));
VAR2 *VAR3 = FUN5();
FUN6(VAR3);
VAR3->VAR4 |= VAR5;

VAR6 *VAR7 = FUN7(
VAR3, ""Rule Vars VAR8\"");
FUN8(VAR7);
VAR7 = FUN7(
VAR3, ""Rule Vars VAR8\"");
FUN8(VAR7);
VAR7 = FUN7(VAR3,
""Rule Vars VAR8\"");
FUN8(VAR7);
VAR7 = FUN7(VAR3,
""Rule Vars VAR8\"");
FUN8(VAR7);

FUN9(VAR3);
FUN10();
FUN11();
VAR9;
}