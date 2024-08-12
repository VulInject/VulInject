static void FUN1(struct VAR1* VAR2, int VAR3,
struct VAR4* VAR5, struct VAR6* VAR7);

int 
FUN2(const void* VAR8, const void* VAR9)
{
struct VAR10 *VAR11 = (struct VAR10*)VAR8;
struct VAR10 *VAR12 = (struct VAR10*)VAR9;
if(VAR11->VAR13 < VAR12->VAR13)
return -1;
if(VAR11->VAR13 > VAR12->VAR13)
return 1;
FUN3(VAR11->VAR13 == VAR12->VAR13);
return FUN4(&VAR11->VAR14, VAR11->VAR15, &VAR12->VAR14, VAR12->VAR15);
}