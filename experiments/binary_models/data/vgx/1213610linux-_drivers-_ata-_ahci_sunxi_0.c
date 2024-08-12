static bool VAR1;
FUN1(VAR1, bool, 0);
FUN2(VAR1,
"");


static void FUN3(void VAR2 *VAR3, u32 VAR4)
{
u32 VAR5;

VAR5 = FUN4(VAR3);
VAR5 &= ~(VAR4);
FUN5(VAR5, VAR3);
}