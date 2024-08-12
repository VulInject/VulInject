static enum VAR1 FUN1(
struct VAR2 *VAR3,
VAR4 *VAR5)
{
enum connect_result VAR6;
HANDLE VAR7[2];
DWORD VAR8;

VAR6 = FUN2(VAR3, VAR5);
if (VAR6 != VAR9)
return VAR6;

VAR7[0] = VAR3->VAR10->VAR11;
VAR7[1] = VAR5->VAR12;

VAR8 = FUN3(2, VAR7, VAR13, VAR14);
switch (VAR8) {
case VAR15 + 0:
return VAR16;

case VAR15 + 1:
FUN4(VAR5->VAR12);
return VAR17;

default:
return VAR18;
}
}