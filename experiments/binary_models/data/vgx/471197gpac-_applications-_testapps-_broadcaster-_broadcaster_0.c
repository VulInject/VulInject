VAR1 FUN1()
{
u8 VAR2;
s32 VAR3;

FUN2();
if (VAR4 != -1) return 1;
VAR5.VAR6[VAR7]=0;
FUN3(0, VAR8, &VAR5);
VAR3 = read(0, &VAR2, 1);
VAR5.VAR6[VAR7]=1;
FUN3(0, VAR8, &VAR5);
if(VAR3 == 1) {
VAR4 = VAR2;
return 1;
}
FUN4(0);
return 0;
}