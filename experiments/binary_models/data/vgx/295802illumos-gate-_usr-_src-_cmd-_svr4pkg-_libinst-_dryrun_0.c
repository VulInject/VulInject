static void
FUN1(char *VAR1)
{
struct VAR2 **VAR3;

if (VAR4 == -1) {
if ((VAR4 = FUN2(VAR5,
sizeof (struct VAR2), "")) == -1)
return;
}

VAR3 = &(VAR6.VAR7);

while (*VAR3 != NULL)
VAR3 = &((*VAR3)->VAR8);


*VAR3 = (struct VAR2 *)FUN3(VAR4);
VAR6.VAR9++;

(void) snprintf((*VAR3)->VAR10, VAR11, "",
(VAR1 ? VAR1 : ""), ((VAR12 == 0) ? "" : ""));
}