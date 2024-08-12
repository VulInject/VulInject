static int
FUN1(VAR1 *VAR2, const char *VAR3, boolean_t VAR4)
{
VAR5 *VAR6, *VAR7 = NULL;


if (VAR4)
VAR7 = FUN2(sizeof (*VAR6), VAR8);

FUN3(&VAR9, VAR10);
for (VAR6 = FUN4(&VAR11); VAR6 != NULL;
VAR6 = FUN5(&VAR11, VAR6)) {
if (strcmp(VAR6->VAR12, VAR3) == 0)
break;
}
if (VAR6 == NULL) {
if (!VAR4 || VAR7 == NULL) {
FUN6(&VAR9);
return (VAR4 ? VAR13 : VAR14);
}

VAR6 = VAR7;
VAR7 = NULL;
(void) strcpy(VAR6->VAR12, VAR3);


VAR6->VAR15 = FUN7(VAR3, VAR6);
if (VAR6->VAR15 == NULL) {
FUN6(&VAR9);
FUN8(VAR6, sizeof (*VAR6));
return (VAR14);
}

FUN9(&VAR6->VAR16, NULL, VAR17, NULL);
FUN10(&VAR6->VAR18, sizeof (VAR1),
FUN11(VAR1, VAR19));
FUN12(&VAR11, VAR6);
}
FUN13(&VAR6->VAR20);
FUN6(&VAR9);


if (VAR7 != NULL)
FUN8(VAR7, sizeof (*VAR7));

FUN3(&VAR6->VAR16, VAR10);
FUN12(&(VAR6->VAR18), VAR2);
VAR2->VAR21 = VAR6;
FUN6(&VAR6->VAR16);
return (0);
}