void
FUN1(struct VAR1 *VAR2, ulong_t VAR3)
{
pstatus_t	VAR4;
int		VAR5 = 0;
ulong_t		VAR6;

if (read(VAR2->VAR7, &VAR4, sizeof (VAR4)) == -1)
FUN2("");

VAR6 = VAR4.VAR8.VAR9[VAR10];

while ((VAR6 > VAR3) || ((VAR6 + 0xff) < VAR3)) {
(void) FUN3(VAR2, 1, VAR11);
if (read(VAR2->VAR7, &VAR4, sizeof (VAR4)) == -1)
FUN2("");
VAR6 = VAR4.VAR8.VAR9[VAR10];
if ((VAR5 % 10000) == 0) {
(void) FUN4("", VAR5);
FUN5(VAR2, 1);
}

VAR5++;
}

(void) FUN4(""
"", VAR5, VAR6, VAR3);
}