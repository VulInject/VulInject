VAR1 *FUN1(VAR1* VAR2, int remove)
{
VAR3			*VAR4 = FUN2();
register struct VAR5	*VAR6 = (struct VAR5*)VAR4->VAR7;
register int		VAR8;
register char		*VAR9=0;
if(VAR6->VAR10==0 && !FUN3(VAR2) && VAR4->VAR11)
{

VAR12 *VAR13 = FUN4(VAR4->VAR11);
VAR6->VAR14 = VAR2;
FUN5(VAR2,VAR13,VAR15);
VAR2 = FUN6(VAR6->VAR14->VAR16,VAR13,VAR17);
}
if(VAR6->VAR10 && memcmp(VAR2->VAR16,VAR18,sizeof(VAR18)-1))
{
VAR9 = (VAR6->VAR19[0])->VAR16;
VAR8 = strlen(VAR9);
if(memcmp(VAR2->VAR16,VAR9,VAR8))
return(VAR2);
}
if(VAR6->VAR14 && VAR6->VAR10)
{

if(VAR9 && VAR2->VAR16[VAR8]=='' && VAR2->VAR16[VAR8+1]=='' && VAR2->VAR16[VAR8+2]==0)
VAR6->VAR14 = 0;
else
{
VAR12 *VAR13 = FUN4(VAR4->VAR11);
FUN5(VAR6->VAR19[0],VAR13,VAR15);
FUN7(VAR13,VAR6->VAR14);
FUN8(VAR20,FUN9(1),VAR21,VAR6->VAR19[0]->VAR16);
}
}
for(VAR8=0; VAR8 < VAR6->VAR10; VAR8++)
{
if(VAR2 == VAR6->VAR19[VAR8])
{
if(remove)
{
while(++VAR8 < VAR6->VAR10)
VAR6->VAR19[VAR8-1] = VAR6->VAR19[VAR8];
VAR6->VAR10--;
}
return(VAR2);
}
}
if(remove)
return(VAR2);
if(VAR6->VAR10==VAR6->VAR22)
{
VAR6->VAR22 += 20;
VAR6->VAR19 = (VAR1**)realloc(VAR6->VAR19,sizeof(VAR1*)*VAR6->VAR22);
}
VAR6->VAR19[VAR6->VAR10++] = VAR2;
return(VAR2);
}