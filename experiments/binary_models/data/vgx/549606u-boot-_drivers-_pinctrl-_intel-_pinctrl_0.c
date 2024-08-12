static int FUN1(const struct VAR1 *VAR2,
uint VAR3, size_t VAR4)
{
int VAR5;

VAR5 = FUN2(VAR2, VAR3);
if (VAR5 < 0)
return VAR5;

return VAR5 * VAR4;
}