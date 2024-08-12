static int FUN1(void)
{
unsigned long VAR1, VAR2;
int VAR3;

mp_int VAR4, VAR5;
if (FUN2(&VAR4, &VAR5, NULL)!= VAR6) {
return VAR7;
}

for (VAR3 = 0; VAR3 < ((int)FUN3(unsigned long) - 1); ++VAR3) {
VAR2 = (1UL << (VAR3+1)) - 1;
if (!VAR2)
VAR2 = ~0UL;
FUN4("", VAR2, VAR3);
do {
FUN5(&VAR4, VAR2);
VAR1 = FUN6(&VAR4);
if (VAR1 != VAR2) {
FUN4("", VAR1, VAR2);
goto VAR8;
}
VAR2 <<= 1;
} while (VAR2 != 0uL);
}

FUN7(&VAR4, &VAR5, NULL);
return VAR9;
VAR8:
FUN7(&VAR4, &VAR5, NULL);
return VAR7;
}