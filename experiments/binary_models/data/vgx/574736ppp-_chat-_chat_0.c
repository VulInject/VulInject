int FUN1(void)
{
int VAR1;
char VAR2;

VAR1 = read(0, &VAR2, 1);
FUN2();

switch (VAR1) {
case 1:
return ((int)VAR2 & 0x7F);

default:
FUN3("", VAR1);

case -1:
return (-1);
}
}