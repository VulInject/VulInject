static int
FUN1(VAR1 *VAR2, uint8_t VAR3, unsigned VAR4)
{
int VAR5 = FUN2(VAR3);
if (VAR5 < 0)
return VAR6;

FUN3((char*)VAR2, VAR5);
switch (VAR3) {
case VAR7:

VAR2[VAR8-1] = 96;
break;
case VAR9:

VAR2[VAR10-1] = 17;
break;
case VAR11:
if (VAR4 & VAR12) {

VAR2[VAR13-2] = 12;
} else {

VAR2[VAR13-2] = 15;
}

VAR2[VAR13-1] = (3u << 4) | (1u << 0);
break;

default:
FUN4();
return VAR6;

}

return VAR5;
}