static int
FUN1(int VAR1, struct VAR2** VAR3, 
struct VAR2** VAR4, struct VAR5* VAR6)
{
ssize_t VAR7;
struct VAR2* VAR8;
while(*VAR3) {
VAR8 = *VAR3;

if(!FUN2(&VAR8->VAR9, VAR6))
return 1;

VAR7 = send(VAR1, (void*)(VAR8->VAR10 + VAR8->VAR11), VAR8->VAR12 - VAR8->VAR11, 0);
if(VAR7 == -1) {
if(VAR13 == VAR14 || VAR13 == VAR15)
return 1;
if(FUN3() == VAR16 || 
FUN3() == VAR17)
return 1;
FUN4("", FUN5(VAR13));
return 0;
} else if(VAR7 == 0) {

return 0;
}

VAR8->VAR11 += (VAR18)VAR7;
FUN6(1, "", (int)VAR8->VAR11, (int)VAR8->VAR12);
if(VAR8->VAR11 >= VAR8->VAR12) {
free(VAR8->VAR10);
*VAR3 = VAR8->VAR19;
if(!*VAR3)
*VAR4 = NULL;
free(VAR8);
} else {

return 1;
}
}
return 1;
}