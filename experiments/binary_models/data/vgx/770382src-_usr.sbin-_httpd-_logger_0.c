int
FUN1(struct VAR1 *VAR1)
{
char			*VAR2;
uint32_t		 VAR3;
struct VAR4	*VAR5;
struct VAR6		*VAR7;

FUN2(VAR1, &VAR3);
memcpy(&VAR3, VAR1->VAR8, sizeof(VAR3));

if ((VAR5 = FUN3(VAR3)) == NULL)
FUN4("");

if (VAR1->VAR9.VAR10 == VAR11)
VAR7 = VAR5->VAR12;
else
VAR7 = VAR5->VAR13;

if (VAR7 == NULL || VAR7->VAR14 == -1) {
FUN5("", VAR7 ? VAR7->VAR15 : "");
return (0);
}


VAR2 = (char *)VAR1->VAR8 + sizeof(VAR3);


FUN6("", VAR2);

if (FUN7(VAR7->VAR14, "", VAR2) == -1) {
if (FUN8() == -1)
return (-1);
}

return (0);
}