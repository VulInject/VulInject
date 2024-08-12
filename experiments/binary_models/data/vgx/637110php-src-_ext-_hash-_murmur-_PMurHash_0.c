void FUN1(VAR1 *VAR2, VAR1 *VAR3, const void *VAR4, int VAR5)
{
uint32_t VAR6 = *VAR2;
uint32_t VAR7 = *VAR3;

const VAR8 *VAR9 = (VAR8*)VAR4;
const VAR8 *VAR10;


int VAR11 = VAR7 & 3;




int VAR12 = (4-VAR11) & 3;
if(VAR12 && VAR12 <= VAR5) {
FUN2(VAR12, VAR6, VAR7, VAR11, VAR9, VAR5);
}


VAR10 = VAR9 + (VAR5 & ~3);
for( ; VAR9 < VAR10 ; VAR9+=4) {
uint32_t VAR13 = FUN3(VAR9);
FUN4(VAR6, VAR13);
}




int VAR12 = -(VAR14)(void *)VAR9 & 3;
if(VAR12 && VAR12 <= VAR5) {
FUN2(VAR12, VAR6, VAR7, VAR11, VAR9, VAR5);
}


VAR10 = VAR9 + (VAR5 & ~3);
switch(VAR11) { 
case 0: 
for( ; VAR9 < VAR10 ; VAR9+=4) {
uint32_t VAR13 = FUN3(VAR9);
FUN4(VAR6, VAR13);
}
break;
case 1: 
for( ; VAR9 < VAR10 ; VAR9+=4) {
uint32_t VAR13 = VAR7>>24;
VAR7 = FUN3(VAR9);
VAR13 |= VAR7<<8;
FUN4(VAR6, VAR13);
}
break;
case 2: 
for( ; VAR9 < VAR10 ; VAR9+=4) {
uint32_t VAR13 = VAR7>>16;
VAR7 = FUN3(VAR9);
VAR13 |= VAR7<<16;
FUN4(VAR6, VAR13);
}
break;
case 3: 
for( ; VAR9 < VAR10 ; VAR9+=4) {
uint32_t VAR13 = VAR7>>8;
VAR7 = FUN3(VAR9);
VAR13 |= VAR7<<24;
FUN4(VAR6, VAR13);
}
}


VAR5 -= VAR5 & ~3;


FUN2(VAR5, VAR6, VAR7, VAR11, VAR9, VAR5);


*VAR2 = VAR6;
*VAR3 = (VAR7 & ~0xff) | VAR11;
}