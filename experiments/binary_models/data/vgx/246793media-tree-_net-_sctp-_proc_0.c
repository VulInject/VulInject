static int FUN1(struct VAR1 *VAR2, void *VAR3)
{
unsigned long VAR4[VAR5];
struct VAR6 *VAR6 = VAR2->private;
int VAR7;

memset(VAR4, 0, sizeof(unsigned long) * VAR5);

FUN2(VAR4, VAR8,
VAR6->VAR9.VAR10);
for (VAR7 = 0; VAR8[VAR7].VAR11; VAR7++)
FUN3(VAR2, "", VAR8[VAR7].VAR11,
VAR4[VAR7]);

return 0;
}