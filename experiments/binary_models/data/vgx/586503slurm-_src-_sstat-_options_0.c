void FUN1(void)
{
int VAR1;

for (VAR1 = 0; VAR2[VAR1].VAR3; VAR1++) {
if (VAR1 & 3)
FUN2("");
else if (VAR1)
FUN2("");
FUN2("", VAR2[VAR1].VAR3);
}
FUN2("");
return;
}