struct VAR1 *
FUN1(uint8_t VAR2)
{
static struct in6_addr	VAR3;
int			VAR4;

memset(&VAR3, 0, sizeof(VAR3));
for (VAR4 = 0; VAR4 < VAR2 / 8; VAR4++)
VAR3.VAR5[VAR4] = 0xff;
VAR4 = VAR2 % 8;
if (VAR4)
VAR3.VAR5[VAR2 / 8] = 0xff00 >> VAR4;

return (&VAR3);
}