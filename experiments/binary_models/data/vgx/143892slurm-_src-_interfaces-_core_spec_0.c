extern int FUN1(void)
{
int VAR1, VAR2 = VAR3;

FUN2(&VAR4);
if (!VAR5)
goto VAR6;

for (VAR1 = 0; VAR1 < VAR7; VAR1++) {
if (VAR5[VAR1]) {
if (FUN3(VAR5[VAR1])
!= VAR3) {
VAR2 = VAR8;
}
}
}

FUN4(VAR9);
FUN4(VAR5);
VAR7 = -1;

VAR6:
FUN5(&VAR4);
return VAR2;
}