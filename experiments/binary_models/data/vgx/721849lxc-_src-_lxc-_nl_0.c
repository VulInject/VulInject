void *FUN1(struct VAR1 *VAR1, size_t VAR2)
{
void *VAR3;
size_t VAR4 = VAR1->VAR5->VAR4;
size_t VAR6 = FUN2(VAR2);

if (VAR4 + VAR6 > (VAR7)VAR1->VAR8)
return FUN3(NULL, VAR9);

VAR3 = ((char *)(VAR1->VAR5)) + VAR4;
VAR1->VAR5->VAR4 += VAR6;

if (VAR6 > VAR2)
memset(VAR3 + VAR2, 0, VAR6 - VAR2);

return VAR3;
}