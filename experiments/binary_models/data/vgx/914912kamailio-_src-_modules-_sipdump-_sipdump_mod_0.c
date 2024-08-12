static int FUN1(void)
{
if(!(VAR1 & (VAR2 |VAR3
| VAR4))) {
FUN2("");
return -1;
}

if(FUN3()<0) {
FUN2("");
return -1;
}

if(FUN4(&VAR5, &VAR6) < 0) {
FUN2("");
return -1;
}

if(FUN5(VAR7) < 0) {
FUN2("");
return -1;
}

if(VAR1 & VAR4) {
VAR8 = FUN6(&VAR9, "");
if (VAR8>=0 && VAR9.VAR10[VAR8]==0) {
VAR8 = -1; 
}
if(FUN7() <0) {
FUN2("");
return -1;
}
}

if(VAR1 & (VAR2|VAR3)) {
FUN8(1);
}

if(VAR11>0) {
if(FUN9(VAR12, NULL, 600)<0) {
return -1;
}
}

FUN10(VAR13, VAR14);
FUN10(VAR15, VAR16);

return 0;
}