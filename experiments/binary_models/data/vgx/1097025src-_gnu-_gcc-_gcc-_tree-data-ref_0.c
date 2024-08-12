FUN1 (tree VAR1, tree VAR2, bool VAR3, 
struct VAR4 **VAR5, VAR6 *VAR7, VAR6 *VAR8, 
VAR6 *VAR9, VAR6 *VAR10, VAR6 *VAR11,
struct VAR12 **VAR13, VAR14 *VAR15)
{
tree VAR16 = VAR17, VAR18 = VAR17;
tree VAR19 = FUN2 (0), VAR20 = FUN2 (0);
tree VAR21 = FUN2 (0), VAR22 = FUN2 (0);
tree VAR23 = FUN2 (0), VAR24 = FUN2 (0);
HOST_WIDE_INT VAR25, VAR26;
tree VAR27, VAR28;
enum machine_mode VAR29;
int VAR30, VAR31;
tree VAR32 = FUN2 (0), VAR33 = VAR17;
struct VAR34 *VAR34 = FUN3 (VAR2);
struct VAR4 *VAR35 = NULL;
tree VAR36 = VAR17, VAR37 = VAR17;
tree VAR38 = VAR17;

*VAR13 = NULL;



if (FUN4 (VAR1))
{

if (!(*VAR5))
{ 
if (FUN5 (VAR1) == VAR39)
*VAR5 = FUN6 (VAR2, VAR1, VAR3);	  
else if (FUN5 (VAR1) == VAR40)
VAR38 = VAR1;
else  
{
if (VAR41 && (VAR42 & VAR43))
{
fprintf (VAR41, "");
FUN7 (VAR41, VAR1, VAR44);
fprintf (VAR41, "");
}
return VAR17;
}
}



VAR16 = FUN8 (VAR1, &VAR25, &VAR26, &VAR27,
&VAR29, &VAR30, &VAR31, false);
if (!VAR16)
{
if (VAR41 && (VAR42 & VAR43))
{
fprintf (VAR41, "");
FUN7 (VAR41, VAR1, VAR44);
fprintf (VAR41, "");
}	  
return VAR17;
}


if (VAR27 
&& !FUN9 (VAR27, VAR34, &VAR19, 
&VAR20, &VAR36,
&VAR21))
{
if (VAR41 && (VAR42 & VAR43))
{
fprintf (VAR41, "");
FUN7 (VAR41, VAR1, VAR44);
fprintf (VAR41, "");
}
return VAR17;
}



VAR28 = FUN2 (VAR26/VAR45);

if (VAR26%VAR45)
{
if (VAR41 && (VAR42 & VAR43))
fprintf (VAR41, "");
return VAR17;
}
VAR19 = FUN10 (VAR46, VAR28, VAR19);     
if (VAR20) 
VAR20 = FUN10 (VAR46, VAR20, 
VAR28); 

VAR1 = VAR16; 

}


if (FUN11 (VAR1))
{

if (!(*VAR5))
{
if (VAR38 && FUN5 (FUN12 (VAR38, 0)) == VAR39)
{
*VAR5 = FUN6 (VAR2, FUN12 (VAR38, 0), VAR3);	      	      
if (FUN13 (*VAR5) != 1)
{
if (VAR41 && (VAR42 & VAR43))
{
fprintf (VAR41, "");
FUN7 (VAR41, VAR38, VAR44);
fprintf (VAR41, "");
}
return VAR17;
}
}
else 
{
if (VAR41 && (VAR42 & VAR43))
{
fprintf (VAR41, "");
FUN7 (VAR41, VAR1, VAR44);
fprintf (VAR41, "");
}
return VAR17;
}
}


if (FUN14 (VAR1) && FUN15 (VAR1))	
*VAR15 = FUN16 (VAR1);
VAR18 = FUN17 (VAR1);

*VAR11 = VAR1;
}


else if (FUN5 (VAR1) == VAR47)
{
tree VAR48 = FUN12 (VAR1, 0);
if (FUN5 (VAR48) == VAR49)
*VAR13 = FUN18 (VAR48);


VAR35 = FUN19 (VAR2, VAR1, VAR3);
if (!VAR35)
{
if (VAR41 && (VAR42 & VAR43))
{
fprintf (VAR41, "");
FUN7 (VAR41, VAR1, VAR44);
fprintf (VAR41, "");
}	
return VAR17;      
}


VAR32 = FUN20 (VAR35);
VAR33 = FUN21 (VAR35);
if (!VAR33 || !VAR32 || !FUN22 (FUN23 (VAR33)))
{
*VAR5 = (*VAR5) ? *VAR5 : VAR35;
if (VAR41 && (VAR42 & VAR43))
{
fprintf (VAR41, "");
FUN7 (VAR41, VAR1, VAR44);
fprintf (VAR41, "");
}
return VAR17;
}

if (FUN24 (VAR32) && !(*VAR5))
{
if (VAR41 && (VAR42 & VAR43)) 
fprintf (VAR41, "");	
*VAR5 = VAR35;
return VAR17;


}
VAR21 = FUN10 (VAR46, VAR21, VAR32);


if (!*VAR5)
*VAR5 = VAR35;


VAR18 = FUN25 (VAR33, VAR2, VAR3, *VAR5, 
&VAR23, &VAR24, 
&VAR37, &VAR22);
if (!VAR18)
{
if (VAR41 && (VAR42 & VAR43))
{
fprintf (VAR41, "");
FUN7 (VAR41, VAR33, VAR44);
fprintf (VAR41, "");
}
return VAR17;
}


switch (FUN5 (VAR18))
{
case VAR49:
*VAR11 = FUN26 (FUN27 (VAR18))->VAR50;
if (!(*VAR11) && FUN5 (FUN12 (VAR1, 0)) == VAR49)
*VAR11 = FUN26 (
FUN27 (FUN12 (VAR1, 0)))->VAR50;
break;
case VAR51:
*VAR11 = FUN12 (VAR18, 0);
break;
default:
if (VAR41 && (VAR42 & VAR43))
{
fprintf (VAR41, ""); 
FUN7 (VAR41, VAR1, VAR44);
fprintf (VAR41, "");
}
*VAR11 = VAR17;
break;
}
}      

if (!VAR18)
{

if (VAR41 && (VAR42 & VAR43))
{
fprintf (VAR41, "");
FUN7 (VAR41, VAR1, VAR44);
fprintf (VAR41, "");
}
return VAR17;
}

if (VAR38)
FUN28 (*VAR5) = VAR38;

if (FUN14 (*VAR11) && FUN15 (*VAR11))
*VAR15 = FUN16 (*VAR11);


*VAR7 = FUN10 (VAR46, VAR19, VAR23);

if ((!VAR20 && !VAR36)
|| (!VAR24 && !VAR37))
{
*VAR8 = VAR17;
*VAR9 = VAR17;
}  
else 
{
if (VAR20 && VAR24)
*VAR8 = FUN10 (VAR46, VAR20, VAR24);
else
*VAR8 = VAR20 ? VAR20 : VAR24;
if (VAR36 && VAR37)
*VAR9 = FUN10 (VAR52, VAR36, 
VAR37);
else
*VAR9 = VAR36 ? 
VAR36 : VAR37; 
}
*VAR10 = FUN10 (VAR46, VAR21, VAR22); 

return VAR18;
}