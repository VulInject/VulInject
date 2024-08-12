int FUN1(int VAR1, int VAR2, int VAR3) {
int VAR4;



if (VAR1 < 0)
return -VAR5;
if (VAR2 < 0)
return -VAR5;

if (VAR1 == VAR2) {

if (VAR3 >= 0) {
VAR4 = FUN2(VAR2, VAR3);
if (VAR4 < 0)
return VAR4;
}

return VAR2;
}

if (VAR3 < 0) {
int VAR6;

VAR6 = FUN3(VAR1, VAR7, 0);
if (VAR6 < 0)
return -VAR8;

VAR3 = !!(VAR6 & VAR9);
}

VAR4 = FUN4(VAR1, VAR2, VAR3 ? VAR10 : 0);
if (VAR4 < 0)
return -VAR8;

assert(VAR4 == VAR2);

FUN5(VAR1);

return VAR2;
}