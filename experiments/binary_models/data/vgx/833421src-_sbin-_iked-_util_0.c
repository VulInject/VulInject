struct VAR1 *
FUN1(uint8_t VAR2, VAR3 *VAR4)
{
static struct in6_addr  VAR5;
int			VAR6;

if (VAR2 > 128)
VAR2 = 128;

FUN2(&VAR5, sizeof(VAR5));
for (VAR6 = 0; VAR6 < VAR2 / 8; VAR6++)
VAR5.VAR7[VAR6] = 0xff;
VAR6 = VAR2 % 8;
if (VAR6)
VAR5.VAR7[VAR2 / 8] = 0xff00 >> VAR6;

memcpy(VAR4, &VAR5, sizeof(VAR5));

return (&VAR5);
}