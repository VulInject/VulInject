VAR1 *FUN1(struct VAR2 *VAR3, VAR4 *VAR5,void *VAR6) {
VAR1 *VAR7 = calloc(1,sizeof(VAR8));

FUN2();
VAR7->VAR9 = &VAR10;
FUN3(VAR7,VAR3,VAR5,VAR6,&VAR11);

if ( (VAR5->VAR12&VAR13) && VAR7->VAR14!=NULL )
VAR7->VAR15 = true;
if ( VAR7->VAR15 && VAR5->VAR16.VAR17==0 )
VAR7->VAR18.VAR17 = VAR7->VAR14->VAR18.VAR17 - FUN4(VAR3,VAR19);
FUN5(VAR7);
FUN6(VAR7,VAR3,VAR5);
return( VAR7 );
}