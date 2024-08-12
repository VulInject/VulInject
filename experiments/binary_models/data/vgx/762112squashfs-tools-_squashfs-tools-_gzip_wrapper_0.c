static int FUN1(int VAR1, void *VAR2, int VAR3)
{
struct VAR4 *VAR5 = VAR2;
int VAR6;

if(VAR3 == 0) {

VAR7 = VAR8;
VAR9 = VAR10;
VAR11 = 0;
return 0;
}


if(VAR3 < sizeof(*VAR5))
goto VAR12;

FUN2(VAR5);


if(VAR5->VAR7 < 1 ||
VAR5->VAR7 > 9) {
fprintf(VAR13, ""
"");
goto VAR12;
}
VAR7 = VAR5->VAR7;

if(VAR5->VAR9 < 8 ||
VAR5->VAR9 > 15) {
fprintf(VAR13, ""
"");
goto VAR12;
}
VAR9 = VAR5->VAR9;

VAR11 = 0;
for(VAR6 = 0; VAR14[VAR6].VAR15; VAR6++) {
if((VAR5->VAR14 >> VAR6) & 1) {
VAR14[VAR6].VAR16 = 1;
VAR11 ++;
} else
VAR14[VAR6].VAR16 = 0;
}

return 0;

VAR12:
fprintf(VAR13, ""
"");

return -1;
}