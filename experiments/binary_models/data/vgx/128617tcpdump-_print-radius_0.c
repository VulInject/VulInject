static void
FUN1(VAR1 *VAR2,
const VAR3 *VAR4, u_int VAR5, u_short attr_code VAR6)
{
u_int VAR7;
u_int VAR8;
u_int VAR9;
u_int VAR10;

if (VAR5 < 4)
goto VAR11;
VAR8 = FUN2(VAR4);
VAR4+=4;
VAR5-=4;

FUN3("",
FUN4(VAR12,"",VAR8),
VAR8);

while (VAR5 >= 2) {
VAR9 = FUN5(VAR4);
VAR10 = FUN5(VAR4 + 1);

if (VAR10 < 2)
{
FUN3("",
VAR9,
VAR10);
return;
}
if (VAR10 > VAR5)
{
FUN3("",
VAR9,
VAR10);
return;
}
VAR4+=2;
VAR10-=2;
VAR5-=2;
FUN6(VAR4, VAR10);

FUN3("",
VAR9,
VAR10);
for (VAR7 = 0; VAR7 < VAR10 ; VAR7++, VAR4++)
FUN3("", FUN7(FUN5(VAR4)) ? FUN5(VAR4) : '');
VAR5-=VAR10;
}
return;

VAR11:
FUN8(VAR2);
}