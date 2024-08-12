void FUN1(u32 VAR1)
{
register struct VAR2 *VAR3;

VAR3 = VAR4[VAR1];

FUN2(0x00010001, &VAR3->VAR5);

while (0 != (FUN3(&VAR3->VAR6) & (1 << 20)))
;

FUN2(0x00000000, &VAR3->VAR5);
}