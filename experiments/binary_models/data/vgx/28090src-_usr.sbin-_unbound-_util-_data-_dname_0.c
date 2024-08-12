int 
FUN1(VAR1* VAR2, int VAR3, VAR1* VAR4, int VAR5, int* VAR6)
{
uint8_t VAR7, VAR8;
int VAR9 = VAR3;
int VAR10;
int VAR11 = 0;

if(VAR3 > VAR5) {
while(VAR9 > VAR5) {
VAR7 = *VAR2++;
VAR2 += VAR7;
VAR9--;
}
FUN2(VAR9 == VAR5);
} else if(VAR3 < VAR5) {
VAR9 = VAR5;
while(VAR9 > VAR3) {
VAR8 = *VAR4++;
VAR4 += VAR8;
VAR9--;
}
FUN2(VAR9 == VAR3);
}
VAR10 = VAR9+1;




while(VAR9 > 1) {
VAR7 = *VAR2++;
VAR8 = *VAR4++;
if(VAR7 != VAR8) {
FUN2(VAR7 != 0 && VAR8 != 0);
if(VAR7<VAR8)
VAR11 = -1;
else	VAR11 = 1;
VAR10 = VAR9;
VAR2 += VAR7;
VAR4 += VAR8;
} else {

while(VAR7) {
if(*VAR2 != *VAR4 && FUN3((unsigned char)*VAR2) 
!= FUN3((unsigned char)*VAR4)) {
if(FUN3((unsigned char)*VAR2) < 
FUN3((unsigned char)*VAR4)) {
VAR11 = -1;
VAR10 = VAR9;
VAR2 += VAR7;
VAR4 += VAR7;
break;
}
VAR11 = 1;
VAR10 = VAR9;
VAR2 += VAR7;
VAR4 += VAR7;
break; 
}
VAR2++;
VAR4++;
VAR7--;
}
}
VAR9--;
}

*VAR6 = VAR10-1;
if(VAR11 == 0) {

if(VAR3 > VAR5)
return 1;
else if(VAR3 < VAR5)
return -1;
}
return VAR11;
}