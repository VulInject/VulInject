static int FUN1(struct VAR1 *VAR2, struct VAR3 *VAR4,
struct VAR5 *VAR6)
{
struct VAR7 *VAR8 = (struct VAR7 *) VAR4->VAR9;
unsigned char *VAR10 = FUN2(VAR2, VAR8->VAR11.VAR12);

VAR10 += VAR8->VAR11.VAR13;

if (!FUN3(VAR2, VAR10, VAR8->VAR11.VAR14))
return 0;

return !memcmp(VAR10 + VAR8->VAR11.VAR13, VAR8->VAR15, VAR8->VAR11.VAR14);
}

static struct tcf_ematch_ops VAR16 = {
.VAR17	  = VAR18,
.VAR19	  = VAR20,
.VAR21	  = VAR22,
.VAR23	  = VAR24,
.VAR25	  = FUN4(VAR16.VAR25)
};