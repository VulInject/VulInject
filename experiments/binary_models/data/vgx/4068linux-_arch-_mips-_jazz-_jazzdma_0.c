void FUN1(int VAR1)
{
int VAR2;

if (VAR3)
FUN2("", VAR1);


VAR2 = FUN3(VAR4 + (VAR1 << 5));
if (VAR2 & 0x400)
FUN2("", VAR1);
if (VAR2 & 0x200)
FUN2("", VAR1);


FUN4(VAR4 + (VAR1 << 5),
FUN3(VAR4 +
(VAR1 << 5)) | VAR5
| VAR6 | VAR7);


FUN4(VAR4 + (VAR1 << 5),
FUN3(VAR4 +
(VAR1 << 5)) |
VAR8);
}