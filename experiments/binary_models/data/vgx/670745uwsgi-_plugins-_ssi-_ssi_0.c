static struct VAR1 *FUN1(struct VAR2 *VAR3, char *VAR4, size_t VAR5) {
size_t VAR6;
uint8_t VAR7 = 0;
char *VAR8 = NULL;
size_t VAR9 = 0;
struct VAR1 *VAR10 = FUN2(VAR5);


for(VAR6=0;VAR6<VAR5;VAR6++) {
switch(VAR7) {
case 0:
if (VAR4[VAR6] == '') {
VAR7 = 1;
}
else {
if (FUN3(VAR10, &VAR4[VAR6], 1)) goto VAR11;
}
break;
case 1:
VAR7 = 0;
if (VAR4[VAR6] == '') {
VAR7 = 2;
}
else {
if (FUN3(VAR10, "", 1)) goto VAR11;
if (FUN3(VAR10, &VAR4[VAR6], 1)) goto VAR11;
}
break;
case 2:
VAR7 = 0;
if (VAR4[VAR6] == '') {
VAR7 = 3;
}
else {
if (FUN3(VAR10, "", 2)) goto VAR11;
if (FUN3(VAR10, &VAR4[VAR6], 1)) goto VAR11;
}
break;
case 3:
VAR7 = 0;
if (VAR4[VAR6] == '') {
VAR7 = 4;
}
else {
if (FUN3(VAR10, "", 3)) goto VAR11;
if (FUN3(VAR10, &VAR4[VAR6], 1)) goto VAR11;
}
break;
case 4:
VAR7 = 0;
if (VAR4[VAR6] == '') {
VAR7 = 5;
}
else {
if (FUN3(VAR10, "", 4)) goto VAR11;
if (FUN3(VAR10, &VAR4[VAR6], 1)) goto VAR11;
}
break;
case 5:
if (VAR4[VAR6] == '') {
VAR7 = 6;
break;
}
if (!VAR8) {
VAR8 = VAR4+VAR6;
}
VAR9++;
break;
case 6:
VAR7 = 5;
if (VAR4[VAR6] == '') {
VAR7 = 7;
}
else {
VAR9+=2;
}
break;
case 7:
VAR7 = 5;
if (VAR4[VAR6] == '') {
VAR7 = 0;
struct VAR1 *VAR12 = FUN4(VAR3, VAR8, VAR9);
if (VAR12) {
if (FUN3(VAR10, VAR12->VAR4, VAR12->VAR13)) {
FUN5(VAR12);
goto VAR11;
}
FUN5(VAR12);
}
VAR8 = NULL;
VAR9 = 0;	
}
else {
VAR9+=3;
}
break;
default:
goto VAR11;
}
}

return VAR10;

VAR11:
FUN5(VAR10);
return NULL;
}