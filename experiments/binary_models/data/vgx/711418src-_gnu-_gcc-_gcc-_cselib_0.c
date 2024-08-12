static FUN1(()) rtx VAR1;


static int VAR2;


static cselib_val VAR3;


static VAR4 *VAR5 = &VAR3;
static alloc_pool VAR6, VAR7, VAR8, VAR9;




static inline struct VAR10 *
FUN2 (struct VAR10 *VAR11, VAR4 *VAR12)
{
struct VAR10 *VAR13;
VAR13 = FUN3 (VAR7);
VAR13->VAR11 = VAR11;
VAR13->VAR12 = VAR12;
return VAR13;
}