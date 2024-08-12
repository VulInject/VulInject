int
FUN1(int VAR1, uint32_t VAR2, struct VAR3 **VAR4)
{
diskaddr_t	VAR5;
uint_t		VAR6;
uint_t		VAR7;
size_t		VAR8;
struct VAR3	*VAR9;
struct uuid	VAR10;

if (FUN2(VAR1, &VAR5, &VAR6) != 0) {
if (VAR11)
(void) fprintf(VAR12,
"");
return (-1);
}

VAR7 = FUN3(VAR2, VAR6);
if ((VAR7 * VAR6) < VAR13 + VAR6) {

VAR7 = VAR13 / VAR6 + 1;
}

if (VAR2 > VAR14) {
if (VAR11) {
(void) fprintf(VAR12,
"",
VAR14);
}
return (-1);
}

VAR8 = sizeof (struct VAR3) +
sizeof (struct VAR15) * (VAR2 - 1);

if ((*VAR4 = calloc(1, VAR8)) == NULL)
return (-1);

VAR9 = *VAR4;

VAR9->VAR16 = VAR17;
VAR9->VAR18 = VAR6;
VAR9->VAR19 = VAR2;

VAR9->VAR20 = VAR7 + 1;
VAR9->VAR21 = VAR5 - 1;
VAR9->VAR22 = VAR5 -1;
VAR9->VAR23 = VAR9->VAR21 - VAR7;

(void) FUN4((VAR24 *)&VAR10);
FUN5(VAR9->VAR25, VAR10);
return (0);
}