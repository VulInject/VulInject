static int FUN1(void *VAR1)
{
unsigned long VAR2 = VAR3;

FUN2(VAR4, 0);

for ( ; ; ) {
unsigned long VAR5 = VAR6;
unsigned long VAR7 = VAR8;
long VAR9;

if (VAR7 == 0)
VAR7 = VAR5;
VAR7 = FUN3(unsigned long, VAR7, VAR5);
VAR9 = FUN4(VAR2, VAR7);
if (VAR9 <= 0) {
if (!FUN5(&VAR10, 0) &&
!VAR11)
FUN6(VAR5);
VAR2 = VAR3;
continue;
}
FUN7(VAR9);
}

return 0;
}