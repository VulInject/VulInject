int
FUN1(const char *VAR1, VAR2 *VAR3, size_t VAR4)
{
int	 VAR5 = 0;
uint16_t VAR6;

for (;;) {
VAR6 = *VAR1++;

if (VAR6 == '') {

memset(VAR3, 0, VAR4);
return VAR5;
}
if (VAR4 < sizeof (*VAR3))
return -1;

*VAR3++ = FUN2(VAR6);
VAR5 += sizeof (*VAR3);
VAR4 -= sizeof (*VAR3);
}
}