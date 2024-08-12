static void
FUN1(struct VAR1 *VAR1)
{
struct VAR1 *VAR2, *VAR3;
int VAR4;
char VAR5[VAR6];

FUN2("", FUN3(VAR1));
FUN4(VAR5);
FUN5();
if(!*VAR5 || *VAR5 == '')
return;
VAR4 = strlen(VAR5)+1;
if(VAR4 > 63){
VAR5[62] = 0;
VAR4 = 63;
}
VAR3 = FUN6(VAR4);
*VAR3 = *VAR1;
VAR3->VAR7 = VAR4;
(void) FUN7(FUN8(VAR3), VAR5, VAR4);

FUN9((struct VAR1 *) 0, VAR1->VAR8);
FUN9(VAR3, VAR3->VAR8);


if(VAR1 == VAR9) VAR9 = VAR3;
else for(VAR2 = VAR9; ; VAR2 = VAR2->VAR10){
if(!VAR2)
FUN10("");
if(VAR2->VAR10 == VAR1){
VAR2->VAR10 = VAR3;
break;
}
}

free(VAR1);		
}