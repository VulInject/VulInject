VAR1
FUN1(
VAR2 				*VAR3,
uint32				VAR4,	
VAR5				*VAR6,
VAR5				*VAR7,
VAR5				*VAR8
)
{
uint32				VAR9;
FUN2(VAR10, VAR11);

*VAR8 = FUN3(VAR3->VAR12.VAR13);
if (VAR3->VAR12.VAR14.VAR15 == VAR16)
{

*VAR7 = *VAR8;
*VAR6 = 1;
return VAR17;
}

*VAR7 = VAR3->VAR18.VAR19*sizeof(VAR20) ;
if (*VAR7 == 0) {
FUN4((""
""
""
"",
VAR3->VAR18.VAR19,
VAR3->VAR21.VAR22.VAR23,
*VAR8));
*VAR6 = 0;	
FUN5( VAR10 );
return VAR17;
}


VAR9 = VAR4 - (sizeof(VAR24) + sizeof(VAR25) + sizeof(VAR26));
*VAR6 = (VAR9 + (*VAR7)-1) / (*VAR7);


if (*VAR6 
&& (*VAR6-1)*(*VAR7)+(*VAR8) > VAR9)
{

FUN4((""
""
""
"",
VAR3->VAR18.VAR19,
VAR3->VAR21.VAR22.VAR23,
*VAR8));
--(*VAR6);	
}
FUN6((""
""
""
""
"",
VAR3->VAR18.VAR19,
*VAR7,
VAR3->VAR21.VAR22.VAR23,
*VAR8, *VAR6));

FUN5( VAR10 );
return VAR17;
}