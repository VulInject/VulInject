static int FUN1(void *VAR1)
{
const unsigned long VAR2 = 509; 
struct VAR3 *VAR4 = VAR1;
struct VAR5 *VAR6;
unsigned long VAR7;
int VAR8;



VAR6 = FUN2(VAR4,
VAR2 * VAR9,
FUN3(VAR4)->VAR10->VAR11.VAR12 + VAR9);
if (FUN4(VAR6))
return FUN5(VAR6);

VAR8 = FUN6(VAR6);
if (VAR8) {
FUN7("",
VAR2, VAR6->VAR13.VAR14 / VAR9, VAR8);
goto VAR15;
}

for (VAR7 = 0; VAR7 < VAR6->VAR13.VAR14 / VAR9; VAR7++) {
if (FUN8(VAR6, VAR7) !=
FUN8(VAR6, VAR7 % VAR2)) {
FUN7("",
VAR7, VAR7 % VAR2);
VAR8 = -VAR16;
goto VAR17;
}
}

VAR17:
FUN9(VAR6);
VAR15:
FUN10(VAR6);
return VAR8;
}