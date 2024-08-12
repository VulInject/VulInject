FUN1 (
void                    **VAR1)
{
ACPI_STATUS             VAR2;
VAR3             *VAR4;
VAR3             *VAR5;
VAR6                **VAR7 = (VAR6 **) VAR1;
UINT32                  VAR8;
VAR9        *VAR10;
VAR11        *VAR12;
UINT16                  VAR13;
UINT32                  VAR14;




VAR2 = FUN2 (VAR7, VAR15, &VAR4);
if (FUN3 (VAR2))
{
return (VAR2);
}

VAR5 = FUN4 ();
FUN5 (VAR5, VAR4);



VAR10 = FUN6 (VAR9, VAR4->VAR16);
VAR10->VAR17 = sizeof (VAR18) + FUN7 (
FUN8 (VAR19, VAR10, sizeof (VAR9)), VAR10);

VAR8 = VAR10->VAR20;
FUN9 (VAR4);



while (*VAR7 && VAR8)
{


VAR2 = FUN2 (VAR7, VAR21,
&VAR4);
if (FUN3 (VAR2))
{
return (VAR2);
}

VAR12 = FUN6 (VAR11, VAR4->VAR16);
VAR13 = (VAR22) sizeof (VAR11);

VAR5 = FUN4 ();
FUN5 (VAR5, VAR4);
FUN9 (VAR4);

VAR5 = FUN4 ();



VAR12->VAR23 = VAR13;
for (VAR14 = 0; *VAR7 && (VAR14 < VAR12->VAR24); VAR14++)
{
VAR2 = FUN2 (VAR7, VAR25,
&VAR4);
if (FUN3 (VAR2))
{
return (VAR2);
}

VAR13 += (VAR22) sizeof (VAR26);
FUN5 (VAR5, VAR4);
}



VAR12->VAR27 = VAR13;
for (VAR14 = 0; *VAR7 && (VAR14 < VAR12->VAR24); VAR14++)
{
VAR2 = FUN2 (VAR7, VAR28,
&VAR4);
if (FUN3 (VAR2))
{
return (VAR2);
}

VAR13 += (VAR22) sizeof (VAR29);
FUN5 (VAR5, VAR4);
}



VAR12->VAR30 = VAR13;
VAR2 = FUN2 (VAR7, VAR31,
&VAR4);
if (FUN3 (VAR2))
{
return (VAR2);
}



VAR12->VAR32 = (VAR22) VAR4->VAR33;
VAR13 += (VAR22) VAR12->VAR32;
FUN5 (VAR5, VAR4);



VAR2 = FUN2 (VAR7, VAR34,
&VAR4);
if (VAR2 == VAR35)
{


goto VAR36;
}
else if (FUN3 (VAR2))
{
return (VAR2);
}



VAR12->VAR37 = 0;
VAR12->VAR38 = 0;



if (VAR4 && VAR4->VAR33)
{
VAR12->VAR37 = VAR13;
VAR12->VAR38 = (VAR22) VAR4->VAR33;

FUN5 (VAR5, VAR4);
}
VAR36:
VAR8--;
FUN10 (); 
}

FUN10 ();
return (VAR39);
}