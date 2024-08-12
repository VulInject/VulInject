FUN1 (const char* VAR1, unsigned short VAR2, int VAR3)
{
int VAR4;
union sockunion VAR5;
int VAR6;
void* VAR7=NULL;

memset (&VAR5, 0, sizeof (union VAR8));
VAR5.VAR9.VAR10 = VAR3;
if(VAR1)
switch(VAR3)
{
case VAR11:
VAR7=&VAR5.VAR12.VAR13;
break;
case VAR14:
VAR7=&VAR5.VAR15.VAR16;
break;
}

if(VAR7)
switch(FUN2(VAR3,VAR1,VAR7))
{
case -1:
FUN3("",VAR1);
VAR7=NULL;
break;
case 0:
FUN3("",VAR1,FUN4(VAR17));
VAR7=NULL;
}


VAR6 = FUN5 (&VAR5);
if (VAR6 < 0)
return;


FUN6 (VAR6);
FUN7 (VAR6);


VAR4 = FUN8 (VAR6, &VAR5, VAR2, VAR7);
if (VAR4 < 0)
{
FUN9("");
close (VAR6);	
return;
}


VAR4 = FUN10 (VAR6, 3);
if (VAR4 < 0) 
{
FUN11 (NULL, VAR18, "");
close (VAR6);	
return;
}


FUN12 (VAR19, VAR6, NULL);
}