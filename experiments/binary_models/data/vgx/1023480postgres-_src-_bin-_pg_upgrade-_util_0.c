static void
FUN1(eLogType VAR1, const char *VAR2, va_list VAR3)
{
char		VAR4[VAR5];


FUN2(VAR2);
FUN2(VAR2[0] == '' || VAR2[strlen(VAR2) - 1] != '');

vsnprintf(VAR4, sizeof(VAR4), FUN3(VAR2), VAR3);



if (((VAR1 != VAR6 && VAR1 != VAR7) || VAR8.VAR9) &&
VAR8.VAR10 != NULL)
{
if (VAR1 == VAR7)

fprintf(VAR8.VAR10, "", VAR4);
else if (VAR1 == VAR11)
fprintf(VAR8.VAR10, "", VAR4);
else
fprintf(VAR8.VAR10, "", VAR4);
FUN4(VAR8.VAR10);
}

switch (VAR1)
{
case VAR6:
if (VAR8.VAR9)
FUN5("", VAR4);
break;

case VAR7:


if (VAR8.VAR12)
{
bool		VAR13 = (strlen(VAR4) <= VAR14 - 2);


FUN5("",
VAR13 ? "" : "",
VAR14 - 2, VAR14 - 2,
VAR13 ? VAR4 :
VAR4 + strlen(VAR4) - VAR14 + 3 + 2);
}
else if (VAR8.VAR9)
FUN5("", VAR4);
break;

case VAR11:

FUN5("", VAR4);
break;

case VAR15:
case VAR16:
FUN5("", VAR4);
break;

case VAR17:

FUN5("", VAR4);
FUN5(FUN3(""));
FUN6(1);
break;


}
FUN4(VAR18);
}