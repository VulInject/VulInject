int FUN1(VAR1 *VAR2){
FUN2(VAR2);
if( VAR2->VAR3>=0 ) close(VAR2->VAR3);
VAR2->VAR3 = -1;
FUN3();
if( VAR2->VAR4->VAR5 ){

int *VAR6;
struct VAR7 *VAR4 = VAR2->VAR4;
VAR4->VAR8++;
VAR6 = FUN4( VAR4->VAR9, VAR4->VAR8*sizeof(int) );
if( VAR6==0 ){

}else{
VAR4->VAR9 = VAR6;
VAR4->VAR9[VAR4->VAR8-1] = VAR2->VAR10;
}
}else{

close(VAR2->VAR10);
}
FUN5(VAR2->VAR11);
FUN6(VAR2->VAR4);
FUN7();
FUN8("", VAR2->VAR10);
FUN9(-1);
return VAR12;
FUN10(VAR2->VAR13);
FUN9(-1);
return VAR12;
if( VAR2->VAR14!=-1 )
FUN11(VAR2->VAR14);
FUN12(VAR2->VAR15);
FUN11(VAR2->VAR15);
if( VAR2->VAR16 ){
unlink(VAR2->VAR17);
FUN13(VAR2->VAR17);
}
FUN9(-1);
return VAR12;
}