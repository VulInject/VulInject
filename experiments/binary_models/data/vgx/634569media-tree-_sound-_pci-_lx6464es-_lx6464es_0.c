static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
struct VAR4 *VAR5;

u32 VAR6 = 64 *		     
3 *		     
VAR7 *  
VAR8 * 
2;		     

VAR6 = FUN2(VAR6);


VAR3 = FUN3(VAR2->VAR9, (char *)VAR10, 0,
1, 1, &VAR5);
if (VAR3 < 0)
return VAR3;

VAR5->VAR11 = VAR2;

FUN4(VAR5, VAR12, &VAR13);
FUN4(VAR5, VAR14, &VAR15);

VAR5->VAR16 = 0;
VAR5->VAR17 = true;
strcpy(VAR5->VAR18, VAR10);

VAR3 = FUN5(VAR5, VAR19,
FUN6(VAR2->VAR20),
VAR6, VAR6);
if (VAR3 < 0)
return VAR3;

VAR2->VAR5 = VAR5;
VAR2->VAR21.VAR22 = 1;

return 0;
}