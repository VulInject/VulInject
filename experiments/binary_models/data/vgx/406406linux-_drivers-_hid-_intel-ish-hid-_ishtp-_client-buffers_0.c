int FUN1(struct VAR1 *VAR2, size_t VAR3)
{
if (!VAR2)
return -VAR4;

if (VAR3 == 0)
return 0;

VAR2->VAR5.VAR6 = FUN2(VAR3, VAR7);
if (!VAR2->VAR5.VAR6)
return -VAR8;

VAR2->VAR5.VAR9 = VAR3;
return 0;
}