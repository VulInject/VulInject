static void
FUN1(struct VAR1 *VAR1)
{
char		  VAR2[VAR3];
struct VAR4	**VAR5;
struct VAR4	 *VAR4;
char		 *VAR6;

VAR1->VAR7 = VAR8;
VAR5 = &VAR1->VAR9;
while (NULL != (VAR4 = *VAR5)) {
if (VAR8 != VAR4->VAR10) {
VAR1->VAR7 = VAR11;
goto VAR12;
}
(void)FUN2(VAR2, VAR4->VAR13, sizeof(VAR2));
VAR6 = strstr(VAR2, "");
assert(NULL != VAR6);
memcpy(VAR6, "", 3);
if (NULL != (VAR6 = strrchr(VAR2, '')))
*++VAR6 = '';
(void)FUN3(VAR2, VAR4->VAR14, sizeof(VAR2));
if (NULL == FUN4(&VAR9,
FUN5(&VAR9, VAR2)))
goto VAR12;
if (VAR15)
FUN6(VAR4->VAR13, "", VAR2);
if (VAR16)
goto VAR12;
*VAR5 = VAR4->VAR17;
FUN7(VAR4);
continue;
VAR12:
VAR5 = &(*VAR5)->VAR17;
}
}