static FUN1(VAR1, VAR2);


static struct hlist_head VAR3[VAR4];
unsigned long VAR5;
unsigned long VAR6;
unsigned long VAR7;
struct lock_class VAR8[VAR9];
FUN1(VAR10, VAR9);

static inline struct VAR11 *FUN2(struct VAR12 *VAR13)
{
unsigned int VAR14 = VAR13->VAR14;


FUN3();

if (!FUN4(VAR14, VAR10)) {

FUN5(1);
return NULL;
}


return VAR8 + VAR14;
}