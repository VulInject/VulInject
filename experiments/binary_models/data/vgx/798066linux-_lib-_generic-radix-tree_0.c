}
FUN1(VAR1);

static inline struct VAR2 *FUN2(gfp_t VAR3)
{
struct VAR2 *VAR4;

VAR4 = (struct VAR2 *)FUN3(VAR3|VAR5);


FUN4(VAR4, VAR6, 1, VAR3);
return VAR4;
}