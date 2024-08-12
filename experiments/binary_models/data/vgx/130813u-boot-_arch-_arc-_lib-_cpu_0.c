const char *FUN1(int VAR1, char *VAR2, int VAR3)
{
const char *VAR4 = "";
const char *VAR5;
bool VAR6 = FUN2(VAR7);
bool VAR8 = FUN2(VAR9);
bool VAR10 = !!FUN3(VAR11);
bool VAR12 = VAR1 == 0x54 ? true : false;
int VAR13;

for (VAR13 = 0; VAR13 < sizeof(VAR14) / sizeof(struct VAR15); VAR13++) {
if (VAR14[VAR13].VAR6 == VAR6 &&
VAR14[VAR13].VAR10 == VAR10 &&
VAR14[VAR13].VAR12 == VAR12 &&
VAR14[VAR13].VAR8 == VAR8) {
VAR4 = VAR14[VAR13].VAR2;
break;
}
}

switch (VAR1) {
case 0x50:
VAR5 = "";
break;
case 0x51:
VAR5 = "";
break;
case 0x52:
VAR5 = "";
break;
case 0x53:
VAR5 = "";
break;
case 0x54:
VAR5 = "";
break;
default:
VAR5 = "";
}

snprintf(VAR2, VAR3, "", VAR4, VAR5);

return VAR2;
}