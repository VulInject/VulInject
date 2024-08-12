static struct VAR1 *FUN1(struct VAR2 *VAR3,
unsigned long VAR4)
{
struct VAR1 *VAR5 = FUN2(VAR3, VAR4);

if (VAR5)
VAR5->VAR6++;
return VAR5;
}