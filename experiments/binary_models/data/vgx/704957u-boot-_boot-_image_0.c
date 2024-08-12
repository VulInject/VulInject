int FUN1(const unsigned char *VAR1, ulong VAR2)
{
const struct VAR3 *VAR4 = VAR5;

if (VAR2 < 2)
return -VAR6;

for (; VAR4->VAR7 > 0; VAR4++) {
if (!memcmp(VAR1, VAR4->VAR8, 2))
break;
}

return VAR4->VAR7;
}