VAR1 *FUN1(VAR1 *VAR2, unsigned char VAR3, VAR1 **VAR4, VAR1 ***VAR5) {
assert(VAR2->VAR6 == 0);

size_t VAR7 = FUN2(VAR2);
VAR2->VAR8++;
size_t VAR9 = FUN2(VAR2);
VAR2->VAR8--; 


VAR1 *VAR10 = FUN3(0,0);
if (VAR10 == NULL) return NULL;


VAR1 *VAR11 = FUN4(VAR2,VAR9);
if (VAR11 == NULL) {
FUN5(VAR10);
return NULL;
}
VAR2 = VAR11;


int VAR12;
for (VAR12 = 0; VAR12 < VAR2->VAR8; VAR12++) {
if (VAR2->VAR13[VAR12] > VAR3) break;
}


unsigned char *VAR14, *VAR15;
if (VAR2->VAR16 && !VAR2->VAR17) {
VAR14 = ((unsigned char*)VAR2+VAR7-sizeof(void*));
VAR15 = ((unsigned char*)VAR2+VAR9-sizeof(void*));
memmove(VAR15,VAR14,sizeof(void*));
}


size_t VAR18 = VAR9 - VAR7 - sizeof(void*);


VAR14 = VAR2->VAR13+VAR2->VAR8+
FUN6(VAR2->VAR8)+
sizeof(VAR1*)*VAR12;
memmove(VAR14+VAR18+sizeof(VAR1*),VAR14,sizeof(VAR1*)*(VAR2->VAR8-VAR12));


if (VAR18) {
VAR14 = (unsigned char*) FUN7(VAR2);
memmove(VAR14+VAR18,VAR14,sizeof(VAR1*)*VAR12);
}


VAR14 = VAR2->VAR13+VAR12;
memmove(VAR14+1,VAR14,VAR2->VAR8-VAR12);


VAR2->VAR13[VAR12] = VAR3;
VAR2->VAR8++;
VAR14 = (unsigned char*) FUN7(VAR2);
VAR1 **VAR19 = (VAR1**)(VAR14+sizeof(VAR1*)*VAR12);
memcpy(VAR19,&VAR10,sizeof(VAR10));
*VAR4 = VAR10;
*VAR5 = VAR19;
return VAR2;
}