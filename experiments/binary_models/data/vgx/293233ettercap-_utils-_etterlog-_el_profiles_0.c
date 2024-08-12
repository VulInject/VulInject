int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4)
{
struct VAR5 *VAR6;
struct VAR5 *VAR7;
struct VAR5 *VAR8 = NULL;



if (FUN2(&VAR2->VAR9))
return 0;


if (VAR2->VAR10 & VAR11) {
FUN3(VAR2->VAR12);

memset(VAR2->VAR12, 0, VAR13);
}


FUN4(VAR6, &VAR14, VAR15) {


if ((!memcmp(VAR6->VAR12, VAR2->VAR12, VAR13) ||
!memcmp(VAR2->VAR12, "", VAR13) ) &&
!FUN5(&VAR6->VAR9, &VAR2->VAR9) ) {

FUN6(VAR6, VAR2, VAR4);

return 0;
}
}


FUN7(VAR6, 1, sizeof(struct VAR5));


FUN6(VAR6, VAR2, VAR4);


FUN4(VAR7, &VAR14, VAR15) {
if ( FUN5(&VAR7->VAR9, &VAR6->VAR9) > 0 )
break;
VAR8 = VAR7;
}

if (FUN8(&VAR14) == NULL) 
FUN9(&VAR14, VAR6, VAR15);
else if (VAR7 != NULL) 
FUN10(VAR7, VAR6, VAR15);
else 
FUN11(&VAR14, VAR8, VAR6, VAR15);

return 1;   
}