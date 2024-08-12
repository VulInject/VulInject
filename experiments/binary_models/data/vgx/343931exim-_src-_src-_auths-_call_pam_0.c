static void FUN1(int VAR1) { FUN2(VAR1-1); }




static int VAR2;
static const VAR3 *VAR4;
static BOOL VAR5;







static int
FUN3 (int VAR6, VAR7 **VAR8,
struct VAR9 **VAR10, void *VAR11)
{
int VAR12 = 0;
struct VAR9 *VAR13;



if (  VAR5
|| !(VAR13 = malloc(sizeof(struct VAR9) * VAR6)))
return VAR14;

for (int VAR15 = 0; VAR15 < VAR6; VAR15++)
{
VAR3 *VAR16;
switch (VAR8[VAR15]->VAR17)
{
case VAR18:
case VAR19:
if (!(VAR16 = FUN4(&VAR4, &VAR12, NULL, 0)))
{
VAR16 = VAR20"";
VAR5 = VAR21;
}
VAR13[VAR15].VAR10 = strdup(CCS VAR16); 
VAR13[VAR15].VAR22 = VAR23;
break;

case VAR24:    
case VAR25:
VAR13[VAR15].VAR22 = VAR23;
VAR13[VAR15].VAR10 = NULL;
break;

default:  
free(VAR13);
VAR2 = VAR21;
return VAR14;
}
}

*VAR10 = VAR13;
return VAR23;
}