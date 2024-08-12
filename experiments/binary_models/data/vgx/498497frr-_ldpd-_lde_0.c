static VAR1
FUN1(void)
{
struct VAR2	*VAR2;
uint32_t		 VAR3, VAR4;
uint64_t		 VAR5;
uint32_t		 VAR6 = VAR7;

while (VAR8) {
VAR2 = FUN2(VAR8);
if (!VAR2)
goto VAR9;


VAR4 = VAR2->VAR9 - VAR2->VAR10 + 1;
for (VAR3 = 0, VAR5 = 1; VAR3 < VAR4; VAR3++, VAR5 <<= 1) {
if (!(VAR5 & VAR2->VAR11)) {
FUN3(VAR2->VAR11, VAR5);
VAR6 = VAR2->VAR10 + VAR3;
goto VAR9;
}
}
VAR8 = FUN4(VAR8);
}

VAR9:

if (!VAR8 ||
VAR8 == FUN5(VAR12) ||
VAR6 == VAR7) {
if (FUN6() != 0)
FUN7("", VAR13);

}

return (VAR6);
}