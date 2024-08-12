}
FUN1(VAR1);

void FUN2(u32 VAR2, u32 VAR3, u32 VAR4)
{
u32 VAR5;

if (VAR3 < VAR6) {
VAR5 = FUN3(VAR2, VAR7);
switch (VAR4) {
case 16:
VAR5 |= FUN4(VAR3);
break;

case 32:
VAR5 &= ~FUN4(VAR3);
break;
}
FUN5(VAR2, VAR7, VAR5);
}
}