int FUN1(

struct VAR1 *VAR2,
struct VAR3 *VAR4)

{
int VAR5;

VAR4->VAR6.VAR7.VAR8 = FUN2(VAR2, &VAR5);

return(VAR5);
} 


int FUN3(

struct VAR1 *VAR2,
struct VAR3 *VAR4)

{
int VAR5;

VAR4->VAR6.VAR7.VAR8 = FUN2(VAR2, &VAR5);
if (VAR5 != 0)
{
return(VAR5);
}
VAR5 = FUN4(VAR2, VAR9, VAR4->VAR6.VAR7.VAR10);

return VAR5;
}