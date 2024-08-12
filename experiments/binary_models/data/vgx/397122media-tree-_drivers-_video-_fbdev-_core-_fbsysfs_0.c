struct VAR1 *FUN1(size_t VAR2, struct VAR3 *VAR4)
{
int VAR5 = sizeof(struct VAR1);
struct VAR1 *VAR6;
char *VAR7;

if (VAR2)
VAR5 += VAR8;

VAR7 = FUN2(VAR5 + VAR2, VAR9);

if (!VAR7)
return NULL;

VAR6 = (struct VAR1 *) VAR7;

if (VAR2)
VAR6->VAR10 = VAR7 + VAR5;

VAR6->VAR3 = VAR4;

FUN3(&VAR6->VAR11);

return VAR6;
}