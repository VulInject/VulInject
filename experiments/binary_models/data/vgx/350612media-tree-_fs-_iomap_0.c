}
FUN1(VAR1);

static struct VAR2 *
FUN2(struct VAR3 *VAR3, loff_t VAR4)
{
struct VAR5 *VAR6 = VAR3->VAR7;
struct VAR2 *VAR2;

VAR2 = FUN3(VAR6, VAR4 >> VAR8, NULL);
if (FUN4(VAR2))
return VAR2;
if (!FUN5(VAR2)) {
FUN6(VAR2);
return FUN7(-VAR9);
}
return VAR2;
}