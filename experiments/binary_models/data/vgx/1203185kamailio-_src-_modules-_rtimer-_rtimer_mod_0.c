static int FUN1(int VAR1)
{
VAR2 *VAR3;
int VAR4;
char VAR5[VAR6];

if(VAR7==NULL)
return 0;

if (VAR1!=VAR8)
return 0;

VAR3 = VAR7;
while(VAR3)
{
for(VAR4=0; VAR4<VAR3->VAR9; VAR4++)
{
snprintf(VAR5, VAR6, "",
VAR4, VAR3->VAR10.VAR11, VAR3->VAR10.VAR12);
if(VAR3->VAR13 & VAR14)
{
if(FUN2(VAR15, VAR5, 1 ,
VAR16, VAR4, (void*)VAR3, VAR3->VAR17
)<0) {
FUN3("");
return -1; 
}
} else {
if(FUN4(VAR15, VAR5, 1 ,
VAR16, VAR4, (void*)VAR3, VAR3->VAR17
)<0) {
FUN3("");
return -1; 
}
}
}
VAR3 = VAR3->VAR18;
}

return 0;
}