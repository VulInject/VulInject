static unsigned char
FUN1(void)
{
fd_set	VAR1, VAR2;
int	VAR3, VAR4;

FUN2(&VAR2);
FUN3(VAR5, &VAR2);
FUN3(VAR6, &VAR2);
VAR4 = (VAR5 > VAR6) ? VAR5 : VAR6;
VAR4++;

VAR7:
do {
VAR8 = 0;
VAR1 = VAR2;
VAR3 = VAR4;
VAR3 = FUN4(VAR3, &VAR1, NULL, NULL, NULL);
} while (VAR3 <= 0 && VAR8 == VAR9);

if (FUN5(VAR6, &VAR1))
FUN6();
if (!FUN5(VAR5, &VAR1))
goto VAR7;
VAR10 = read(VAR5, VAR11, sizeof VAR11);
if (VAR10 <= 0) {
FUN7();
}
VAR12 = VAR11;
VAR10--;
return *VAR12++;
}