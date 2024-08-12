int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR5)
{
struct VAR6 *VAR6 = FUN2(VAR4);
struct coda_vattr VAR7;
int VAR8;

memset(&VAR7, 0, sizeof(VAR7)); 

VAR6->VAR9 = FUN3(VAR6);
FUN4(VAR5, &VAR7);
VAR7.VAR10 = VAR11; 


VAR8 = FUN5(VAR6->VAR12, FUN6(VAR6), &VAR7);

if (!VAR8) {
FUN7(VAR6, &VAR7); 
FUN8(VAR6);
}
return VAR8;
}