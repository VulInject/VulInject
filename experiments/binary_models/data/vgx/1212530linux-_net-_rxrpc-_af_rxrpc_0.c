FUN1("");
FUN2("");
FUN3("");
FUN4(VAR1);

unsigned int VAR2; 
FUN5(VAR3, VAR2, VAR4, 0644);
FUN6(VAR3, "");

static struct proto VAR5;
static const struct proto_ops VAR6;


atomic_t VAR7;
FUN7(VAR7);


atomic_t VAR8;

struct VAR9 *VAR10;

static void FUN8(struct VAR11 *);


static inline int FUN9(struct VAR11 *VAR12)
{
return FUN10(&VAR12->VAR13) < (VAR14) VAR12->VAR15;
}