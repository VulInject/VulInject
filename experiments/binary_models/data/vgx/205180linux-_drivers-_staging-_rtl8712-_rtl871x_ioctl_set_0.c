static VAR1 FUN1(struct VAR2 *VAR3)
{
u8 VAR4;

if (VAR3->VAR5 > 32)
return false;
for (VAR4 = 0; VAR4 < VAR3->VAR5; VAR4++) {

if (!((VAR3->VAR6[VAR4] >= 0x20) && (VAR3->VAR6[VAR4] <= 0x7e)))
return false;
}
return true;
}