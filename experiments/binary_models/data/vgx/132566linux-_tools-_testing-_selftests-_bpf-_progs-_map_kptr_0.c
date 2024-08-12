extern struct VAR1 *FUN1(unsigned long *VAR2) VAR3;
extern struct VAR1 *
FUN2(struct VAR1 **VAR4, int VAR5, int VAR6) VAR3;
extern void FUN3(struct VAR1 *VAR4) VAR3;


static void FUN4(struct VAR7 *VAR8)
{
struct VAR1 *VAR4;

VAR4 = VAR8->VAR9;

FUN5(VAR8->VAR9, VAR4);
if (!VAR4)
return;
if (VAR4->VAR5 + VAR4->VAR6 > 100)
return;

FUN5(VAR8->VAR9, VAR4);

FUN5(VAR8->VAR9, NULL);
}