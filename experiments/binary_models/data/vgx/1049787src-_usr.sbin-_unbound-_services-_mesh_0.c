int FUN1(struct VAR1* VAR2, struct VAR1* VAR3)
{
struct VAR4* VAR5;
struct VAR6* VAR7; 
struct VAR6* VAR8; 
if( !(VAR7 = FUN2(VAR2->VAR9.VAR10,
sizeof(struct VAR6))) ||
!(VAR8 = FUN2(VAR3->VAR9.VAR10,
sizeof(struct VAR6))) ) {
FUN3("");
return 0;
}
VAR8->VAR11.VAR12 = VAR8;
VAR8->VAR9 = VAR2;
VAR7->VAR11.VAR12 = VAR7;
VAR7->VAR9 = VAR3;
if(!FUN4(&VAR3->VAR13, &VAR8->VAR11)) {


return 1;
}
VAR5 =
(void)
FUN4(&VAR2->VAR14, &VAR7->VAR11);
FUN5(VAR5 != NULL); 
return 1;
}