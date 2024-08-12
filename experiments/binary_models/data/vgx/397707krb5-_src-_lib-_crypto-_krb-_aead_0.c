static VAR1
FUN1(struct VAR2 *VAR3, size_t VAR4)
{
const VAR5 *VAR6;

for (; VAR4 < VAR3->VAR7; VAR4++) {
VAR6 = &VAR3->VAR6[VAR4];
if (VAR3->VAR8 ? FUN2(VAR6) : FUN3(VAR6))
break;
}
return VAR4;
}