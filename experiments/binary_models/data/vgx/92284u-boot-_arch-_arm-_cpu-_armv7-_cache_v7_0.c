static void FUN1(u32 VAR1, u32 VAR2, u32 VAR3)
{
u32 VAR4, VAR5;

VAR5 = FUN2();
VAR4 = ((VAR5 & VAR6) >>
VAR7) + 2;

VAR4 += 2;

VAR4 = 1 << VAR4;

switch (VAR3) {
case VAR8:
FUN3(VAR1, VAR2, VAR4);
break;
case VAR9:
FUN4(VAR1, VAR2, VAR4);
break;
}


FUN5();
}