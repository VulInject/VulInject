static int FUN1(struct VAR1 *VAR2)
{
int VAR3;
unsigned long VAR4;
struct dm_bitset_cursor VAR5;


VAR3 = FUN2(&VAR2->VAR6, VAR2->VAR7, &VAR2->VAR7);
if (VAR3)
return VAR3;

VAR3 = FUN3(&VAR2->VAR6, VAR2->VAR7, VAR2->VAR8, &VAR5);
if (VAR3)
return VAR3;

for (VAR4 = 0; ; VAR4++) {
if (FUN4(&VAR5))
FUN5(VAR4, VAR2->VAR9);
else
FUN6(VAR4, VAR2->VAR9);

if (VAR4 >= (VAR2->VAR8 - 1))
break;

VAR3 = FUN7(&VAR5);

if (VAR3)
break;
}

FUN8(&VAR5);

return VAR3;
}