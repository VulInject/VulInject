FUN1 (void)
{
char *VAR1;
(VAR2 ? VAR3 : VAR4).VAR4[0];
(VAR2, VAR3).VAR4[0];
(VAR5 = VAR3).VAR4[0];
VAR1 = (VAR2 ? VAR3 : VAR4).VAR4;
VAR1 = (VAR2, VAR3).VAR4;
VAR1 = (VAR5 = VAR3).VAR4;
(VAR2 ? VAR3 : VAR4).VAR4 + 1;
(VAR2, VAR3).VAR4 + 1;
(VAR5 = VAR3).VAR4 + 1;
}