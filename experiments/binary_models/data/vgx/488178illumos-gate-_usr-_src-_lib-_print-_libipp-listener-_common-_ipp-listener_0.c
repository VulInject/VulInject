static VAR1
FUN1(VAR2 **VAR3,
VAR2 ***VAR4)
{
VAR2 **VAR5 = NULL;
int VAR6;

if ((VAR3 == NULL) || (VAR4 == NULL))
return (VAR7);


if (*VAR4 != NULL) {
FUN2(*VAR4);
*VAR4 = NULL;
}


(void) FUN3(VAR3, NULL, "", &VAR6);
(void) FUN4(VAR4, VAR8,
"", VAR6);
(void) FUN3(VAR3, NULL, "", &VAR6);
(void) FUN4(VAR4, VAR8,
"", VAR6);

(void) FUN3(VAR3, NULL, "", &VAR6);
(void) FUN4(VAR4, VAR8,
"", VAR6);


(void) FUN5(&VAR5, VAR9,
"", "");
(void) FUN5(&VAR5, VAR9,
"", "");

(void) FUN6(VAR4, VAR8,
"", VAR5);
FUN2(VAR5);

return (VAR10);
}