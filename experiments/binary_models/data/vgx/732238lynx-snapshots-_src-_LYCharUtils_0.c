char *FUN1(int VAR1)
{
static char VAR2[20];
int VAR3 = VAR1;

if (VAR3 >= 3000) {
strcpy(VAR2, "");
return VAR2;
}

switch (VAR3) {
case 1:
strcpy(VAR2, "");
return VAR2;
case 5:
strcpy(VAR2, "");
return VAR2;
case 10:
strcpy(VAR2, "");
return VAR2;
case 50:
strcpy(VAR2, "");
return VAR2;
case 100:
strcpy(VAR2, "");
return VAR2;
case 500:
strcpy(VAR2, "");
return VAR2;
case 1000:
strcpy(VAR2, "");
return VAR2;
default:
VAR2[0] = '';
break;
}

while (VAR3 >= 1000) {
strcat(VAR2, "");
VAR3 -= 1000;
}

if (VAR3 >= 900) {
strcat(VAR2, "");
VAR3 -= 900;
}

if (VAR3 >= 500) {
strcat(VAR2, "");
VAR3 -= 500;
}

if (VAR3 >= 400) {
strcat(VAR2, "");
VAR3 -= 400;
}

while (VAR3 >= 100) {
strcat(VAR2, "");
VAR3 -= 100;
}

if (VAR3 >= 90) {
strcat(VAR2, "");
VAR3 -= 90;
}

if (VAR3 >= 50) {
strcat(VAR2, "");
VAR3 -= 50;
}

if (VAR3 >= 40) {
strcat(VAR2, "");
VAR3 -= 40;
}

while (VAR3 > 10) {
strcat(VAR2, "");
VAR3 -= 10;
}

switch (VAR3) {
case 1:
strcat(VAR2, "");
break;
case 2:
strcat(VAR2, "");
break;
case 3:
strcat(VAR2, "");
break;
case 4:
strcat(VAR2, "");
break;
case 5:
strcat(VAR2, "");
break;
case 6:
strcat(VAR2, "");
break;
case 7:
strcat(VAR2, "");
break;
case 8:
strcat(VAR2, "");
break;
case 9:
strcat(VAR2, "");
break;
case 10:
strcat(VAR2, "");
break;
default:
strcat(VAR2, "");
break;
}

return VAR2;
}