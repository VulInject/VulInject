static void FUN1(void)
{
VAR1 *VAR2;
VAR3 *VAR4;
VAR5 *VAR6;
VAR5 *VAR7;

VAR4 = FUN2("");
VAR2 = FUN3(VAR4);

FUN4(FUN5(VAR2, VAR8), ==, VAR9);

VAR6 = FUN6(VAR5, VAR10);
VAR7 = FUN6(VAR5, VAR9);

FUN7(VAR2, VAR6, sizeof(VAR5) * VAR10);
FUN7(VAR2, VAR7, sizeof(VAR5) * VAR9);

if (VAR9) {
FUN8(VAR6[0] & 0x01);
FUN4(VAR7[0], ==, VAR11);
}

FUN9(VAR7);
FUN9(VAR6);
FUN10(VAR2);
FUN11(VAR4);
}