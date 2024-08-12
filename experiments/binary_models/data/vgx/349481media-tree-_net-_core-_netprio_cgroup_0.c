static int FUN1(struct VAR1 *VAR2, u32 VAR3)
{
struct VAR4 *VAR5, *new;
size_t VAR6, VAR7;


VAR5 = FUN2(VAR2->VAR8);
if (VAR5 && VAR5->VAR9 > VAR3)
return 0;


VAR6 = VAR10;
while (true) {
VAR7 = (VAR6 - FUN3(struct VAR4, VAR8)) /
sizeof(new->VAR8[0]);
if (VAR7 > VAR3)
break;
VAR6 *= 2;

if (FUN4(VAR6 < VAR10))
return -VAR11;
}


new = FUN5(VAR6, VAR12);
if (!new)
return -VAR13;

if (VAR5)
memcpy(new->VAR8, VAR5->VAR8,
VAR5->VAR9 * sizeof(VAR5->VAR8[0]));

new->VAR9 = VAR7;


FUN6(VAR2->VAR8, new);
if (VAR5)
FUN7(VAR5, VAR14);
return 0;
}