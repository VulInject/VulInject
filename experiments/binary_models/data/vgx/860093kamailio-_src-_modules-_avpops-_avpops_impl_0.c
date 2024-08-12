int FUN1(struct VAR1* VAR2, struct VAR3 *VAR4)
{
avp_list_t VAR5;
VAR6 *VAR7;
struct VAR8 *VAR9;
unsigned short VAR10;
int_str VAR11;
int VAR12;

VAR12 = 0;

if ((VAR4->VAR13&VAR14)==0)
{


if(FUN2(VAR2, VAR4, &VAR11, &VAR10)!=0)
{
FUN3("");
return -1;
}
VAR12 = FUN4( VAR10, VAR11, VAR4->VAR15&VAR16 );
} else {


VAR5 = FUN5(VAR17 | VAR18);
VAR7 = VAR5;

for ( ; VAR7 ; VAR7=VAR9 )
{
VAR9 = VAR7->VAR19;

if ( !( (VAR4->VAR13&(VAR20|VAR21))==0 ||
((VAR4->VAR13&VAR20)&&((VAR7->VAR22&VAR23))==0) ||
((VAR4->VAR13&VAR21)&&(VAR7->VAR22&VAR23)) )  )
continue;

FUN6( VAR7 );
VAR12++;
if ( !(VAR4->VAR15&VAR16) )
break;
}
}

FUN7("",VAR12);

return VAR12?1:-1;
}