int FUN1(int VAR1)
{
int VAR2;
int VAR3;


VAR4 = (VAR5*)FUN2(sizeof(VAR5));
if (VAR4==0) {
FUN3("");
goto VAR6;
}
memset(VAR4, 0, sizeof(VAR5));


VAR2 = VAR7;
VAR4->VAR8 = FUN4( &VAR2 );
if (VAR4->VAR8==0) {
FUN3("");
goto VAR6;
}

for(VAR3=0;VAR3<VAR7;VAR3++) {
VAR4->VAR9[VAR3].VAR10 = 0;
VAR4->VAR9[VAR3].VAR11 = VAR3 % VAR2;
}

VAR4->VAR12 = VAR1;

return 0;
VAR6:
if (VAR4) {
FUN5(VAR4);
VAR4 = NULL;
}
return -1;
}