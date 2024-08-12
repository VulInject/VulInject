static void FUN1(VAR1* VAR2, void* VAR3)
{
void* VAR4;
void* VAR5;

struct VAR6 *VAR7;
struct VAR6** VAR8;
struct VAR9* VAR10;
unsigned short VAR11;

VAR11=VAR12;
do {
VAR8=FUN2(VAR11);
for(VAR7=VAR8?*VAR8:0; VAR7; VAR7=VAR7->VAR13)
{

if (VAR2->FUN3(VAR3, "", &VAR4) < 0)
{
VAR2->FUN4(VAR3, 500, "");
return;
}

if(VAR2->FUN5(VAR4, "",
"", 	FUN6(VAR11),
"", 	FUN7(VAR11),
"", 	VAR7->VAR14.VAR15,
"",  &VAR5)<0)
{
VAR2->FUN4(VAR3, 500, "");
return;
}

if(VAR2->FUN5(VAR5, "", "", VAR7->VAR16.VAR15)<0)
{
VAR2->FUN4(VAR3, 500, "");
return;
}

if (VAR7->VAR17)
{

for (VAR10=VAR7->VAR17; VAR10; VAR10=VAR10->VAR13)
{
if(VAR2->FUN5(VAR5, "", "", VAR10->VAR16.VAR15)<0)
{
VAR2->FUN4(VAR3, 500,
"");
return;
}

}
}

if(VAR2->FUN5(VAR4, "",
"", VAR7->VAR18.VAR15,
"", VAR7->VAR19 & VAR20 ? "" : "",
"", VAR7->VAR19 & VAR21 ? "" : "",
"", VAR7->VAR19 & VAR22 ? "" : "",
"", VAR7->VAR23.VAR15? VAR7->VAR23.VAR15 : "",
"", VAR7->VAR24.VAR14.VAR15?VAR7->VAR24.VAR14.VAR15:"")<0)
{
VAR2->FUN4(VAR3, 500, "");
return;
}
}
} while((VAR11=FUN8(VAR11)));

return;
}