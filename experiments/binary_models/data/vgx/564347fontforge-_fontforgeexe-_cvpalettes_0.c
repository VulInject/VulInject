void FUN1(VAR1 *VAR2, int VAR3) {
if ( VAR3<-1 || VAR3>=VAR2->VAR4.VAR5->VAR6 )
return;

if ( VAR3==-1 ) {
VAR2->VAR4.VAR7 = VAR8;
VAR2->VAR9 = NULL;
} else {
if ( VAR3==1 ) {
VAR2->VAR4.VAR7 = VAR10;
VAR2->VAR9 = NULL;
} else {
VAR2->VAR4.VAR7 = VAR11;
VAR2->VAR4.VAR12[VAR11] = &VAR2->VAR4.VAR5->VAR13[VAR3];
VAR2->VAR9 = NULL;
}

FUN2(VAR2->VAR14);
FUN3(VAR2->VAR4.VAR15); VAR2->VAR4.VAR15 = NULL;
FUN4(VAR2->VAR16); VAR2->VAR16 = NULL;
FUN4(VAR2->VAR17); VAR2->VAR17 = NULL;
VAR2->VAR18 = false;
}
VAR19.VAR20 = FUN5(&VAR2->VAR4); 

FUN6(VAR2);
FUN7(VAR2->VAR21,NULL,false);
if (VAR22) FUN7(VAR22,NULL,false);
if (VAR23)  FUN7(VAR23,NULL,false);
FUN7(VAR2->VAR24,NULL,false);
}