static struct VAR1 *FUN1(struct VAR1 *VAR2, const char *VAR3)
{
struct VAR1 *VAR4 = NULL;
struct VAR5 *VAR5, *VAR6, *VAR7;
char *VAR8;

if (VAR3[0] == '')
return VAR2;

VAR8 = FUN2(VAR3);

VAR5 = FUN3(VAR8, strlen(VAR8), &VAR7);
if (!VAR5)
goto free;
if (FUN4(VAR5) != VAR9)
goto free;
VAR5 = VAR5->VAR10;

VAR4 = VAR2;
while (FUN4(VAR5) == VAR11 &&
(VAR5->VAR12 == VAR13 || VAR5->VAR12 == '')) {
VAR6 = VAR5;
VAR5 = VAR5->VAR10;
if (FUN4(VAR5) != VAR14)
goto free;
switch (VAR6->VAR12) {
case VAR13:
VAR4 = FUN5(VAR4);
VAR4 = FUN6(VAR4, '', VAR5->VAR15);
break;
case '':
VAR4 = FUN6(VAR4, '', VAR5->VAR15);
break;
default:
goto free;
}
VAR5 = VAR5->VAR10;
}

if (FUN4(VAR5) != VAR16)
goto free;

free:
FUN7(VAR8);

return VAR4;
}