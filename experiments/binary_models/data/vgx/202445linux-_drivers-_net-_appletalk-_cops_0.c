static void FUN1 (struct VAR1 *VAR2)
{
struct ifreq VAR3;
struct VAR4 *VAR5= (struct VAR4 *)&VAR3.VAR6;
struct VAR7 *VAR8 = FUN2(VAR2);
int VAR9=VAR2->VAR10;
int VAR11, VAR12 = 0;

strcpy(VAR3.VAR13,"");


if(VAR8->VAR14==VAR15)
{
VAR5->VAR11=sizeof(VAR16);
VAR5->VAR17=VAR16;
}
else
if(VAR8->VAR14==VAR18)
{
VAR5->VAR11=sizeof(VAR19);
VAR5->VAR17=VAR19;
}
else
{
FUN3(VAR20 "", VAR2->VAR21);
return;
}


if(VAR8->VAR14==VAR15 && VAR5->VAR11!=5983)
{
FUN3(VAR22 "", VAR2->VAR21);
return;
}
if(VAR8->VAR14==VAR18 && VAR5->VAR11!=2501)
{
FUN3(VAR22 "", VAR2->VAR21);
return;
}

if(VAR8->VAR14==VAR15)
{

while(++VAR12<65536)
{
if((FUN4(VAR9+VAR23)&3)==1)
break;
}

if(VAR12==65536)
return;
}


VAR12=0;
VAR11 = VAR5->VAR11;
while(VAR11--)
{
FUN5(VAR5->VAR17[VAR12], VAR9);
VAR12++;
}

if(VAR24 > 1)
FUN3("", 
VAR2->VAR21, VAR12, VAR5->VAR11);

if(VAR8->VAR14==VAR15) 	
FUN5(1, VAR9+VAR25);
else			
FUN4(VAR9);

if(VAR8->VAR14==VAR18)
{
FUN6(VAR9);
FUN4(VAR9);	
}
}