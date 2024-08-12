VAR1 *FUN1(uint8_t VAR2)
{
VAR1 *VAR3 = (VAR1*)FUN2(sizeof(VAR1));


VAR3->VAR4 = (VAR5*)FUN2(2 * VAR2 * 20 * sizeof(VAR5));
memset(VAR3->VAR4, 0, 2 * VAR2 * 20 * sizeof(VAR5));

VAR3->VAR6 = 0;

VAR3->VAR2 = VAR2;

return VAR3;
}