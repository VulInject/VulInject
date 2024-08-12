static int FUN1(unsigned short VAR1)
{
u16 VAR2 = FUN2(VAR1);
u16 VAR3 = FUN3(VAR1);
s8 VAR4 = VAR5[VAR2];
u16 VAR6, VAR7, VAR8, VAR9;

if (VAR4 < 0)
return 0;

VAR7 = FUN4();
for (VAR6 = 0; VAR6 < FUN5(VAR5); ++VAR6) {
if (VAR6 == VAR2)
continue;
if (VAR5[VAR6] != VAR4)
continue;
if (!FUN6(VAR10, VAR6, 1))
continue;

if (VAR4 == 1)
VAR9 = 3;
else
VAR9 = 1;

VAR8 = (VAR7 >> VAR4) & VAR9;
if (VAR8 != (VAR3 & VAR9)) {
FUN7("",
VAR2, VAR3, VAR6, VAR8);
return -VAR11;
}
}

return 0;
}