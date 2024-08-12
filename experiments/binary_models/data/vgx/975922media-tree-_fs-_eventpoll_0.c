static int FUN1(struct VAR1 *VAR2, int VAR3,
int (*VAR4)(void *, void *, int), void *VAR5,
void *VAR6, void *VAR7)
{
int VAR8, VAR9 = 0;
unsigned long VAR10;
struct VAR11 *VAR12 = &VAR2->VAR13;
struct VAR14 *VAR15;
struct nested_call_node VAR16;

FUN2(&VAR2->VAR17, VAR10);


FUN3(VAR15, VAR12, VAR18) {
if (VAR15->VAR7 == VAR7 &&
(VAR15->VAR6 == VAR6 || ++VAR9 > VAR3)) {

VAR8 = -1;
goto VAR19;
}
}


VAR16.VAR7 = VAR7;
VAR16.VAR6 = VAR6;
FUN4(&VAR16.VAR18, VAR12);

FUN5(&VAR2->VAR17, VAR10);


VAR8 = (*VAR4)(VAR5, VAR6, VAR9);


FUN2(&VAR2->VAR17, VAR10);
FUN6(&VAR16.VAR18);
VAR19:
FUN5(&VAR2->VAR17, VAR10);

return VAR8;
}


static inline void FUN7(VAR20 *VAR21,
unsigned long VAR22, int VAR23)
{
unsigned long VAR10;

FUN8(&VAR21->VAR17, VAR10, VAR23);
FUN9(VAR21, VAR22);
FUN5(&VAR21->VAR17, VAR10);
}