void *FUN1(void **VAR1, int *VAR2, size_t VAR3,
const VAR4 *VAR5)
{
VAR4 *VAR6 = NULL;

FUN2(VAR7, VAR3, *VAR1, *VAR2, {
VAR6 = (VAR4 *)*VAR1 + (*VAR2) * VAR3;
if (VAR5)
memcpy(VAR6, VAR5, VAR3);
else if (VAR8)
memset(VAR6, VAR9, VAR3);
}, {
FUN3(VAR1);
*VAR2 = 0;
});
return VAR6;
}