static VAR1 FUN1(int VAR2,void *VAR3)
{
struct VAR4 *VAR5 = VAR3;
unsigned short VAR6;
int VAR7=0;
struct VAR8 *VAR9;

if (!VAR5) {
FUN2 ("",VAR2);
return VAR10;
}
VAR9 = FUN3(VAR5);

if(VAR11 > 1)
FUN2("");

FUN4(); 

while((VAR6=VAR9->VAR12->VAR13 & VAR14))
{
VAR9->VAR12->VAR15 = VAR6;
FUN5();

if(VAR6 & VAR16)	 
FUN6(VAR5);

if(VAR6 & VAR17) 
{
FUN2("");
if(VAR9->VAR12->VAR18 & VAR19) 
{
FUN4();
VAR9->VAR12->VAR20 = VAR21;
FUN5();
FUN7();
}
else
{
FUN2("",VAR5->VAR22,(int) VAR6,(int) VAR9->VAR12->VAR18);
FUN8(VAR5);
}
}

if(VAR6 & VAR23)		
FUN9(VAR5);

if(VAR6 & VAR24)	
{
if(FUN10(VAR5))
FUN2("",VAR5->VAR22,(int) VAR6,(int) VAR9->VAR12->VAR13);
}

if(VAR11 > 1)
FUN2("",VAR7++);

FUN4(); 
if(VAR9->VAR12->VAR15)	 
{
FUN2("",VAR5->VAR22);
FUN11();
break;
}
}

if(VAR11 > 1)
FUN2("");
return VAR25;
}