VAR1 * FUN1(VAR1 *VAR2, const VAR1 *VAR3) {
decNumber VAR4;				
decContext VAR5;			
FUN2(&VAR5, VAR6);
FUN3(VAR3, &VAR4);
FUN4(VAR2, &VAR4, &VAR5);
return VAR2;
} 







| ((unsigned)(VAR7)->VAR8[1]>>4))


(VAR7)->VAR8[0]|=((unsigned)(VAR9)<<7);}




(VAR7)->VAR8[0]|=(VAR10)((VAR11)>>4);				      \
(VAR7)->VAR8[1]|=(VAR10)(((VAR11)&0x0F)<<4);}






void FUN5(const VAR1 *VAR3) {
char VAR12[VAR13*2+1];
Int VAR14, VAR15=0;

if (VAR16) {
for (VAR14=0; VAR14<VAR13; VAR14++, VAR15+=2) {
sprintf(&VAR12[VAR15], "", VAR3->VAR8[3-VAR14]);
}
FUN6("", VAR12,
VAR3->VAR8[3]>>7, (VAR3->VAR8[3]>>2)&0x1f,
((VAR3->VAR8[3]&0x3)<<4)| (VAR3->VAR8[2]>>4));
}
else {
for (VAR14=0; VAR14<VAR13; VAR14++, VAR15+=2) {
sprintf(&VAR12[VAR15], "", VAR3->VAR8[VAR14]);
}
FUN6("", VAR12,
FUN7(VAR3), FUN8(VAR3), FUN9(VAR3));
}
}