static VAR1
FUN1(const char *VAR2, const char *VAR3)
{
struct format_parser_state VAR4;

if (VAR2 == NULL)
return NULL;

memset(&VAR4, 0, sizeof(VAR4));
VAR4.VAR5 = VAR4.VAR6 = FUN2(VAR7);
VAR4.VAR8 = VAR4.VAR2 = VAR2;
VAR4.VAR9 = VAR3;

while (1)
{
while (FUN3((int)VAR4.VAR8[0]) && VAR4.VAR8[0] != '')
VAR4.VAR8++;

switch (VAR4.VAR8[0])
{
case '':
if (VAR4.VAR10
|| VAR4.VAR11)
FUN4(&VAR4, "");
return VAR4.VAR5;
case '':
FUN5(&VAR4);
break;
case '':
FUN6(&VAR4);
break;
case '':
FUN7(&VAR4);
break;
case '':
FUN8(&VAR4);
break;
case '':
FUN9(&VAR4);
break;
default:
FUN10(&VAR4);
}
}
}