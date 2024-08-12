static int
FUN1(struct VAR1 *VAR2)
{
int VAR3, VAR4;

for (VAR3 = 0; VAR3 < 4; VAR3++) {
const uint32_t VAR5 = FUN2(VAR3);
VAR4 = FUN3(VAR2, VAR6, &VAR5,
sizeof (VAR5), 0);
if (VAR4 != VAR7)
break;
}
return (VAR4);
}