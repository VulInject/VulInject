FUN1 (struct VAR1 **VAR2, struct VAR3 * VAR4, int VAR5,
struct VAR6 * VAR6, int VAR7)
{
struct VAR1 *VAR8 = *VAR2;
struct VAR6 *VAR9 = FUN2 (FUN3 (VAR8));


struct VAR1 *VAR10;
struct VAR1 *VAR11;		
CORE_ADDR VAR12;		
int VAR13;		
struct VAR6 *VAR14 = FUN4 (VAR4, VAR5);	

VAR11 = FUN5 (VAR6, *VAR2);

if (FUN6 (VAR11) == 0)
FUN7 ("");



VAR12 = *(VAR15 *) (FUN8 (VAR11));	


if (!VAR12)
VAR16
("");



if (1)
{





VAR10 = FUN9 (VAR17,
VAR12 + 4 * (FUN10 (VAR4, VAR5) +
VAR18), NULL);

VAR12 = *(VAR15 *) (FUN8 (VAR10));


}
else
{



VAR13 = FUN11 (VAR6);



VAR10 = FUN9 (VAR17,
VAR12 + 4 * (VAR18 + VAR13), NULL);


VAR12 =
*(VAR15 *) (FUN8 (VAR10) +
4 * FUN10 (VAR4, VAR5));
VAR10 = FUN9 (VAR17, VAR12, NULL);
VAR12 = *(VAR15 *) (FUN8 (VAR10));




}

if (!VAR12)
FUN7 ("");


VAR10 = FUN12 (VAR14);
FUN3 (VAR10) = VAR14;
FUN6 (VAR10) = VAR12;


return VAR10;
}