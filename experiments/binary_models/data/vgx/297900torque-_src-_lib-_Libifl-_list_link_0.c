int FUN1(

VAR1 *VAR2)

{
if ((VAR2->VAR3 != VAR2) ||
(VAR2->VAR4  != VAR2))
return(1);

return(0);
}





void *FUN2(

list_link  VAR5,   
char     *VAR6, 
int      VAR7) 

{
if ((VAR5.VAR4 == NULL) ||
((VAR5.VAR4 == &VAR5) && (VAR5.VAR8 != NULL)))
{
fprintf(VAR9, ""%VAR10\"",
VAR6,
VAR7);

return NULL;
}

return(VAR5.VAR4->VAR8);
}  




void *FUN3(

list_link  VAR5,
char     *VAR6,
int      VAR7)

{
if ((VAR5.VAR3 == NULL) ||
((VAR5.VAR3 == &VAR5) && (VAR5.VAR8 != NULL)))
{
fprintf(VAR9, ""%VAR10\"",
VAR6,
VAR7);

return NULL;
}

return(VAR5.VAR3->VAR8);
}  





void FUN4(

VAR11 *VAR12,
VAR11 *VAR13)

{
if (VAR12->VAR4 == VAR12)
{
VAR13->VAR4 = VAR13;
VAR13->VAR3 = VAR13;
}
else
{
VAR13->VAR4 = VAR12->VAR4;
VAR13->VAR4->VAR3 = VAR13;
VAR13->VAR3 = VAR12->VAR3;
VAR13->VAR3->VAR4 = VAR13;
FUN5((*VAR12));
}
}



void FUN6(

struct VAR14 *VAR5)

{
if (VAR5 != NULL)
{
if (VAR5->VAR15 != NULL)
FUN6(VAR5->VAR15);
free(VAR5);
}
}