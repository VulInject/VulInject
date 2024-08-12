int
FUN1(int VAR1, char *VAR2)
{
struct VAR3 *VAR4;
struct VAR5 *VAR6, *VAR7;

VAR8 = 0;
if ((VAR9 == NULL) ||
(VAR9->VAR10 != VAR1))
{
VAR9 = FUN2(VAR1);
if (VAR9 == NULL)
{
VAR8 = VAR11;
return -1;
}
}

VAR4 = VAR9;


if ((VAR6 = VAR4->VAR12) == NULL)
{
VAR8 = VAR11;
return -1;
}


if (!strcmp(VAR6->VAR13, VAR2))
{
VAR4->VAR12 = VAR6->VAR14;
VAR6->VAR14 = NULL;
FUN3(VAR6);
return 0;
}

for (; VAR6->VAR14 != NULL; VAR6 = VAR6->VAR14)
if (!strcmp(VAR6->VAR14->VAR13, VAR2))
{
VAR7 = VAR6->VAR14;
VAR6->VAR14 = VAR7->VAR14;
VAR7->VAR14 = NULL;
FUN3(VAR7);
return 0;
}

VAR8 = VAR11;
return -1;
}