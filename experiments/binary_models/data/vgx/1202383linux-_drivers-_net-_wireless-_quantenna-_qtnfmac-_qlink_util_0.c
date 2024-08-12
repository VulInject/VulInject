bool FUN1(const VAR1 *VAR2, unsigned int VAR3,
unsigned int VAR4)
{
unsigned int VAR5 = VAR3 / VAR6;
u8 VAR7 = 1 << (VAR3 - (VAR5 * VAR6));

if (VAR5 >= VAR4)
return false;

return VAR2[VAR5] & VAR7;
}